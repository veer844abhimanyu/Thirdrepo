#include<iostream>
    using namespace std;
    class ram{
    protected:
    int a,b;
    public:
    ram()
    {
    cout<<"enter the value of a&b"
    cin>>a>>b;
    }
    };
    class hanuman
     {
    protected:
    int d,e;
    public:
    hanuman()
    {
    cout<<"enter the value of d&e";
    cin>>d>>e;
    }
    };
    class sita 
    {
    protected:
    int f,g;
    public:
     sita()
    {
    cout<<"Enter number of f&g";
    cin>>f>>g;
    }
    };
    class vishnu:public ram,public hanuman,public sita
    {
    public:
    void add()
    {
    int m=a+b;
    cout<<"sum of a+b="<<m<<endl; 
    }
    void subtract()
    {
    int n=d-e;
    cout<<"subtraction of d-e="<<n<<endl;
    }
    void multiply()
    {
    int o=f*g;
    cout<<"multiplication of f*g="<<o<<endl; 
    }
  /*  input();
    input1();&
    input2();*/
   };
    int main()
    {
    vishnu v1; 
  //  ram r1;
 //  r1.input ();
    v1.add();
    //hanuman h1;
 //   h1.input1();
    v1.subtract();
//    sita s1;
 //  s1.input2();
    v1.multiply();
    
    return 0;
    }
