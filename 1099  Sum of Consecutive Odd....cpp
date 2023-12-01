#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    int a,b,sum=0,t,i,tmp;
    cin>>t;
    for(i=1; i<=t; i++){
        cin>>a>>b;
        if(b<a){
            tmp = a;
            a = b;
            b = tmp;
        }
        for(int j=a+1; j<b; j++){
            if(j%2!=0){
                sum = sum+j;
            }
        }
        cout<<sum<<endl;
        sum = 0;
    }
    //cout<<setprecision(2);
    //cout<<fixed;
//Find out everyWhere ©Alraaafi
}
