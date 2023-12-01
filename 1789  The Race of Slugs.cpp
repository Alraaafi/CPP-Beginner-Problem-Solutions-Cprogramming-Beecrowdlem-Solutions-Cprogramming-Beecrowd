#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
    int n,i;
    //cout<<setprecision(1);
    //cout<<fixed;
    while((scanf("%d",&n))!=EOF){
        int m[n],max;
        for(i=0; i<n; i++){
                cin>>m[i];
            }

            max = m[0];
            for(i=1; i<n; i++){
                if(max<m[i]) max = m[i];
            }

            if(max<10) cout<<1<<endl;
            else if(max<20) cout<<2<<endl;
            else cout<<3<<endl;
        }


}
