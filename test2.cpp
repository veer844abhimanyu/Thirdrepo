//#include<iostream>
//using namespace std;
//class A{
//	public:
//	virtual void msg()
//		{
//			cout<<"Under A";
//		}
//};
//class B:public A{
//	public:
//		void msg()
//		{
//			cout<<"Under B";
//		}
//};
//int main()
//{
//	A *ptr;
//	B b;
//	ptr=&b;
//	ptr->msg();
//
//
////	A a;
////	B b;
////	a.msg();
////	b.msg();
//}



#include<iostream>
using namespace std;
class hanuman {
static 	int a;
int b;
	public:
		hanuman(){
			cout<<"enter the value of a";
			cin>>a;
		}
		void fun1(){
			cout<<"enter the value of a,b";
			cin>>b;
		}
		static void fun(){
			cout<<"value of a&b ="<<a;
		}
		
};
int main(){
hanuman f;
f.fun1();
hanuman::fun();


	return 0;
	
}





