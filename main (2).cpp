#include <iostream>

using namespace std;

int main()
{
    char letra=65;
    for(int i=0;i<7; i++)
    {
        letra='A';
        for(int j=0; j<=i; j++)
        {   cout << letra;
            letra++;
        }
        letra=32;
        for(int j=0; j<11-2*i; j++)
             cout << letra;
        letra='A'+i;
        for(int j=0; j<=i; j++)
        {
             if(letra!='G')
              cout << letra;
             letra--;
        }
        cout<<endl;
    }
    int num;
    cout << "Ingrese un numero" <<endl;
    cin >> num;

    cout << "el numero ingresado es: " <<num<< endl;
    return 0;
}
