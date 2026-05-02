#include <iostream>
using namespace std;

class Persona{
public:
    string nombre;
    int edad;
};

class MergeSort{
public:

    void merge(Persona arr[], int ini, int mid, int fin){

        Persona temp[100];
        int i=ini, j=mid+1, k=0;

        while(i<=mid && j<=fin){
            if(arr[i].edad < arr[j].edad)
                temp[k++] = arr[i++];
            else
                temp[k++] = arr[j++];
        }

        while(i<=mid) temp[k++] = arr[i++];
        while(j<=fin) temp[k++] = arr[j++];

        for(int x=0;x<k;x++)
            arr[ini+x] = temp[x];
    }

    void ordenar(Persona arr[], int ini, int fin){

        if(ini>=fin) return;

        int mid=(ini+fin)/2;

        ordenar(arr,ini,mid);
        ordenar(arr,mid+1,fin);
        merge(arr,ini,mid,fin);
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

    MergeSort m;
    m.ordenar(personas,0,n-1);

    m.mostrar(personas,n);

    return 0;
}
