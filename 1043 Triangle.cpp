#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){

     double b,c,a,p;
    cin>>a>>b>>c;

    cout<<setprecision(1);
    cout<<fixed;

    if(a+b>c && b+c>a && a+c>b){
        p = a + b + c;
        cout<<"Perimetro = "<<p<<endl;
    }
    else{
        a = 0.5 * (a+b)*c;
        cout<<"Area = "<<a<<endl;
    }


//Find out everyWhere ©Alraaafi
}
