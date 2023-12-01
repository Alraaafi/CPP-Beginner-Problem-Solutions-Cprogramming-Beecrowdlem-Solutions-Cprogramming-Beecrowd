#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    double n,b,r,rate;
    cin>>n;
    cout<<setprecision(2);
    cout<<fixed;

    if(n>=0 && n<=400){
        rate = 0.15;
        r = n * rate ;
        b = n + r ;
    }
    else if(n>=400.01 && n<=800){
        rate = 0.12;
        r = n * rate ;
        b = n + r ;
    }
    else if(n>=800.01 && n<=1200){
        rate = 0.10;
        r = n * rate ;
        b = n + r ;
    }
    else if(n>=1200.01 && n<=2000){
        rate = 0.07;
        r = n * rate ;
        b = n + r ;
    }
    else if(n>2000.00){
        rate = 0.04;
        r = n * rate ;
        b = n + r ;
    }

    cout<<"Novo salario: "<<b<<endl;
    cout<<"Reajuste ganho: "<<r<<endl;
    cout<<setprecision(0)<<"Em percentual: "<<rate*100<<" %"<<endl;


//Find out everyWhere ©Alraaafi
}
