#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int i,a,b,sum=0;
    cin>>a>>b;

    if(a%2==0 && b%2==0)
        for(i=b; i<=a ; i++)
        {
            if(i%2!=0)
                sum = sum + i;
        }
    cout<<sum<<endl;
    //cout<<setprecision(3);
    //cout<<fixed;

//Find out everyWhere ©Alraaafi
}
