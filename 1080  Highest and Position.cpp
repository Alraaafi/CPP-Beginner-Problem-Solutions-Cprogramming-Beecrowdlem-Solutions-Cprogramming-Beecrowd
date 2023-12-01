#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    int i,n,mx=0,ps;
    for(i=1; i<=100; i++){
        cin>>n;
        if(mx<n){
            mx = n;
            ps = i;
        }
    }
    cout<<mx<<endl<<ps<<endl;
    //cout<<setprecision(2);
    //cout<<fixed;
//Find out everyWhere ©Alraaafi
}
