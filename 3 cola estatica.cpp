#include <iostream>
using namespace std;

class Cola{
    int arr[5];
    int frente, fin;

public:
    Cola(){ frente=0; fin=-1; }

    void enqueue(int x){
        if(fin < 4){
            arr[++fin] = x;
        }
    }

    void mostrar(){
        for(int i=frente;i<=fin;i++){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){

    Cola c;
    int n, x;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        c.enqueue(x);
    }

    c.mostrar();

    return 0;
}