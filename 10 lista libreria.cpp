#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> lista;
    int n,x;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        lista.push_back(x);
    }

    for(int v : lista){
        cout<<v<<" ";
    }

    return 0;
}