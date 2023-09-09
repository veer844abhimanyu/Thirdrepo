#include<iostream>
using namespace std;
class aditya{
	private :
		int a,b;
		public:
			 aditya (int c,int d){
				a=c;
				b=d;
//				cout<<"value of a="<<a<<endl<<"value of b="<<b<<endl;
			}
			void show(){
				cout<<"value of a="<<a<<endl<<"value of b="<<b<<endl;
			}
			void  operator -(){
				a=-a;
				b=-b;
				cout<<"value of a="<<a<<endl<<"value of b="<<b<<endl;
			}
};
int main(){
	aditya obj(-5,9);
	obj.show();
	-obj;
//	obj.show();
	return 0;
	
}

