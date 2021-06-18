//
//  Builder.hpp
//  SingletonTest
//
//  Created by 田中雅也 on 2020/10/26.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#ifndef Builder_hpp
#define Builder_hpp

#include <iostream>
using namespace std;
class Builder{
public:
    Builder();
    virtual ~Builder();
    virtual void Part1(string str) = 0;
    virtual void Part2(string str) = 0;
    virtual void Part3(string str) = 0;
    virtual string Get_Result() = 0;
};

#endif /* Builder_hpp */
