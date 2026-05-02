#include <iostream>
using namespace std;

class Pila{
    int arr[5];
    int tope;

public:
    Pila(){ tope = -1; }

    void push(int x){
        if(tope < 4){
            arr[++tope] = x;
        }
    }

    void pop(){
        if(tope >= 0){
            tope--;
        }
    }

    void mostrar(){
        for(int i=tope;i>=0;i--){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){

    Pila p;
    int n, x;

    cout<<"Cuantos elementos: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        p.push(x);
    }

    p.mostrar();

    return 0;
}
