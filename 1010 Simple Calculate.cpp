#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double A1,B1,C1;
    double A2,B2,C2,r;

    cin>>A1>>B1>>C1;
    cin>>A2>>B2>>C2;

    r = B1*C1 + B2*C2;

    cout<<setprecision(2);
    cout<<fixed;
    cout<<"VALOR A PAGAR: R$ "<<r<<endl;
}
