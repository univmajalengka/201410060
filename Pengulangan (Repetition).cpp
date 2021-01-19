//membuat setengah piramida 
//Pengulangan
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"=============================\n";
	cout<<"= MEMBUAT SETENGAH PIRAMIDA =\n";
	cout<<"=============================\n";
	cout<<"Masukan Barisnya : ";
	cin>>c;
	cout<<"\n";
	for (int a= 1; a<=c; a++)
	{
		for(int b=1;b<=a; b++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}

