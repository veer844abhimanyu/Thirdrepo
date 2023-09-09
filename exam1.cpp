#include<iostream>
using namespace std;
class A{
	public:
		int a=10;
		A()
		{
			cout<<a;
		}
};
class B:private A{
	public:
		B()
		{
			cout<<a;
		}
};
int main()
{
//	A a;
	B b;
}
