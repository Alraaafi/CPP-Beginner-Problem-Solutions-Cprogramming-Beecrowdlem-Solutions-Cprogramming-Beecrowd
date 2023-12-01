#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a,b,c,avg;
    cin>>a>>b>>c;

    avg = (a*2+b*3+c*5)/10;

    cout<<setprecision(1);
    cout<<fixed;
    cout<<"MEDIA = "<<avg<<endl;
}
