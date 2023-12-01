#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double r,V;

    cin>>r;

    V = (4.0/3) * 3.14159 * r * r * r;

    cout<<setprecision(3);
    cout<<fixed;
    cout<<"VOLUME = "<<V<<endl;
}
