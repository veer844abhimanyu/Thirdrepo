#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    ifstream read;
    string st;
    char st1[10];
    cin >> st1;
    char st2[5] = ".txt";
    string st3;
    st3 = strcat(st1, st2);
    cout<<st3;
    read.open(st3);
    while (read.eof() == 0)
    {
        getline(read, st);
        cout << st;
    }
    read.close();
    return 0;
}
