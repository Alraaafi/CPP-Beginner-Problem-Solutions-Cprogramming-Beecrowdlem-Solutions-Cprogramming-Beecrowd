#include<iostream>
using namespace std;
int main(){
    int n,t,k2,k3,k4,k5;
    k2=k3=k4=k5=0;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0) k2++;
        if(n%3==0) k3++;
        if(n%4==0) k4++;
        if(n%5==0) k5++;
    }
    cout<<k2<<" Multiplo(s) de 2"<<endl;
    cout<<k3<<" Multiplo(s) de 3"<<endl;
    cout<<k4<<" Multiplo(s) de 4"<<endl;
    cout<<k5<<" Multiplo(s) de 5"<<endl;
}
