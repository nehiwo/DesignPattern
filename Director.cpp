//
//  Director.cpp
//  SingletonTest
//
//  Created by 田中雅也 on 2020/10/26.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#include "Director.hpp"

Director::Director(Builder *builder){
    this->builder = builder;
}

Director::~Director(){
    
}

void Director::Construct(){
    builder->Part1("The Director instructs the Builder.");
    builder->Part2("The Builder accesses the ConcreteBuilder.");
    builder->Part3("The ConcreteBuilder creates elemnts of object.");
}
