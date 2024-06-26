//Banco express
#include <iostream>
using namespace std;

int password = 202357155; 
int main()
{

    cout<<"VERIFIQUE SU IDENTIDAD"<<endl;
    cout<<"Password: <<endl;
    cin >> ClaveDigital;
    if( password==ClaveDigital)
   {
    cout<<"Bienvenido, Que deseas hacer el día de hoy?"<<endl;
    cout<<"Banco de Operaciones"<<endl;
    int answer;
    cout <<"1) Verificar Saldo."<< endl;
    cout <<"2) Depositar Saldo."<< endl;
    cout <<"3) Retirar Saldo."<< endl;
    answer = menu(answer);
    cin >> answer;
    int menu(int answer)
{
    do
    {
        switch (answer)
        {
            case 1:
                cout << "I want to run.\n";
                break;

            case 2:
                cout << "I want to walk.\n";
                break;

            case 3:
                cout << "I just want to talk to my friends.";
                break;

            default:
                cout << "Bad choice! Please try again later.\n";
        }
    } while (answer <= 0 || answer > 3);
    return answer;
}
   } 
   else{
   cout<<"Error, no se detecto"<<end; 
   }
  
}

