#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a,b,c;

    cin>>a>>b;

    c = a/b;

    cout<<setprecision(3);
    cout<<fixed;
    cout<<c<<" km/l"<<endl;


}
