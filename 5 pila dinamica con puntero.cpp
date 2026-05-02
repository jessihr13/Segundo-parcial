#include <iostream>
using namespace std;

class Nodo{
public:
    int dato;
    Nodo *sig;
};

class Pila{
    Nodo *tope;

public:
    Pila(){ tope = NULL; }

    void push(int x){
        Nodo *nuevo = new Nodo();
        nuevo->dato = x;
        nuevo->sig = tope;
        tope = nuevo;
    }

    void mostrar(){
        Nodo *aux = tope;
        while(aux){
            cout<<aux->dato<<endl;
            aux = aux->sig;
        }
    }
};

int main(){

    Pila p;
    int n,x;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        p.push(x);
    }

    p.mostrar();

    return 0;
}