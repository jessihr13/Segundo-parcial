#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

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

void quickSort(Persona arr[], int ini, int fin){

    if(ini < fin){

        int pi = particion(arr,ini,fin);

        quickSort(arr,ini,pi-1);
        quickSort(arr,pi+1,fin);
    }
}

int main(){

    int n;
    cin>>n;

    Persona personas[100];

    for(int i=0;i<n;i++){
        cin>>personas[i].nombre;
        cin>>personas[i].edad;
    }

    quickSort(personas,0,n-1);

    for(int i=0;i<n;i++){
        cout<<personas[i].nombre<<" - "<<personas[i].edad<<endl;
    }

    return 0;
}