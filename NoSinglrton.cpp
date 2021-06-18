//
//  NoSinglrton.cpp
//  SingletonTest
//
//  Created by 田中雅也 on 2020/10/25.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#include "NoSinglrton.hpp"

int NoSingleton::test;

NoSingleton::NoSingleton(){
    test++;
    cout << "NoSingletonコンストラクタが呼び出されました" << endl;
}

NoSingleton::~NoSingleton(){
    test--;
    cout << "NoSingletonディストラクタが呼び出されました" << endl;
}

int NoSingleton::Get_Test(){
    int cnt = test;
    return cnt;
}
