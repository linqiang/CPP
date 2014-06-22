//
//  People.cpp
//  L02
//
//  Created by zhi on 14-6-22.
//  Copyright (c) 2014年 zhi. All rights reserved.
//

#include "People.h"

People::People(){
    this->age = 10;
    this->sex = 1;
    
}

People::People(int age,int sex){
    this->age = age;
    this->sex = sex;
    
}



int People::getAge(){

    return this->age;
}

int People::getsex(){
    return this->sex;
}


void People::sayHello(){
    printf("Hello CPP\n");
}



