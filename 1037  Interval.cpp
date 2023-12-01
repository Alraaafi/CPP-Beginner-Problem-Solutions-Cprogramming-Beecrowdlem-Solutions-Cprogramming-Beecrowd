#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    double a;

    cin>>a;


    //cout<<setprecision(3);
    //cout<<fixed;
    // [0,25] (25,50], (50,75], (75,100]
    if(a<0 || 100<a) cout<<"Fora de intervalo"<<endl;
    else if(a>75) cout<<"Intervalo (75,100]"<<endl;
    else if(a>50) cout<<"Intervalo (50,75]"<<endl;
    else if(a>25) cout<<"Intervalo (25,50]"<<endl;
    else cout<<"Intervalo [0,25]"<<endl;

//Find out everyWhere ©Alraaafi

}
