//
//  ConcreteBuilder.cpp
//  SingletonTest
//
//  Created by 田中雅也 on 2020/10/26.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#include "ConcreteBuilder.hpp"

ConcreteBuilder::ConcreteBuilder(string sb){
    this->sb = sb;
}

ConcreteBuilder::~ConcreteBuilder(){
    
}

void ConcreteBuilder::Part1(string str){
    cout << sb + ":" + str << endl;
}

void ConcreteBuilder::Part2(string str){
    cout << sb + ":" + str << endl;
}

void ConcreteBuilder::Part3(string str){
    cout << sb + ":" + str << endl;
}

string ConcreteBuilder::Get_Result(){
    return sb;
}

