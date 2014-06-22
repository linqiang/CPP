//
//  main.cpp
//  L01
//
//  Created by zhi on 14-6-22.
//  Copyright (c) 2014年 zhi. All rights reserved.
//

#include <iostream>
#include "People.h"

//class People{
//public:
//    void sayhello(){
//        printf("Hello CPP\n");
//    }
//};

int main(int argc, const char * argv[])
{

    People *p = new People();
    p->sayHello();
    delete p;
    
    return 0;
}

