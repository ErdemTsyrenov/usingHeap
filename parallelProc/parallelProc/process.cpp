//
//  process.cpp
//  parallelProc
//
//  Created by Эрдэм Цыренов on 09.02.2020.
//  Copyright © 2020 Эрдэм Цыренов. All rights reserved.
//

#include "process.h"

bool operator<(Process a, Process b){
    if (a.endTime < b.endTime){
        return true;
    } else if (a.endTime == b.endTime && a.processorIndex < b.processorIndex){
        return true;
    } else{
        return false;
    }
}

bool operator==(Process a, Process b){
    if (a.processorIndex == b.processorIndex && a.endTime == b.endTime){
        return true;
    } else{
        return false;
    }
}

bool operator>(Process a, Process b){
    if (!(a < b) && !(a == b)){
        return true;
    } else{
        return false;
    }
}
