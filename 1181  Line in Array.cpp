#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,lin;
    char ch;

    cin>>lin>>ch;

    cout<<setprecision(1);
    cout<<fixed;
    double arr[12][12],sum = 0;

    for(i=0; i<12; i++){
        for(j=0; j<12; j++)
            cin>>arr[i][j];
    }

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            if(i==lin) sum = sum + arr[i][j];
        }
    }

    if(ch == 'S') cout <<sum << endl;
    else if(ch == 'M') cout <<sum/12 << endl;
}
