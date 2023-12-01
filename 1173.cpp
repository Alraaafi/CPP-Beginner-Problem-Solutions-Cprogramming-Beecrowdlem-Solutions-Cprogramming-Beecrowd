#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
 int arr[10],n;
 cin>>n;

 for(int i=0; i<10; i++){
    arr[i]  = n;
    n = n * 2;
 }

 for(int i=0; i<10; i++){
    printf("N[%d] = %d\n",i,arr[i]);
 }

}
