#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    int a,b,i,sum=0;
    cin>>a>>b;
    for(i=b+1; i<=a-1; i++){
        if(i%2!=0) sum = sum+i;
    }
    cout<<sum<<endl;

    //cout<<setprecision(3);
    //cout<<fixed;

//Find out everyWhere ©Alraaafi
}
