//
//  NoSinglrton.hpp
//  SingletonTest
//
//  Created by 田中雅也 on 2020/10/25.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#ifndef NoSinglrton_hpp
#define NoSinglrton_hpp

#include <iostream>

using namespace std;
class NoSingleton{
public:
    NoSingleton();
    ~NoSingleton();
    int Get_Test();
private:
    static int test;
};

#endif /* NoSinglrton_hpp */
