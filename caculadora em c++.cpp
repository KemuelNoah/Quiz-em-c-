#include <iostream>
#include <locale.h>
using namespace std;
//procedimento adição
float soma(float n1, float n2)
{
    float r = n1+n2;
    cout<<"O resultado da soma é: "<<r;
     return r;
}
float subtracao(float n1,float n2)
{
    float r = n1-n2;
    cout<<"O resultado da subtração é:"<<r;
     return r;
}
float multiplicacao(float n1,float n2)
{
    float r = n1*n2;
    cout<<"O resultado da multiplicacao é:"<<r;
     return r;
}
float divisao(float n1,float n2)
{
    if (n2 == 0){
        cout << "Erro: divisão por zero!";
        return 0;
    }
    float r = n1/n2;
    cout<<"O resultado da divisao é:"<<r;
    return r;
}
float media(float n1,float n2)
{
    float r = (n1+n2)/2;
    cout<<"O resultado da media é:"<<r;
     return r;
}

int main()
{
    setlocale(LC_ALL,"portuguese");

    int opc;

    cout<<"    informe a Opção:     \n";
    cout<<" 1 - soma                \n";
    cout<<" 2 - Subtração           \n";
    cout<<" 3 - Multiplicação       \n";
    cout<<" 4 - Divisão             \n";
    cout<<" 5 - Média               \n";
    cout<<" 6 - Porcentagem         \n";
    cout<<" 0 - retorna             \n";
    cin>>opc;
    if (opc == 0)
        {
        cout << "Operação cancelada pelo usuário.";
        return 0;
    }
    float n1,n2;
    cout<<"informe o primeiro valor:";
    cin>>n1;
    cout<<"informe o segundo valor:";
    cin>>n2;
    if  (opc == 1 )
        {
            soma(n1,n2);

               }else if (opc == 2 )
                        {
                            subtracao(n1,n2);

                         }else if (opc == 3 )
                                  {
                                    multiplicacao(n1,n2);

                                   }else if (opc == 4 )
                                            {
                                                divisao(n1,n2);

                                             }else if (opc == 5)
                                                    {
                                                        media(n1,n2);

                                                    }else
                                                        {
                                                                    cout<<"Opção invalida!";
                                                        }

    return 0;

}
