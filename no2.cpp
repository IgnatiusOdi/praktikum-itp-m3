#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a,b,c,d,e,f,g,h,x1,x2,x3,x4,x5,x6,x7,x8;
	int n=-1;
	int sisa=0;
	bool output=false;
	while(n<0 || n>255)
	{
		cout<<"Input	: ";
    		cin>>n;
	}
	cout<<"Output	: ";
	x1=pow(2,0);
	x2=pow(2,1);
	x3=pow(2,2);
	x4=pow(2,3);
	x5=pow(2,4);
	x6=pow(2,5);
	x7=pow(2,6);
	x8=pow(2,7);
	
  	a=n/x8;
	n%=x8;
	
	b=n/x7;
	n%=x7;
	
	c=n/x6;
	n%=x6;
	
	d=n/x5;
	n%=x5;
	
	e=n/x4;
	n%=x4;
	
	f=n/x3;
	n%=x3;
	
	g=n/x2;
	n%=x2;
	
	h=n/x1;
	
	cout<<a<<b<<c<<d<<" "<<e<<f<<g<<h;
  	
    return 0;
}
