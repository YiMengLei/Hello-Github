//
//  Josephus.cpp
//  C++ tryout
//
//  Created by 赵闻一 on 14/10/26.
//  Copyright (c) 2014年 赵闻一. All rights reserved.
//

#include "Josephus.h"
#include <iostream>
using namespace std;
void JosephusCircle::CreatList(int n)
{
    for(int i=0;i<n;i++)
    {
        Node *q=new Node;
        q->num=i+1;
        if(i)
        {
            rear->next=q;
            rear=q;
            rear->next=head;
        }
        else
        {
            head=rear=q;
            rear->next=head;
        }
    }
}

void JosephusCircle::Josephus(int n, int m)
{
    for(;n>0;n--)
    {
        Node *outquene;
        if(m>n)m%=n;
        for(int i=0;i<m;i++)
            rear=rear->next;
        outquene=rear->next;
        cout<<outquene->num<<" ";
        if(n==1)
            cout<<endl<<"The winner is:"<<outquene->num;
        rear->next=outquene->next;
        delete outquene;
    }
    cout<<endl;
}