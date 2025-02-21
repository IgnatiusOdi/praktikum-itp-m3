#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long n=0;
	long long total=0;
	int hasil=0;
	int akhir=0;
	int panjang=0;
	int temp=0;
	int pembagi=0;
	while(n<11)
	{
		cout<<"Input : ";
			cin>>n;
	}
	cout<<"Output : ";
	total = n*9;
	panjang = log10(total)+1;
	cout<<n<<" x 9 = "<<total<<" -> ";
	while(panjang>0)
	{
		pembagi = pow(10,panjang-1);
		temp = total /pembagi %10;
		cout<<temp;
		if(panjang==1)
			cout<<" = ";
		else
			cout<<" + ";
		panjang--;
		hasil += temp;
	}
	panjang = log10(hasil)+1;
	if(panjang==1)
		cout<<hasil;
	else
		cout<<hasil<<" -> ";
	if (hasil!=9)
	{
		while(panjang>0)
		{
			pembagi = pow(10,panjang-1);
			temp = hasil /pembagi %10;
			cout<<temp;
			if(panjang==1)
				cout<<" = ";
			else
				cout<<" + ";
			panjang--;
			akhir += temp;
		}
		cout<<akhir;
	}
	
	return 0;
}
