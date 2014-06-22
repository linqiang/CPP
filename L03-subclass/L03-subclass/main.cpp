//
//  main.cpp
//  L03-subclass
//
//  Created by zhi on 14-6-23.
//  Copyright (c) 2014年 zhi. All rights reserved.
//

#include <iostream>
#include "People.h"
#include "admin.h"

int main(int argc, const char * argv[])
{

    admin *ad = new admin();
    ad ->sayHello();
    std::cout << "Hello, World!\n";
    return 0;
}

