#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	int a,b,t,i;
	cin>>a>>b;
	if(a>b){
        t = a;
        a = b;
        b = t;
	}
	for(i=a+1; i<b; i++){
        if(i%5==2 || i%5==3) cout<<i<<endl;
	}
    //cout<<setprecision(3);[10,20]
    //cout<<fixed;

//Find out everyWhere ©Alraaafi
}
