#include <iostream>

using namespace std;

int main()
{
	int n1=0;
	int n2=-1;
	int ganjil=0;
	int genap=0;
	int temp=0;
	int temp2=0;
	while(n1>=0)
	{
		cout<<"Inputan Negative	: ";
			cin>>n1;
	}
	cout<<endl;
	while(n2<0)
	{
		cout<<"Inputan Positive	: ";
			cin>>n2;
	}
	cout<<endl;
	cout<<"= DATA DERET ="<<endl;
	cout<<"--------------"<<endl;
	cout<<"Deret Angka		: ";
	temp = n1;
	for(temp;temp<=n2;temp++)
	{
		cout<<temp;
		if(temp<n2)
			cout<<",";
	}
	cout<<endl;
	temp = n1;
	cout<<"Deret Angka Ganjil	: ";
	for(temp;temp<=n2;temp++)
	{
		if(temp%2==1||temp%2==-1)
		{
			cout<<temp;
			ganjil++;
			if(temp<n2-1)
				cout<<",";
		}
	}
	cout<<" ("<<ganjil<<" angka ganjil)"<<endl;
	temp = n1;
	cout<<"Deret Angka Genap	: ";
	for(temp;temp<=n2;temp++)
	{
		if(temp%2==0)
		{
			cout<<temp;
			genap++;
			if(temp<n2-1)
				cout<<",";
		}
	}
	cout<<" ("<<genap<<" angka ganjil)"<<endl<<endl;
	cout<<"= Bilangan Jomblo Selamanya ="<<endl;
	cout<<"-----------------------------"<<endl;
	temp = n1;
	for(temp;temp<=n2;temp++)
	{
		if(temp==0)
			cout<<"0";
	}
	cout<<endl<<endl;
	cout<<"= Bilangan Jomblo ="<<endl;
	cout<<"-------------------"<<endl;
	if(n1*-1<n2)
	{
		temp = (n1*-1)+1;
		for(temp;temp<=n2;temp++)
		{
			cout<<temp;
			if(temp<n2)
				cout<<",";
		}
	}	
	else if(n2*-1>n1)
	{
		temp = n1;
		temp2 = (n2*-1)-1;
		for(temp;temp<=temp2;temp++)
		{
			cout<<temp;
			if(temp<temp2)
				cout<<",";
		}
	}
	cout<<endl<<endl;
	cout<<"= Bilangan Couple ="<<endl;
	cout<<"-------------------"<<endl;
	if(n1*-1<n2)
	{
		temp =	n1;
		for(temp;temp<0;temp++)
		{
			cout<<"("<<temp<<","<<temp*-1<<")";
			if(temp<-1)
				cout<<",";
		}
	}
	else if(n2*-1>n1)
	{
		temp = n2*-1;
		temp2 = n2;
		for(temp;temp<0;temp++)
		{
			cout<<"("<<temp<<","<<temp*-1<<")";
			if(temp<-1)
				cout<<",";
		}
	}
    return 0;
}
