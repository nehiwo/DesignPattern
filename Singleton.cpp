//
//  Singleton.cpp
//  SingletonTest
//
//  Created by 田中雅也 on 2020/10/25.
//  Copyright © 2020 田中雅也. All rights reserved.
//

#include "Singleton.hpp"

// 唯一のインスタンスをNULLで初期化
Singleton *Singleton::instance = NULL;
int Singleton::test;

//コンストラクタ
Singleton::Singleton(){
    test++;
    cout << "Singletonコンストラクタが呼び出されました" << endl;
}

//ディストラクタ
Singleton::~Singleton(){
    test = 0;
    cout << "Singletonディストラクタが呼び出されました" << endl;
}

//Get_Instance()
Singleton *Singleton::Get_Instance(){
    return instance;
}

// Create()
void Singleton::Create(){
    if (!instance){
        instance = new Singleton;
    }
}

// Destroy()
void Singleton::Destroy(){
    delete instance;
    instance  = NULL;
}

int Singleton::Get_Test(){
    int cnt = test;
    return cnt;
}
