#include <iostream>

using namespace std;

int main()
{
	int n;
	while(n<=0)
	{
		cout <<"Input : ";
    		cin>>n;
	}
    cout<<"Output : ";
    int prima=0;
	for(int o=2;o<=n;o++)
    {
    	if(n%o==0)
    		prima++;
	}
	if (prima==2 || prima==3 || prima==4)
 		cout<<"TRUE";
 	else
 		cout<<"FALSE";
    return 0;
}
