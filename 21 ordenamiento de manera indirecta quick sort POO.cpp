#include <iostream>
using namespace std;

class Persona{
public:
    string nombre;
    int edad;
};

class QuickSort{
public:

    int particion(Persona arr[], int ini, int fin){

        int pivote = arr[fin].edad;
        int i = ini - 1;

        for(int j=ini;j<fin;j++){
            if(arr[j].edad < pivote){
                i++;
                Persona temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        Persona temp = arr[i+1];
        arr[i+1] = arr[fin];
        arr[fin] = temp;

        return i+1;
    }

    void ordenar(Persona arr[], int ini, int fin){

        if(ini < fin){

            int pi = particion(arr,ini,fin);

            ordenar(arr,ini,pi-1);
            ordenar(arr,pi+1,fin);
        }
    }

    void mostrar(Persona arr[], int n){

        for(int i=0;i<n;i++){
            cout<<arr[i].nombre<<" - "<<arr[i].edad<<endl;
        }
    }
};

int main(){

    int n;
    cin>>n;

    Persona personas[100];

    for(int i=0;i<n;i++){
        cin>>personas[i].nombre;
        cin>>personas[i].edad;
    }

    QuickSort q;
    q.ordenar(personas,0,n-1);

    q.mostrar(personas,n);

    return 0;
}