//
//  main.cpp
//  C++ tryout
//
//  Created by 赵闻一 on 14/10/21.
//  Copyright (c) 2014年 赵闻一. All rights reserved.
//

#include<iostream>
#include"List_Polynomial.h"
using namespace std;
int main()
{
    Pol a,b;
    string str;
    cout<<"Input X(a) polynomial"<<endl;
    input(a);
    cout<<"X(a)=";
    a.DisplayNode();
    cout<<endl<<"Now,Input Y(a) polynomial"<<endl;
    input(b);
    cout<<"Y(a)=";
    b.DisplayNode();
    cout<<"Choose whether you want add them or substract them(PRESS \"add\" for addition,\"sub\" for substraction)"<<endl;
    cin>>str;
    if(str=="add")
    {
        a+b;
        cout<<"Z(a)=X(a)+Y(a)=";
        b.DisplayNode();
    }
    if(str=="sub")
    {
        a-b;
        cout<<"Z(a)=X(a)-Y(a)=";
        a.DisplayNode();
    }
    if(str!="sub"&&str!="add")
        cout<<"BAD OPERATION！！！！";
//    string sentence = "3a^2+3a^4+5a^5";
//    char *p = strtok(const_cast<char *>(sentence.c_str()), "+");
//    while (p != NULL) {
//        cout << p << endl;
//        p = strtok(NULL, "+");
//    }
//    return 0;
}
