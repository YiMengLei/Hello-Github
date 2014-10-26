#include "DAVID.h"
#include<iostream>
using namespace std;
DAVID::DAVID(double a,double b,double c)
{
	  cout<<"CONSRUCTOR CALL"<<endl;
	   m_Length=a;
        m_width=b;
        m_height=c;
}

DAVID::DAVID(void)
{
	 cout<<"CONSRUCTOR CALL"<<endl;
}

DAVID::~DAVID(void)
{
	 cout<<"DESTRUCTOR CALL"<<endl;
}
double DAVID::Volume()
    {
        return m_height*m_Length*m_width;
    }

void DAVID::SetHeight(double h)
{
	m_height=h;
}

void DAVID::SetWidth(double h)
{
	m_width=h;
}

void DAVID::SetLength(double h)
{
	m_Length=h;
}