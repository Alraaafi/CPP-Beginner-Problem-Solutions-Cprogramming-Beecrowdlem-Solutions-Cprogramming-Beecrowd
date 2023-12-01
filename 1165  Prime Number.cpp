#include<iostream>
using namespace std;
int main(){
    long long int i,n,s,t;
    cin>>t;
    while(t--){
        cin>>n;
        s = 0;
        for(i=2; i<=n/2; i++){
            if(n%i==0) s++;
        }
        if(s==0) cout<<n<<" eh primo"<<endl;
        else cout<<n<<" nao eh primo"<<endl;

    }

}
