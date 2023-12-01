#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
       int a,b,i,temp,sum=0;
    scanf("%d %d", &a,&b);
    if(b<a){
            temp = b;
            b = a;
            a = temp;
    }
    for(i=a ; i<=b; i++){
        if(i%13==0){
            continue ;
        }
        sum = sum + i;
    }
    printf("%d\n",sum);


    //cout<<setprecision(2);
    //cout<<fixed;
//Find out everyWhere ©Alraaafi
}
