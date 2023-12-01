#include<iostream>
using namespace std;
#include<iomanip>
int main(){

 int n,t,i;

 //cout<<setprecision(1);
 //cout<<fixed;
 cin>>t;

 for(int j=1; j<=t; j++){

    cin>>n;
    long long unsigned fib[n+1],f=0,l=1;


    for(i=0; i<=n; i++){
        if(i<=1) fib[i] = i;
        else{
      fib[i] = f + l;
      f = l;
      l = fib[i];
      }
    }

    //for(i=0; i<n; i++)
    cout<<"Fib("<<n<<") = "<<fib[i-1]<<endl;
 }

}
