////write a program to calculate area of cube using copy constructor
//#include<iostream>
//usig namespace std;
//class calculate{
//	private:
//		int side;
//		public:
//		 calculate(){
//			cout<<"enter the side of a cube ";
//			cin>>side;
//					}	
//};

//write a progrma to calculate volume of a cube using
// constructor and desrrudtor


#include<iostream>
using namespace std;
class cube{
	public:
		int side;
		public:
			cube(int a){
				side=a;
			 int c2= (side*side*side);
			//cube obj;
		//	 return obj;
			cout<<"volume of a cube="<<c2<<endl;
			}
			
			~cube(){
   cout<<"contructor called to delocate the memory which is created by construdtor";							
			}
		
};
//class abhi:public cube{
//	public:
//			void s1(){
//				cout<<"value of side after destructor"<<side<<endl;
//				
//			}
//};
int main(){
cube obj(4);
//cout<<"volume of a cube="<<obj(2)<<endl;
//obj.s1()	;
//abhi six;
//six.s1();
	return 0;
}














