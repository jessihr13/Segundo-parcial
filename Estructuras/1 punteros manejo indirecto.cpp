#include <iostream>
using namespace std;

class Numero{
public:
    int valor;
};

int main(){

    Numero n;
    Numero *ptr = &n;

    cout<<"Ingresa un numero: ";
    cin>>ptr->valor;

    cout<<"Valor usando puntero: "<<ptr->valor<<endl;

    return 0;
}
