#include <iostream>
using namespace std;

class Lista{
    int arr[10];
    int n;

public:

    void llenar(){
        cout<<"Cantidad: ";
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }

    void mostrar(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){

    Lista l;
    l.llenar();
    l.mostrar();

    return 0;
}
