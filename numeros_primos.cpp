// Example program
#include <iostream>

int main()
{
    using namespace std;
    int confirmacao_primo=0, numero_verifcacao=0,i=0;
    
    cout<<"Digite um numero a ser verificado como primo:";
    cin>>numero_verificacao;
    i=numero_verificacao;
    for(;i==1;i--)
    {
        if(numero_verificacao%i!=0 && i!=numero_verificao && i!=1)
        {
        confirmacao_primo=1;
        }
        
        if(confirmacao_primo==1)
        {
            cout<<"O numero nao eh primo");
            return 0;
        }
        
        else if(confirmacao_primo==0 && i==1)
        {
            cout<<"O numero eh primo";
        }
    }
}
