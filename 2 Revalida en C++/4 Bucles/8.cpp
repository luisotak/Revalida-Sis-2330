///suma de n primeros numeros enteros
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int suma=0;
    cout<<"ingrese un numero:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        suma=suma+i;
    }
    cout<<"la suma es ="<<suma;
    return 0;
}
