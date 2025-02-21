#include <iostream>

using namespace std;

int main()
{
	int n,m,temp;
	int total=0;
	while(n<1 || n>10)
	{
		cout<<"Banyak : ";
    		cin>>n;
	}
    cout<<"Output : "<<endl;
    for(int o=1;o<=n;o++)
    {
    	cout<<o;
		if(o<10)
    		cout<<" ";
		cout<<" x 9 = ";
    	temp = o;
		total = temp*9;
    	m = total/10;
    	temp = total%10;
    	cout<<m<<temp;
    	cout<<" -> ";
    	cout<<m<<" + "<<temp<<" = "<<m+temp;
    	cout<<endl;
	}
    return 0;
}
