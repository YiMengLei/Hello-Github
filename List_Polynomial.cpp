//
//  List_Polynomial.cpp
//  C++ tryout
//
//  Created by 赵闻一 on 14/10/21.
//  Copyright (c) 2014年 赵闻一. All rights reserved.
//

#include "List_Polynomial.h"
using namespace std;
Node* Pol::InsertNode(int index,int a,int b)
{
    if(index<0) return NULL;
    int currIndex	= 1;
    Node* currNode	= head;
    while (currNode&&index>currIndex) {
        currNode=currNode->next;
        currIndex++;
    }
    if (index > 0 && currNode == NULL) return NULL;
    Node* newNode= new Node;
    newNode->factor=a;
    newNode->exponent=b;
    if(index==0)
    {
        newNode->next=head;
        head=newNode;
    }
    else
    {
        newNode->next=currNode->next;
        currNode->next=newNode;
    }
    return newNode;
}
int Pol::FindNode(int pow)
{
    Node* currNode=head;
    int currIndex=1;
    while(currNode&&pow!=currNode->exponent)
    {
        currIndex++;
        currNode=currNode->next;
    }
    if(currNode) return currIndex;
    else return 0;
}
int Pol::FindNodefactor(int pow)
{
    Node* currNode=head;
    int currIndex=1;
    while(currNode&&pow!=currNode->exponent)
    {
        currIndex++;
        currNode=currNode->next;
    }
    if(currNode) return currNode->factor;
    else return 0;
}
int Pol::FindEndNode()
{
    Node* currNode=head;
    int currIndex=1;
    while(currNode)
    {
        currIndex++;
        currNode=currNode->next;
    }
    return currIndex-1;
}
int Pol::EditNode(int index, int coefficient,int pow)
{
    Node* currNode=head;
    int currIndex=1;
    while(currNode&&pow!=currNode->exponent)
    {
        currIndex++;
        currNode=currNode->next;
    }
    currNode->factor=coefficient;//edit this node
    return 0;
}
int Pol::DisplayNode()
{
    Node* currNode=head;
    while(currNode)
    {
        if(currNode->factor==0)
            {
                currNode=currNode->next;
                if (currNode&&currNode->factor>0)
                    cout<<"+";
                continue;
            }
        if(currNode->factor==1)
            {
                if(currNode->exponent==0)
                    cout<<currNode->factor;
                if(currNode->exponent==1)
                    cout<<"a";
                
                if (currNode->exponent<0)
                    cout<<"a^("<<currNode->exponent<<")";
                if(currNode->exponent>0&&currNode->exponent!=1)
                    cout<<"a^"<<currNode->exponent;
            }
        if(currNode->factor==-1)
        {
            if(currNode->exponent==0)
                cout<<currNode->factor;
            if(currNode->exponent==1)
                cout<<"-a";
            
            if (currNode->exponent<0)
                cout<<"-a^("<<currNode->exponent<<")";
            if(currNode->exponent>0&&currNode->exponent!=1)
                cout<<"-a^"<<currNode->exponent;
        }
        if (currNode->factor!=0&&currNode->factor!=-1&&currNode->factor!=1)
            {
                if(currNode->exponent==0)
                    cout<<currNode->factor;
                if(currNode->exponent==1)
                    cout<<currNode->factor<<"a";
                
                if (currNode->exponent<0)
                    cout<<currNode->factor<<"a^("<<currNode->exponent<<")";
                if(currNode->exponent>0&&currNode->exponent!=1)
                    cout<<currNode->factor<<"a^"<<currNode->exponent;
            }
        currNode=currNode->next;
        if (currNode&&currNode->factor>0)
            cout<<"+";
    }
    cout<<endl;
    return 0;
}

int Pol::FindPosition(int pow)
{
    Node* currNode=head;
    int currIndex=1;
    while(currNode&&pow<currNode->exponent)
    {
        currIndex++;
        currNode=currNode->next;
    }
    if(currNode) return currIndex-1;
    else return -1;
}

void input(Pol & a)
{
    int index=0;
    while(1)
    {
        int coefficient=0;
        int po=0;
        cout<<"Input a monomial with the coefficient and exponent(one line two numbers,seperated by a space, coefficent 0 will lead to end(系数为零停止输入)):"<<endl;
        cin>>coefficient>>po;
        if (coefficient==0) {
            break;
        }
        if(a.FindNode(po))
        {
            int edit=coefficient+a.FindNodefactor(po);
            a.EditNode(a.FindNode(po),edit , po);
        }
        else
        {
            if (a.FindPosition(po)>=0) {
                a.InsertNode(a.FindPosition(po), coefficient, po);
            }
            else
                a.InsertNode(index, coefficient, po);
            index++;
        }
    }
}

Pol Pol::operator+(Pol& PolB)
{
    Node* PolA=head;
    for(;PolA;PolA=PolA->next)
    {
        int currPow=PolA->exponent;
        int Ifound=PolB.FindNode(currPow);
        if(Ifound)
        {
            int edit=PolA->factor+PolB.FindNodefactor(currPow);
            PolB.EditNode(Ifound,edit , currPow);
        }
        else
        {
            int app=PolB.FindPosition(currPow);
            if(app>=0)
                PolB.InsertNode(app, PolA->factor, PolA->exponent);
            else
                PolB.InsertNode(PolB.FindEndNode(), PolA->factor, PolA->exponent);
        }
    }
    return PolB;
}

Pol Pol::operator-(Pol& POLBb)
{
    Node* PolB=POLBb.head;
    for(;PolB;PolB=PolB->next)
    {
        int currPow=PolB->exponent;
        int Ifound=FindNode(currPow);
        if(Ifound)
        {
            int edit=FindNodefactor(currPow)-PolB->factor;
            EditNode(Ifound,edit , currPow);
        }
        else
        {
            int app=FindPosition(currPow);
            if(app>=0)
                InsertNode(app, -PolB->factor, PolB->exponent);
            else
                InsertNode(FindEndNode(), -PolB->factor, PolB->exponent);
        }
    }
    return *this;
}




















