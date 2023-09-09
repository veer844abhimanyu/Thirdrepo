////write a program to add two numbers using nested class.
//#include<iostream>
//using namespace std;
//class parent{
//	public:
//		class nested{
//		int num1;
//		int num2;
//		public:
//		void input()
//		{
//			cout<<"enter two no num1,num2=";
//			cin>>num1>>num2;
//			
//		}
//		
//		
//				void add(){
//					int sum=num1+num2;
//					cout<<"sum of num1+num2="<<sum<<endl;
//				}
//		};
//};
//int main(){
//	parent::nested obj;
////	parent n1;
//	obj.input();
//	obj.add();
//	//obj.add();
//return 0;	
//}

//#include<iostream>
//using namespace std;
//class parent{
//	int num1,num2;
//	int num3,num4;
//	public:
//		parent(int a,int b)
//		{
//		num1=a,num2=b;	
//		cout<<"value of num1 and num2=\n"<<num1<<endl<<num2<<endl;
//		}
//		parent(parent &t)
//		{
//	  num3=	t.num1;
//		num4=t.num2;
//		}
//		void show (){
//			cout<<"value of num3="<<num3<<endl<<"value of num4=\n"<<num4<<endl;
//		}
//};
//int main (){
//parent p1(9,  5);	
//parent p2=p1;
//p2.show();
//}

//write a program to calculate volume of a cube using copy constructor
// #include<iostream>
// using namespace std;
// class volume{
// 	int side=0,num1=0;
// 	public:
// 		volume(int a){
// 		side=a;	
// 		}
// 		volume (volume &t)
// 		{
// 		num1=t.side;
// 			int volume_of_cube=(num1*num1*num1);
// 		cout<<"volume of a cube="<<volume_of_cube<<endl;		
// 		}
// //		void print(){
// //		
// //		}
// };
// int main(){
// 	volume v1(5);
// 	volume v2=v1;
// // 	v1.print();
// 		return 0;
// }





//#include<iostream>
//using namespace std;
//class Test{
//	int base=0,height=0,area=0;
//	public:
//		void input(int ,int );
//	
//};
//void Test:: input(int n1,int n2){
//	base=n1,height=n2;
//	//	cout<<"enter the value of base and height =";
////	cin>>base>>height;
//	area=(base*height)/2;
//cout<<"area of a triagle="<<area<<endl;
//
//	}
//
//
//int main(){
//Test obj;
//obj.input(6,2)	;
////obj.fun();
//	return 0;
//}



//write a program to implement reference variable
// #include<iostream>
// using namespace std;
// int main(){
// 	int num=10;
// 	int &n1=num;
// 	int &n2=num;
// 	cout<<"value of num="<<num<<"\n value of n1="<<n1<<"\nvalue of n2="<<n2<<endl;
// 	return 0;
// }


// wrie a program to implement copy constructor in c++

// #include<iostream>
// using namespace std;
// class area{

// private :
// int length,breadth,perimeter,area_of_rectangle;
// public :
// area(int a,int b)
// {
// 	length=a;
// 	breadth=b;
// 	perimeter=2*(length*breadth);
// 	cout<<"perimeter of rectangle="<<perimeter<<endl;

// }
// area( area &c){
// area_of_rectangle=(c.length*c.breadth);
// cout<<"area of rectangle="<<area_of_rectangle<<endl;
// }
// };

// int main (){
// 	area obj(3,4);
//   area obj2=obj;

// 	return 0;

// }











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