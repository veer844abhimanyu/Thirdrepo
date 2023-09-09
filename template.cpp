#include<iostream>
using namespace std;
template<typename t>
t add(t x , t y){
	return x+y;
}
int main()
{
	float a,b,ab;
	cout<<"enter the value of a b";
	cin>>a>>b;
	ab=add<>(a,b);
	cout<<ab;
}
