#pragma once
#include<iostream>
using namespace std;
class DAVID
{
private:
    double m_Length;
    double m_width;
    double m_height;
public:
	DAVID(double a,double b,double c);//CONSTRUCTOR
	DAVID(void);
	~DAVID(void);//DESTRUCTOR
	double Volume();
	void SetHeight(double h);
	void SetWidth(double h);
	void SetLength(double h);
};

