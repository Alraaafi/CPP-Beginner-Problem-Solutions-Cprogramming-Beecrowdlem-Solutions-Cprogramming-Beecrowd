#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    double i,n,count=0,sum=0;
    for(i=1; i<=6; i++){
        cin>>n;
        if(n>0){
            sum = sum + n;
            count++;
        }
    }
    cout<<count<<" valores positivos"<<endl;
     cout<<setprecision(1);
    cout<<fixed;
    cout<<sum/count<<endl;

    //cout<<setprecision(3);
    //cout<<fixed;

//Find out everyWhere ©Alraaafi
}
