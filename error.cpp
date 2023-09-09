#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
//	string ashu="I am a good boy";
//	string ashu;
//	cin>>ashu;
//	gets(ashu);
//	fstream kumar("text.txt",ios::out);
//	kumar<<ashu;
//    fstream kumar("text.txt ",ios::out)
//	kumar.close();
	
//	fstream mayank("text.txt",ios::in);
//	while(mayank.eof()==0)
//	{
//		getline(mayank,ashu);
//		cout<<ashu;
//	}


ofstream fout;
fout.open("firstfile.txt");
fout<<"Sita Rram"<<endl;
fout<<"good night hanuman ji";
fout.close();
return 0;
}
