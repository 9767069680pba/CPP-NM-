#include "complex.hpp"
#include<iostream>
#include<cmath>
using namespace std;

complex :: complex()
{
	real=0;
	img=0;	
}
complex :: complex(float r, float i)
{
	real=r;
	img=i;
}
void complex :: getdata()
{
	cout<<"Enter the real and img no\n";
	cin>>real>>img;
}

void complex :: add(complex a, complex b)
{
	this->real=a.real+b.real;
	this->img=a.img+b.img;
}

void complex :: sub(complex a, complex b)
{
	this->real=a.real-b.real;
	this->img=a.img-b.img;
}

void complex :: mul(complex a, complex b)
{
	this->real=(a.real*b.real)+(a.img*b.img);
	this->img=(a.real+b.img)+(a.img+b.real);
}

void complex :: div(complex a, complex b)
{
	complex p;
	
	p.real=b.real;
	p.img=-1*b.img;
	
	this->real=((a.real*p.real)+(a.img*p.img))/(p.real*p.real);
	this->img=((a.real+p.img)+(a.img+p.real))/(p.real*p.real);
	
}

void complex :: conjugate(complex a)
{
	this->real=a.real;
	this->img=-1*a.img;	
}

float complex :: magnitude()
{
	return sqrt((real*real)+(img*img));
}

void complex:: display()
{
	if(img>0)
	{
		cout<<"\n\n"<<real<<"+"<<img<<"i"<<endl;
	}
	else
	{
		cout<<"\n\n"<<real<<img<<"i"<<endl;
	}	
}

