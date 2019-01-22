
class complex
{
	public :
		float real,img;
		complex();
		complex(float r,float i);
		void getdata();
		void display();
		void add(complex, complex);
		void sub(complex, complex);
		void mul(complex, complex);
		void div(complex, complex);
		void conjugate(complex);
		float magnitude();
};
