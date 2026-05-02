#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

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

void mergeSort(Persona arr[], int ini, int fin){

    if(ini>=fin) return;

    int mid=(ini+fin)/2;

    mergeSort(arr,ini,mid);
    mergeSort(arr,mid+1,fin);
    merge(arr,ini,mid,fin);
}

int main(){

    int n;
    cin>>n;

    Persona personas[100];

    for(int i=0;i<n;i++){
        cin>>personas[i].nombre;
        cin>>personas[i].edad;
    }

    mergeSort(personas,0,n-1);

    for(int i=0;i<n;i++){
        cout<<personas[i].nombre<<" - "<<personas[i].edad<<endl;
    }

    return 0;
}
