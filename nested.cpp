//write a program to add two numbers using nested class.
#include<iostream>
using namespace std;
class parent{
	public:
			class nested{
				private:
		int num1;
		int num2;
		public:
		void input()
		{
			cout<<"enter two no num1,num2"<<endl;
			cin>>num1>>num2;
			
		}
		
	
	
				void add(){
					int sum=num1+num2;
					cout<<"sum of num1+num2="<<sum<<endl;
				}
		};
};
int main(){
	parent::nested obj;
//	parent n1;
//   parent obj;
	obj.input();
	obj.add();
return 0;	
}








