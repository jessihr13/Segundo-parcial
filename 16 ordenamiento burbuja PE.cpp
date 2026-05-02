#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

void burbuja(Persona arr[], int n){
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
    for(int i=0;i<n;i++)
        cout<<arr[i].nombre<<" - "<<arr[i].edad<<endl;
}

int main(){
    int n;
    cout<<"Cantidad: ";
    cin>>n;

    Persona personas[100];

    for(int i=0;i<n;i++){
        cout<<"Nombre: ";
        cin>>personas[i].nombre;
        cout<<"Edad: ";
        cin>>personas[i].edad;
    }

    burbuja(personas,n);

    cout<<"Ordenado:\n";
    mostrar(personas,n);

    return 0;
}