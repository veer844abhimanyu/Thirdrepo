#include<iostream>
using namespace std;
template<class t>
class A
{
	public:
		t a,b;
		A(){
			cout<<"enter the value of a&b";
			cin>>a>>b;
		}
		t add(A& ob)
		{
			return ob.a+ob.b;
		}
		
};
int main()
{
 A <int>obj;
 int g=obj.add(obj);
 cout<<g;
// obj.display();
}
