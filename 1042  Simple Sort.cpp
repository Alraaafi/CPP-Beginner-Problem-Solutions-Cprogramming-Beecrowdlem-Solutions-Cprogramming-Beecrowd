#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a<b && a<c) cout<<a<<endl;
    else if(b<a && b<c) cout<<b<<endl;
    else cout<<c<<endl;

    if(a>b && a<c) cout<<a<<endl;//3-2-1
    else if((b>a && b<c)||(b<a && b>c)) cout<<b<<endl;
    else cout<<c<<endl;

    if(a>b && a>c) cout<<a<<endl;
    else if(b>a && b>c) cout<<b<<endl;
    else cout<<c<<endl;

    cout<<"\n"<<a<<endl<<b<<endl<<c<<endl;

    //cout<<setprecision(1);
    //cout<<fixed;

//Find out everyWhere ©Alraaafi
}
