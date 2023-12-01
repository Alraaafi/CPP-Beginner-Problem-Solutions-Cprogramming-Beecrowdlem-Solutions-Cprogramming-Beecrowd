#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    int s,h,m,ss,rem;

    cin>>s;

    rem = s%3600;
    h = s/3600;
    m = rem/60;
    ss = rem%60;


    //cout<<setprecision(3);
    //cout<<fixed;
    cout<<h<<":"<<m<<":"<<ss<<endl;

//Find out everyWhere ©Alraaafi

}
