#include <iostream>

using namespace std;

int main()
{
	int n=0;
	long long hasil=0,temp=1;
	while(n<1 || n>10)
	{
		cout<<"Banyak : ";
			cin>>n;
	}
	cout<<"Output : "<<endl;
	for(int o=1;o<=n;o++)
	{
		hasil = temp*9+o;
		cout<<temp<<" x 9 + "<<o<<" = "<<hasil<<endl;
		temp = temp*10+(o+1);
	}
    return 0;
}
