#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double r,a;
    cin>>r;
    a = 3.14159*r*r;

    cout<<setprecision(4);
    cout<<fixed;
    cout<<"A="<<a<<endl;
}
