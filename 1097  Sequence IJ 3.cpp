#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    int k = 5;
    for(int i=1; i<=9; i+=2){
        k = k + 2;
        for(int j=k;j>=k-2; j--){
            printf("I=%d J=%d",i,j);
            cout<<endl;
        }
     }
    //cout<<setprecision(2);
    //cout<<fixed;
//Find out everyWhere ©Alraaafi
}
