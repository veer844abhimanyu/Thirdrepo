#include<iostream>
using namespace std;
void fun()
{
	class abhi{
		private :
			int a ,b;
			public:
			void fun2(){
					a=2,b=4;
				int c=a+b;
				cout<<"sum of a+b="<<c<<endl;	
				}
	};
	abhi a1;
	a1.fun2();
}
int main(){
	
	
	fun();
	return 0;
	
}
