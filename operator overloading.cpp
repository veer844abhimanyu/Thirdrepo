#include<iostream>
using namespace std;
class a{
	int real,imag;
	public:
		a(int r=0,int i=0){
			real=r;
			imag=i;
		}
		a operator +(a& obj)
		{
			a a2;
			a2.real=real+obj.real;
			a2.imag=imag+obj.imag;
			return a2;
		}
		void display()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
};
int main()
{
a a3(3,5),a4(5,7);
a a5;
a5=a3+a4;
a5.display();
return 0;
}
