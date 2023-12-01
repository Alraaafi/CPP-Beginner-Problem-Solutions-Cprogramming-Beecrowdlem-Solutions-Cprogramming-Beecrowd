#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int yr;
        cin >> yr;

        if(yr>=2015)
            cout << yr - 2014 <<" A.C."<< endl;
        else
            cout << 2015 - yr <<" D.C."<<endl;
    }
}
