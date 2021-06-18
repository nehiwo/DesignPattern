//
//  main.cpp
//  SingletonTest
//
//  Created by 田中雅也 on 2020/10/25.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#include "Mynamespace.hpp"

int main(int argc, const char * argv[]) {
    Singleton::Create();
    Singleton *s = Singleton::Get_Instance();
    Singleton::Create();
    Singleton *ss = Singleton::Get_Instance();
    NoSingleton n;
    NoSingleton nn;
    // insert code here...
    cout << s << endl << "Instance of Singleton:" << ss->Get_Test() << endl << "Instance of NoSingleton:" << nn.Get_Test() << endl;
    ConcreteBuilder concretebuilder("BuilderPattern");
    Director director(&concretebuilder);
    director.Construct();
    Singleton::Destroy();
    cout << "Instance of Singleton:" << s->Get_Test() << endl;
    Singleton::Create();
    Singleton *sss = Singleton::Get_Instance();
    cout << sss << endl;
    Singleton::Destroy();
    return 0;
}
