#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){

     double a, b, c, t;
    cin>>a>>b>>c;

    if(((b * b) - 4 * a * c) < 0 || a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        t = sqrt((b * b) - 4 * a * c);
        printf("R1 = %.5lf\nR2 = %.5lf\n", ((-b + t) / (2 * a)), ((-b - t) / (2 * a)));
    }


    //cout<<setprecision(3);
    //cout<<fixed;

//Find out everyWhere ©Alraaafi
}
