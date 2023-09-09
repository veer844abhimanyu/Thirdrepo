#include<iostream>
using namespace std;
class A{
	private:
		int a, b;
	public:
		A()
		{
			cout<<"Enter the value of a and b:";
			cin>>a>>b;
		}
		friend class B;
};
class B{
	public:
		int sum(A& obj)
		{
			return obj.a+obj.b;
		}
};
int main()
{
	A a1;
	B b1;
	cout<<b1.sum(a1);
}
