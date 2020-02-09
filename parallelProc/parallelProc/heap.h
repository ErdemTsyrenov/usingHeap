//
//  heap.h
//  Heap
//
//  Created by Эрдэм Цыренов on 09.02.2020.
//  Copyright © 2020 Эрдэм Цыренов. All rights reserved.
//
#pragma once
#include <vector>
#include <cmath>
#include <utility>
#include <algorithm>
#include "process.h"
using namespace std;



class Min_Heap{
public:
    Min_Heap();
    Min_Heap(vector<Process> a);
    
    void insert(Process item);
    Process extract_min();
    
    vector<Process> get_data() const;

private:
    void sift_down(int index);
    void sift_up(int index);
    vector<Process> data;
    
};

