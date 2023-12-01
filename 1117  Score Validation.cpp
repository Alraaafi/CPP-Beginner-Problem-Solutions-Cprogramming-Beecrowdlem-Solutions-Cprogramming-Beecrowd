#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	double num,avg=0;
	int n = 2;

	cout<<setprecision(2);
    cout<<fixed;

	while(n){
        cin>>num;
        if(num>=0 && num<=10){
            n--;
            avg = avg+num;
        }
        else{
            cout<<"nota invalida"<<endl;
        }
	}
	cout<<"media = "<<avg/2<<endl;

//Find out everyWhere ©Alraaafi
}
