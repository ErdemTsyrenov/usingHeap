//
//  process.hpp
//  parallelProc
//
//  Created by Эрдэм Цыренов on 09.02.2020.
//  Copyright © 2020 Эрдэм Цыренов. All rights reserved.
//

#pragma once

struct Process{
    int processorIndex;
    int endTime;
};

bool operator<(Process a, Process b);

bool operator==(Process a, Process b);

bool operator>(Process a, Process b);
