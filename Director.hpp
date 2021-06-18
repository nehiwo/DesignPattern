//
//  Director.hpp
//  SingletonTest
//
//  Created by 田中雅也 on 2020/10/26.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#ifndef Director_hpp
#define Director_hpp

#include "Builder.hpp"

using namespace std;
class Director{
public:
    Director(Builder *builder);
    ~Director();
    void Construct();
private:
    Builder *builder;
};

#endif /* Director_hpp */
