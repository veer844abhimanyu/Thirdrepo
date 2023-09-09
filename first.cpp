// #include<iostream>
// using namespace std;
// class pattern{
//     int n,i,j;
//     public:
//     pattern()
//     {
// cout<<"enter the value of n"<<endl;
// cin>>n;
// for(i=0;i<=n;i++)
// {
// for(j=0;j<=i;j++)
// {
// cout<<"* ";
// }
// cout<<"\n";
// }
//     }
// };
// int main(){
//     pattern obj;
//     cout<<"thank you god";
//     return 0;

// }
//write a program to add two numbers using nested class.
//#include<iostream>
//using namespace std;
//class parent{
//	public:
//		int num1=0;
//		int num2=0;
//		void input()
//		{
//			cout<<"enter two no num1,num2";
//			cin>>num1>>num2;
//			
//		}
//		class nested{
//			public:
//				void add(int num1,int num2){
//					int sum=num1+num2;
//					cout<<"sum of num1+num2="<<sum<<endl;
//				}
//		};
//};
//int main(){
//	parent obj;
//	parent::nested obj1;
////	parent n1;
//	obj.input();
//	obj1.add(5,6);
//return 0;	
//}





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
//  area obj2=obj;

// 	return 0;

// }




// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"hellow jfhggjkjkkjhkn world\n";
//      cout<<"how are you hanuman ji \n";
//     return 0;
// }






#include<iostream>
using namespace std;
class abhi{
    int a ;
    static int  b;
    public:
    abhi(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a=\n"<<a<<"b=\n"<<b;
    }
    static void display(){
        cout<<b;
    }
};
int abhi::b=0;
int  main(){
    abhi obj(12,23);
    obj.show();
    obj.show();
    abhi::display();
    obj.show();
return 0;
}
