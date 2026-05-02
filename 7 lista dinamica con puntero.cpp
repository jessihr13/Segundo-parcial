#include <iostream>
using namespace std;

class Nodo{
public:
    int dato;
    Nodo *sig;
};

class Lista{
    Nodo *inicio;

public:
    Lista(){ inicio = NULL; }

    void insertar(int x){
        Nodo *nuevo = new Nodo();
        nuevo->dato = x;
        nuevo->sig = inicio;
        inicio = nuevo;
    }

    void mostrar(){
        Nodo *aux = inicio;
        while(aux){
            cout<<aux->dato<<endl;
            aux = aux->sig;
        }
    }
};

int main(){

    Lista l;
    int n,x;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        l.insertar(x);
    }

    l.mostrar();

    return 0;
}