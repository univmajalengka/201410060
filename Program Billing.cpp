//Program Billing
//Procedure and Function
#include <iostream>
using namespace std;
void hasil (int a);
int proses (int a, int b);
main()
{
    int j,m,d,td,sm,j2,m2,d2,td2,td3;
	float j3,m3,d3;
	
	cout<<"MENCARI PERBEDAAN 2 WAKTU (PROGRAM BILLING)"<<endl;
	cout<<endl;
    cout<<"MASUKAN jAM PERTAMA : "<<endl;
    cout<<"Jam   = ";cin>>j;
    cout<<"menit = ";cin>>m;
    cout<<"detik = ";cin>>d;
    cout<<"WAKTUNYA = "<<j<<":"<<m<<":"<<d<<endl;
    cout<<endl;
    cout<<"MASUKAN JAM KEDUA : "<<endl;
    cout<<"Jam   = ";cin>>j2;
    cout<<"menit = ";cin>>m2;
    cout<<"detik = ";cin>>d2;
    cout<<"WAKTUNYA = "<<j2<<":"<<m2<<":"<<d2<<endl;
	td=proses(j2,m2,d2);
	td2=(j2*3600)+(m2*60)+d2;
	td3=td2-td;
	j3=td3/3600;
	sm=td3%3600;
	m3=sm/60;
	d3=sm%60;
	cout<<"JADI PERBEDAAN WAKTUNYA ADALAH : "<<j3<<":"<<m3<<":"<<d3;
    return 0;
}



