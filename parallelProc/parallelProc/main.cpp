//
//  main.cpp
//  parallelProc
//
//  Created by Эрдэм Цыренов on 09.02.2020.
//  Copyright © 2020 Эрдэм Цыренов. All rights reserved.
//

#include <iostream>
#include "heap.h"
#include "process.h"

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> tasks(m);
    for (int j = 0; j < m; j++){
        cin >> tasks[j];
    }
    vector<Process> initial(n);
    for (int i = 0; i < n; i++){
        initial[i].endTime = 0;
        initial[i].processorIndex = i;
    }

    Min_Heap heap(initial);
    for (int j = 0; j < m; j++){
        Process min = heap.extract_min();
        cout << min.processorIndex << ' ' << min.endTime << endl;
        min.endTime += tasks[j];
        heap.insert(min);
    }
    return 0;
}
