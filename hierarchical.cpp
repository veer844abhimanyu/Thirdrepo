//#include<iostream>
//using namespace std;
//class parent {
//protected:
//int num1,num2;
//public:
//void input()
//{
//    num1 = 0;
//    num2 =0;
//	cout<<"enter num1 and num2"<<endl;
//    cin>>num1>>num2;
//}
//
//};
//class child1:public parent
//{
//    public:
//    int length,breadth;
//    void fun1()
//    {
//    length=0,breadth=0;	
//int sum=num1+num2;
//cout<<"sum of num1+num2="<<sum<<endl;
//cout<<"enter the length and breadth"<<endl;
//cin>>length>>breadth;
//    }
//};
//class child2: public parent
//{
//public:
//void show()
//{
//    int multiply=num1*num2;
//    cout<<"multiplication of num1*num2="<<multiply<<endl;
//}
//};
//class subchild1:public child1
//{
//    private:
//    int side;
//    public:
//    void print()
//    {
//int subtract=num1-num2;
//cout<<"subtraction of num1-num2="<<subtract<<endl;
//cout<<"enter the value of the side"<<endl;
//cin>>side;
//cout<<"you have entered the value of side="<<side;
//    }
//};
//class subchild2:public child1
//{
//    private:
//    int prime;
//    public:
//    void fun2()
//    {
//    	prime=0;
//        int area=length*breadth;
//        cout<<"area of rectangle="<<area<<endl;
//        cout<<"enter a prime no"<<endl;
//        cin>>prime;
//        cout<<"you have entered a prime no="<<prime<<endl;
//    }
//    void fun5()
//    {
//        int divide=num1/num2;
//        cout<<"division of num1/num2="<<divide<<endl;
//    }
//};
//int main()
//{
////    parent obj;
////    obj.input();
////    child1 obj1;
////    obj1.fun1();
////    child2 obj2;
////    obj2.show();
////    subchild1 obj3;
////    obj3.input();
////	obj3.print();
//    subchild2 obj4;
//     obj4.input();
//     obj4.fun1();
//  obj4.show();
//     //obj4.print();
////    obj4.fun2();
//     obj4.fun2();
//    obj4.fun5();
//
//    return 0;
//}


#include<iostream>
using namespace std;

class parent;
class child1;
class child2;
class subchild1;
class subchild2;




class parent {
protected:
int num1,num2;
public:
void input()
{
    num1 = 0;
    num2 =0;
	cout<<"enter num1 and num2"<<endl;
    cin>>num1>>num2;
}
};



class child1:public parent
{
    public:
    int length,breadth;
    void fun1()
    {
    length=0,breadth=0;	
int sum=num1+num2;
cout<<"sum of num1+num2="<<sum<<endl;
cout<<"enter the length and breadth"<<endl;
cin>>length>>breadth;
    }
};



class child2: public parent 
{
public:
void show()
{
    int multiply=num1*num2;
    cout<<"multiplication of num1*num2="<<multiply<<endl;
}
};



class subchild1:public child1
{
    private:
    int side;
    public:
    void print()
    {
int subtract=0;
subtract =num1-num2;
cout<<"subtraction of num1-num2="<<subtract<<endl;
cout<<"enter the value of the side"<<endl;
cin>>side;
cout<<"you have entered the value of side="<<side;
    }
};
class subchild2:public child1
{
    private:
    int prime;
    public:
    void fun2()
    {
    	prime=0;
        int area=length*breadth;
        cout<<"area of rectangle="<<area<<endl;
        cout<<"enter a prime no"<<endl;
        cin>>prime;
        cout<<"you have entered a prime no="<<prime<<endl;
    }
    void fun5()
    {
        int divide=num1/num2;
        cout<<"division of num1/num2="<<divide<<endl;
    }
};
int main()
{
//   parent obj;
//   obj.input();
//   child1 obj1;
//   obj1.fun1();
//   child2 obj2;
//   obj2.show();
//   subchild1 obj3;
//   obj3.input();
//	obj3.print();
//   
//     obj4.print();
//   obj4.fun2();
//subchild1 obj3;
//obj3.print();
//   child2 obj;
//      obj.input();
//  obj.show();
// subchild2 obj4;
//     obj4.input();
//     obj4.fun1();
//  //obj4.show();
//     obj4.fun2();
//    obj4.fun5();


subchild2 obj;
 obj.input();
obj.fun1();


subchild1 obj2; 
 obj2.fun1();
    return 0;
}
