//
//  People.h
//  L02
//
//  Created by zhi on 14-6-22.
//  Copyright (c) 2014年 zhi. All rights reserved.
//

#ifndef __L02__People__
#define __L02__People__

#include <iostream>


    
class  People{
private:
    int age;
    int sex;
    
public:
    People();
    People(int age,int sex);
    void sayHello();
    int  getAge();
    int  getsex();
};


#endif /* defined(__L02__People__) */
