#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int pil;
	cout<<"Menu:\n";
	cout<<"1.Array 1D\n";
	cout<<"2.Array Multidimensi\n";
	cout<<"3.Perulangan Do-While\n";
	cout<<"4.Perulangan While\n";
	cout<<"\n\nPilih : "; cin>>pil;
	if(pil==1){
		cout<<"\n-- Array 1D --\n\n";
		int a[8]={4,3,6,4,2,2,3,7};
		for(int i=0; i<=7; i++){
			cout<<"Array a["<<i<<"]:"<<a[i];
			cout<<endl;
		}
	}else if(pil==2){
		cout<<"\n-- Array Multidimensi --\n\n";
		int a[3][3]={{3,5,1},{9,6,7}};
		cout<<"Array b[1][0]:"<<a[1][0];
		cout<<"\nArray b[0][1]:"<<a[0][1];
		cout<<"\nArray b[1][2]:"<<a[1][2];
	}else if(pil==3){
		cout<<"\n-- Perulangan Do-While --\n\n";
		int a=1;
		do{ 
			cout<<"Refresh!"<<endl;
			a++;
		}while(a<=8);
		cout<<"BERHASIL...";
	}else if(pil==4){
		cout<<"\n-- Perulangan While --\n\n";
		int a=10;
		while(a>=1){
			cout<<a;
			cout<<endl;
			a--;
		}
	}
}
