#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    int d,y,m,dd,rem;

    cin>>d;

    rem = d%365;
    y = d/365;
    m = rem/30;
    dd = rem%30;


    //cout<<setprecision(3);
    //cout<<fixed;
    cout<<y<<" ano(s)\n"<<m<<" mes(es)\n"<<dd<<" dia(s)"<<endl;

//Find out everyWhere ©Alraaafi

}
