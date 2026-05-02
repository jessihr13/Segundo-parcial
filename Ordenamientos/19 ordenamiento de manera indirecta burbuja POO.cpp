#include <iostream>
using namespace std;

class Persona{
public:
    string nombre;
    int edad;
};

class Burbuja{
public:

    void ordenar(Persona arr[], int n){

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){

                if(arr[j].edad > arr[j+1].edad){

                    Persona temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
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

    Burbuja b;
    b.ordenar(personas,n);

    b.mostrar(personas,n);

    return 0;
}
