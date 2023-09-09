#include<iostream>
#include<cstring>
using namespace std;
class A{
	public:
		string st;
		A()
		{
			cout<<"Enter Name:";
			cin>>st;
		}
		A(A& obj)
		{
			strcpy(st,obj.st);
			cout<<obj.st;
		}
};
int main()
{
	A a1;
	A a2(a1);
}
