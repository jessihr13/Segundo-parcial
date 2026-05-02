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

int main(){

    int n;
    cin>>n;

    Persona personas[100];

    for(int i=0;i<n;i++){
        cin>>personas[i].nombre;
        cin>>personas[i].edad;
    }

    burbuja(personas,n);

    for(int i=0;i<n;i++){
        cout<<personas[i].nombre<<" - "<<personas[i].edad<<endl;
    }

    return 0;
}
