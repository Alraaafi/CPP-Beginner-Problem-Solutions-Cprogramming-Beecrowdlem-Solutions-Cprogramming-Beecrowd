#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,j,x,y;
    //cout<<setprecision(1);
    //cout<<fixed;
    while(1){
        cin>>n;
        int m[n][n];

        x = 1;
        for(i=1; i<=n; i++){
            y = x;
            x = x*2;
            for(j=1; j<n; j++){
                cout<<" "<<y;
                y = y*2;
            }
            cout<<y<<endl;
        }

    }

}
