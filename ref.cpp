
// call by value in c++

// #include<iostream>
// using namespace std;
// void swap(int , int );
// int main(){
//     int num1=4,num2=5;
// //cout<<"enter two no ";
// //cin>>num1>>num2;
// cout<<"before swap\n num1=4\n"<<"num2=5\n";
// swap(4,5);
//     return 0;
// }
// void swap(int x,int y)
// {
	
// int c;
// c=x;
// x=y;
// y=c;
// cout<<"after swap num1="<<x<<endl<<"after swap num2="<<y<<endl;
// //return 0;
// }



// call by reference in c++
#include<iostream>
using namespace std;
void swap(int &x , int &y)
{
int c;
c=x;
x=y;
y=c;
cout<<"after swap num1="<<x<<endl<<"after swap num2="<<y<<endl;
//return 0;
}


int main(){
    int num1=8,num2=6;
//cout<<"enter two no ";
//cin>>num1>>num2;
cout<<"before swap\n num1=4\n"<<"num2=5\n";
swap(num1,num2);
    return 0;
}
// void swap(int &x,int &y)





// 
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


	
