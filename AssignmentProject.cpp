#include <iostream>
using namespace std;
class Teacher
{
public:
    int sem;
    char sec;
    Teacher()
    {
        cout << "1 for 1st Sem" << endl;
        cout << "2 for 2st Sem" << endl;
        cout << "3 for 3st Sem" << endl;
        cout << "4 for 4st Sem" << endl;
        cout << "5 for 5st Sem" << endl;
        cout << "6 for 6st Sem" << endl;
        cout<<"Choose Semester:";
        cin>>sem;
        ChooseSection();
    }
    void ChooseSection()
    {
        cout<<"A for Section A"<<endl;
        cout<<"B for Section B"<<endl;
        cout<<"C for Section C"<<endl;
        cout<<"D for Section D"<<endl;
        cout<<"E for Section E"<<endl;
        cout<<"Choose Section:";
        cin>>sec;
    }
};
class Derived:public Teacher{
    public:
    void 
        if(sem==1 && sec == 'A')
        {

        }
        else if(sem==1 && Sec=='B')
};
class Student
{
public:
    int roll,i;
    string sroll;
    Student()
    {
        cout<<"Enter Roll Number:";
        cin>>sroll;
    }
    // void Studentdetail()
    // {  
    // sroll=roll;
    // for ( i = 1322300; i <= 1322320; i++)
    // {
    //     if(i==roll)
    //     {
    //         detail();
    //         break;
    //     }
    // }
    // }
};

class detail:public Student{
    public:
        detail(int rn)
        {
            
        }
};

int main()
{
    int ch;
    cout << "Enter Your choice:";
    cin >> ch;
    if (ch == 1)
    {
        Teacher t1;
    }
    else
    {
        Student s1;
    }
    return 0;
}