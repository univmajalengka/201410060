#include<iostream>
using namespace std;
int main()
{
	cout<<"------------------------"<<endl;
	cout<<"-	KALKULATOR     -"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"- Pilih Menu :         -"<<endl;
	cout<<"- [1] Pertambahan      -"<<endl;
	cout<<"- [2] Pengurangan      -"<<endl;
	cout<<"- [3] Perkalian        -"<<endl;
	cout<<"- [4] Pembagian        -"<<endl;
	cout<<"- [5] Sisa Hasil Bagi  -"<<endl;
	cout<<"------------------------"<<endl;
	int a,b,c, menu;
	float d,e,f;
	cout<<"Memilih Menu No : ";cin>>menu;
	if(menu==1){
		cout<<"Masukan Angka Pertama :";cin>>a;
		cout<<"Masukan Angka Kedua   :";cin>>b;
		cout<<"Hasilnya Adalah       :";c=a+b;
		cout<<c;
	}else if(menu==2){
		cout<<"Masukan Angka Pertama :";cin>>a;
		cout<<"Masukan Angka Kedua   :";cin>>b;
		cout<<"Hasilnya Adalah       :";c=a-b;
		cout<<c;
	}else if(menu==3){
		cout<<"Masukan Angka Pertama :";cin>>a;
		cout<<"Masukan Angka Kedua   :";cin>>b;
		cout<<"Hasilnya Adalah       :";c=a*b;
		cout<<c;
	}else if(menu==4){
		cout<<"Masukan Angka Pertama :";cin>>d;
		cout<<"Masukan Angka Kedua   :";cin>>e;
		cout<<"Hasilnya Adalah       :";e=d/e;
		cout<<e;
	}else if(menu==5){
		cout<<"Masukan Angka Pertama :";cin>>a;
		cout<<"Masukan Angka Kedua   :";cin>>b;
		cout<<"Hasilnya Adalah       :";c=a%b;
		cout<<c;
	}else{
		cout<<"Menu Tidak Ada";
	}
	return false;
}
