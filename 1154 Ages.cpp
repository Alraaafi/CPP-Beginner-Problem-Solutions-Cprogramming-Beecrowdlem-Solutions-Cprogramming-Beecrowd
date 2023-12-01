#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,sum=0,n=0;
    double avg;
    cout<<setprecision(2);
    cout<<fixed;
    while(1){
        cin>>a;
        if(a<0)break;
        sum = sum + a;
        n++;
    }
    avg = (double)sum/n;
    cout<<avg<<endl;

}
