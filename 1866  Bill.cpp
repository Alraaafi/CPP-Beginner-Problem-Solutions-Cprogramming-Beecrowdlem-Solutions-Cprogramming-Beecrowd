#include<iostream>
using namespace std;
int main()
{
    int t,s=0,i,x;
    cin >> t;
    while(t--){
        cin  >> x;
        /* for(i=1;i<=x; i++){
            if(i%2==0) s = s - i;
            else if(i%2!=0) s = s + i; */
            if(x%2!=0) printf("1\n");
            else printf("0\n");
        }
    }
