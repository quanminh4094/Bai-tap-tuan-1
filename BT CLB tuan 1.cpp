#include<iostream>
using namespace std;
void ex1a(int n){
	cout<<"Nhap vao thu(1->7) trong tuan: ";
	th:
	cin>>n; 
	if(n<1||n>7)
		{
		cout<<"Nhap lai thu: ";
		 goto th;  
		}else{
			if(n==1) cout<<"1: sunday";
			if(n==2) cout<<"2: Monday";
			if(n==3) cout<<"3: Tuesday";
			if(n==4) cout<<"4: Wednesday";
			if(n==5) cout<<"5: Thursday";
			if(n==6) cout<<"6: Friday";
			if(n==7) cout<<"7: Saturday";
		}
}
void ex1b(int n){
	do{
	cout<<"Nhap vao so KW dien tieu thu (>0) :";cin>>n;
	}while(n<0);
int DG;
	if(n>=0 && n<=100) DG=2000;
	if(n>=101 && n<=200) DG=2500;
	if(n>=201 && n<=300) DG=3000;
	if(n>301) DG=5000;
long s;
	s=n*DG;
	cout<<"Thanh tien: "<<s<<" dong";
}
void ex2a(int n){
		cout<<"Nhap n=";cin>>n;
	long tich=1;
	for(int i=1;i<=n;i++)
	{
		tich=tich*(2*i);
	}
	cout<<"Tich la: "<<tich<<endl;
}
void ex2b(int n){
	int dem;
	cout<<"Nhap n=";cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++)
		cout<<"";
		for(int j=i;j<=n;j++)
				cout<<"*";
				cout<<"\n";		
	}
}
int main(){
	int n;
	int menu;
	cout<<"1: Phan 1 if else"<<endl;
	cout<<"2: Phan 2 if else"<<endl;
	cout<<"3: Phan 1 for"<<endl;
	cout<<"4: Phan 2 for"<<endl;
	cout<<"\nChon bai:";cin>>menu;
	switch(menu){
		case 1: ex1a(n); break;
		case 2: ex1b(n); break;
		case 3: ex2a(n); break;
		case 4: ex2b(n); break;
	}
}
