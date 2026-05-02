#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int> pila;
    int n,x;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        pila.push(x);
    }

    while(!pila.empty()){
        cout<<pila.top()<<endl;
        pila.pop();
    }

    return 0;
}
