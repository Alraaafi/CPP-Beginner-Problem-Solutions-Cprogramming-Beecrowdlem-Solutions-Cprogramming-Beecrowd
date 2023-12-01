#include<iostream>
using namespace std;
int main(){
    long long int i,n,sum=0,t;
    cin>>t;
    while(t--){
        cin>>n;
        sum = 0;
        for(i=1; i<n; i++){
            if(n%i==0) sum=sum+i;
        }
        if(n==sum) cout<<n<<" eh perfeito"<<endl;
        else cout<<n<<" nao eh perfeito"<<endl;

    }

}
