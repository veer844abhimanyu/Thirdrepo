#include<iostream>
using namespace std;
class a{
	public:
		float r;
		a(){
			cout<<"enter the radius of circle";
			cin>>r;
		}
		
		friend float area(a & ob);
		friend float perimeter(a& ob);
};
float area(a& ob)
{
	float area;
	area=3.14*ob.r*ob.r;
	return area;
}
float perimeter(a&ob)
{
	float perimeter;
	perimeter=2*3.14*ob.r;
	return perimeter;
}
int main()
{
	a obj;
	cout<<perimeter(obj)<<endl;
	cout<<area(obj);
	return 0;
}






