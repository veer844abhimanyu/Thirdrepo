//write a program to implement friend class for calculating volume of a cube
#include<iostream>
// #include<conio>
using namespace std;
 class volume{
    protected:
    int side ;
    public:
    void input()
    {
cout<<"enter the side of a cube";
cin>>side;
    }
friend class cube;
 };
class cube{
    public:
    void fun(volume ref)
    {
       int d1=ref.side;
        int volume_of_cube=(d1*d1*d1);
        cout<<"volume of a cube="<<volume_of_cube<<endl;
    }
};
int main(){
    // clrscr();
    volume v1;
    v1.input();
    cube c1;
    c1.fun(v1);
  
  
    return 0;
}