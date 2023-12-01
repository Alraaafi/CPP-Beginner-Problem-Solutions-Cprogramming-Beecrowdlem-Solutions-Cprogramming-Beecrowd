#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double n1,n2,n3,sum=0;
    while(cin>>n1>>n2){
         if(n1<=0 || n2<=0) break;
         if(n1<n2){
            int t = n1;
            n1 = n2;
            n2 = t;
         }
         for(int i=n2; i<=n1; i++){
            sum = sum + i;
         }

         for(int i=n2; i<=n1; i++){
            cout<<i<<" ";
         }
        cout<<"Sum="<<sum<<endl;
        sum = 0;
    }


    //cout<<setprecision(2);
    //cout<<fixed;
//Find out everyWhere ©Alraaafi
}
