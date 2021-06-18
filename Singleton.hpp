//
//  Singleton.hpp
//  SingletonTest
//
//  Created by 田中雅也 on 2020/10/25.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#ifndef Singleton_hpp
#define Singleton_hpp

#include <iostream>
using namespace std;
class Singleton{
private:
    Singleton();
    ~Singleton();
    static Singleton *instance;
public:
    static Singleton *Get_Instance();
    static void Create();
    static void Destroy();
    int Get_Test();
private:
    static int test;
};

#endif /* Singleton_hpp */
