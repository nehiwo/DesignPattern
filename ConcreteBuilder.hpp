//
//  ConcreteBuilder.hpp
//  SingletonTest
//
//  Created by 田中雅也 on 2020/10/26.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#ifndef ConcreteBuilder_hpp
#define ConcreteBuilder_hpp

#include "Builder.hpp"
class ConcreteBuilder:public Builder{
public:
    ConcreteBuilder(string sb);
    virtual ~ConcreteBuilder();
    virtual void Part1(string str);
    virtual void Part2(string str);
    virtual void Part3(string str);
    virtual string Get_Result();
private:
    string sb;
};

#endif /* ConcreteBuilder_hpp */
