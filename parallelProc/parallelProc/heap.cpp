//
//  heap.cpp
//  Heap
//
//  Created by Эрдэм Цыренов on 09.02.2020.
//  Copyright © 2020 Эрдэм Цыренов. All rights reserved.
//

#include "heap.h"

Min_Heap::Min_Heap(vector<Process> a){
    size_t n = a.size();
    data = a;
    for (int i = floor((n-2)/2); i >= 0; i--){
        sift_down(i);
    }
}

Min_Heap::Min_Heap(){}

vector<Process> Min_Heap::get_data() const{
    return data;
}



void Min_Heap::insert(Process item){
    data.push_back(item);
    sift_up(data.size() - 1);
    
}

Process Min_Heap::extract_min(){
    Process result = data.front();
    swap(data[0], data[data.size()-1]);
    data.pop_back();
    sift_down(0);
    return result;
}

void Min_Heap::sift_up(int index){
    while (true){
        int parentIndex = floor((index - 1)/2);
        if (parentIndex <= 0){
            if (data[parentIndex] > data[index]){
                swap(data[parentIndex], data[index]);
                index = parentIndex;
            } else{
                break;
            }
        } else{
            break;
        }
    }
}

void Min_Heap::sift_down(int index){
    size_t n = data.size();
    while(true){
        int firstChildIndex = 2*index + 1;
        int secondChildIndex = 2*index + 2;
        
        if (firstChildIndex >= n){
            break;
        }
        else if (secondChildIndex < n){
            int swapingIndex;
            if (data[firstChildIndex] < data[index] || data[secondChildIndex] < data[index]){
                if (data[firstChildIndex] < data[secondChildIndex]){
                    swapingIndex = firstChildIndex;
                } else{
                    swapingIndex = secondChildIndex;
                }
                swap(data[swapingIndex], data[index]);
                index = swapingIndex;
                
            } else{
                break;
            }
        } else if(firstChildIndex < n){
            if (data[firstChildIndex] < data[index]){
                swap(data[firstChildIndex], data[index]);
                index = firstChildIndex;
            } else{
                break;
            }
        }
    }
}
    //                   2
    //       3                    5
    //  4       6              7
