#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b,sum,i,t;
    cin>>t;
    while(t--){
    cin>>a>>b;
    if(a%2==0) a++;
    sum = a;
    for(i=1; i<b; i++){
        a = a + 2;
        sum = sum + a;
        //cout<<sum<<endl;
    }
    cout<<sum<<endl;
    }
    //cout<<setprecision(2);
    //cout<<fixed;

}
