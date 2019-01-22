#include<iostream>
using namespace std;
#include "complex.hpp"

int main()
{
	complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3.add(c1,c2);
	c3.display();
	c3.sub(c1,c2);
	c3.display();
	c3.mul(c1,c2);
	c3.display();
	c3.div(c1,c2);
	c3.display();
	c3.conjugate(c1);
	c3.display();
	cout<<"Magnitude : "<<c1.magnitude();
	
	return 0;	
}
