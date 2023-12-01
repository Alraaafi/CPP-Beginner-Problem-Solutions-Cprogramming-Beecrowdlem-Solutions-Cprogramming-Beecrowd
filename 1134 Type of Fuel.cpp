#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	int a,g,d,i;
	a=g=d=0;
	while(1){
        cin>>i;
        if(i==1) a++;
        else if(i==2) g++;
        else if(i==3) d++;
        if(i==4) break;
	}
	printf("MUITO OBRIGADO\n");
	cout<<"Alcool: "<<a<<endl;
	cout<<"Gasolina: "<<g<<endl;
	cout<<"Diesel: "<<d<<endl;
    //cout<<setprecision(3);[10,20]
    //cout<<fixed;

//Find out everyWhere ©Alraaafi
}
