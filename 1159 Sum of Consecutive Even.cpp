#include<iostream>
using namespace std;
int main(){
    int i,n,sum;
    while(1){
        cin>>n;
        if(n==0) break;
        if(n%2==1) n++;
        sum = 0;
        for(i=n; i<=n+8; i+=2) sum = sum+i;
        cout<<sum<<endl;
    }

}
