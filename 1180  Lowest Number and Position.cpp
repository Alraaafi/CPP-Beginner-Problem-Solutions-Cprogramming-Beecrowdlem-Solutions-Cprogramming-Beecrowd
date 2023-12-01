#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;

  int arr[n],low,pos,i;

  for(i=0; i<n; i++) cin>>arr[i];

  low = arr[0];
  for(i=1; i<n; i++){
    if(low>arr[i]){
        low = arr[i];
        pos = i;
    }
  }

  cout <<"Menor valor: "<<low<<endl;
  cout <<"Posicao: "<<pos<<endl;

}
