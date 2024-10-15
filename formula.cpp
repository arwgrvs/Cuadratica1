#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, x1=0, x2=0;
    cout<<"Asignar valores a a, b y c";
    cin>>a>>b>>c;
    if(a==0&&b==0&&c==0)
    {
        cout<<"No se puede calcular :v\n";
        cin>>a>>b>>c;
    }
    x1+=(-1*b)+sqrt((b*b)-4*(a*c))/(2*a);
    cout<<"x1 es igual a: \n";
    printf("%f\n", x1);
    x2+=(-1*b)-sqrt((b*b)-4*(a*c))/(2*a);
    cout<<"x2 es igual a: \n";
    printf("%f\n", x2);
}
