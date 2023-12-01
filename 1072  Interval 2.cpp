#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	int N,n100,var;
	scanf("%d",&N);
	if(0 < N && N < 1000000){
    printf("%d\n",N);
        n100  = N/100;
	printf("%d nota(s) de R$ 100,00\n",n100);
	var = N%100;
	printf("%d nota(s) de R$ 50,00\n",var/50);
	var = var%50;
	printf("%d nota(s) de R$ 20,00\n",var/20);
	var = var%20;
	printf("%d nota(s) de R$ 10,00\n",var/10);
	var = var%10;
	printf("%d nota(s) de R$ 5,00\n",var/5);
	var = var%5;
	printf("%d nota(s) de R$ 2,00\n",var/2);
	var = var%2;
	printf("%d nota(s) de R$ 1,00\n",var);

	}
    //cout<<setprecision(3);[10,20]
    //cout<<fixed;

//Find out everyWhere ©Alraaafi
}
