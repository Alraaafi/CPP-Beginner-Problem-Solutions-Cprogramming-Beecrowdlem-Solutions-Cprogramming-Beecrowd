#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double A,B,s;
    char C[100];
    cin>>C>>A>>B;

    s = A+(B*0.15);

    cout<<setprecision(2);
    cout<<fixed;
    cout<<"TOTAL = R$ "<<s<<endl;
}
