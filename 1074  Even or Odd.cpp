#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
int N, i, x;
    cin>>N;
    for( i = 1; i <= N; i++){
        cin>>x;
        if(x == 0){
        cout<<"NULL\n";
        } else if(x % 2 == 0) {
            if(x > 0){
                cout<<"EVEN POSITIVE\n";
            } else {
                cout<<"EVEN NEGATIVE\n";
            }
        } else {
            if(x > 0) {
                cout<<"ODD POSITIVE\n";
            } else {
                cout<<"ODD NEGATIVE\n";
            }
        }
    }
    //cout<<setprecision(3);
    //cout<<fixed;

//Find out everyWhere ©Alraaafi
}
