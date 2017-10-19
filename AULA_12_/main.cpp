#include<iostream>
using namespace std;
int main()
{
	float x1=-255555.99,x2=3.955533;
	int x11,x12,x21,x22,soma,soma2;
	
	//conversao por =
	x11=x1;
	x12=x2;
	//conversao por (int)
	x21=(int)x1;
	x22=(int)x2;
	//soma por =
	soma=x11+x12;
	//soma por (int)
	soma2=x21+x22;
	cout<<"Metodo x1="<<x11<<" x2="<<x12<<" soma="<<soma<<endl;
	cout<<"Metodo (int)x1="<<x21<<" x2="<<x22<<" soma="<<soma2<<endl;
}
