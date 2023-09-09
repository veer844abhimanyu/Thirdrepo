//write a program to calculate are and perimeter of a rectangle using multiple inheritance 

#include<iostream>
using namespace std;
class calculate
{
protected:
int length,breadth;
public:
void input(){
	cout<<"enter the length and breadth ";
	cin>>length>>breadth;
}
};
class perimeter:public calculate{

	public:
void fun(){
	int peri=2*(length*breadth );
	cout<<"perimeter of a rectangle ="<<peri<<endl;

}

};
class area:public perimeter{
public:

void fun2 (){
	int area=(length *breadth );
	cout<<"area of a rectangle "<<area<<endl;
}
};



int main(){

area a1;
a1.input();
a1.fun();
a1.fun2();
	cout<<"||sita ram||";
		return 0;
}

