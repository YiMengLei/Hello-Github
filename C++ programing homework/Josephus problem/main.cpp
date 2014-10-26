//
//  main.cpp
//  C++ tryout
//
//  Created by 赵闻一 on 14/10/26.
//  Copyright (c) 2014年 赵闻一. All rights reserved.
//
#include<iostream>
#include "Josephus.h"
using namespace std;
int main()
{
    int m,n;
    JosephusCircle linklist;
    cout<<"Input the people number:";
    cin>>n;
    linklist.CreatList(n);
    cout<<"Input time that they pass the hot potato:";
    cin>>m;
    cout<<"The term that they was out is:";
    linklist.Josephus(n,m);
    return 0;
}
