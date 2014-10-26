//
//  Josephus.h
//  C++ tryout
//
//  Created by 赵闻一 on 14/10/26.
//  Copyright (c) 2014年 赵闻一. All rights reserved.
//

#ifndef __C___tryout__Josephus__
#define __C___tryout__Josephus__

#include <stdio.h>

#endif /* defined(__C___tryout__Josephus__) */

class Node
{
public:
    int num;
    Node *next;
};

class JosephusCircle
{
public:
    JosephusCircle(){rear=head=NULL;}
    void CreatList(int n);
    void Josephus(int n,int m);
private:
    Node *rear,*head;
};