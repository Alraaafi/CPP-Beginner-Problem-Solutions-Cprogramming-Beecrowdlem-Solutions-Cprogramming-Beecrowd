#include<iostream>
using namespace std;
#include<iomanip>
int main(){
 double arr[20];
 //cout<<setprecision(1);
 //cout<<fixed;
 for(int i=19; i>=0; i--){
    cin>>arr[i];
 }

 for(int i=0; i<20; i++){
    cout<<"N["<<i<<"] = "<<arr[i]<<endl;
 }

}
