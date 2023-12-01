#include<iostream>
using namespace std;
#include<iomanip>
int main(){
 double arr[100],n;
 cout<<setprecision(1);
 cout<<fixed;
 for(int i=0; i<100; i++){
    cin>>n;
    if(n<=10) arr[i]  = n;
    else i--;
 }

 for(int i=0; i<100; i++){
    cout<<"A["<<i<<"] = "<<arr[i]<<endl;
 }

}
