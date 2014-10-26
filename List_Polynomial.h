//
//  List_Polynomial.h
//  C++ tryout
//
//  Created by 赵闻一 on 14/10/21.
//  Copyright (c) 2014年 赵闻一. All rights reserved.
//

#include <iostream>
#ifndef C___tryout_List_Polynomial_h
#define C___tryout_List_Polynomial_h


#endif

class Node {
public:
    int factor;
    int exponent;
    Node* next;
};

class Pol {
private:
    Node* head;
public:
    Pol(){head=NULL;}
    Node* InsertNode(int index,int a,int b);
    int FindNode(int pow);
    int FindPosition(int pow);
    int FindEndNode();
    int EditNode(int index,int coefficient,int pow);
    int FindNodefactor(int pow);
    Node* GetHead(){return head;}
    int DisplayNode();
    Pol operator+(Pol& PolB);
    Pol operator-(Pol& PolB);
};

void input(Pol & a);