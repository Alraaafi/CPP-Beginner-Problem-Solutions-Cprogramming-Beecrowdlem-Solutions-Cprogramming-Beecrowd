#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
       int n,f=0,s=1,fib,i;
       cin>>n;
       for(i=0; i<n-1; i++){
        if(i<=1){
            cout<<i<<" ";
        }else{
            fib = f + s;
            cout<<fib<<" ";
            f = s ;
            s = fib;
        }
       }
       fib = f + s;
        cout<<fib<<endl;

    //cout<<setprecision(2);
    //cout<<fixed;
//Find out everyWhere ©Alraaafi
}
