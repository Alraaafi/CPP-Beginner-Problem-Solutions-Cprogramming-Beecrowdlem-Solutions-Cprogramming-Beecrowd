#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    double i,n,e,o,p,ng;
    e=o=p=ng=0;
    for(i=1; i<=5; i++){
        cin>>n;
        if(n>0){
            p++;
        }
        else if(n<0) ng++;
        if((int)n%2==0) e++;
        else o++;
    }

    cout<<e<<" valor(es) par(es)"<<endl;
    cout<<o<<" valor(es) impar(es)"<<endl;
    cout<<p<<" valor(es) positivo(s)"<<endl;
    cout<<ng<<" valor(es) negativo(s)"<<endl;

    //cout<<setprecision(3);
    //cout<<fixed;

//Find out everyWhere ©Alraaafi
}
