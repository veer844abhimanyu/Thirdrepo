#include<iostream>
#include<cstring>
using namespace std;
class A{
	public:
		int a;
		A()
		{
			cout<<"Enter Name:";
			cin>>a;
		}
		A(A& obj)
		{
			a=obj.a;
			cout<<obj.a;
		}
};
int main()
{
	A a1;
	A a2(a1);
}
