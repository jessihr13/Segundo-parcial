#include <iostream>
using namespace std;

class Nodo{
public:
    int dato;
    Nodo *sig;
};

class Cola{
    Nodo *frente, *fin;

public:
    Cola(){ frente = fin = NULL; }

    void enqueue(int x){
        Nodo *nuevo = new Nodo();
        nuevo->dato = x;
        nuevo->sig = NULL;

        if(!frente)
            frente = fin = nuevo;
        else{
            fin->sig = nuevo;
            fin = nuevo;
        }
    }

    void mostrar(){
        Nodo *aux = frente;
        while(aux){
            cout<<aux->dato<<endl;
            aux = aux->sig;
        }
    }
};

int main(){

    Cola c;
    int n,x;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        c.enqueue(x);
    }

    c.mostrar();

    return 0;
}
