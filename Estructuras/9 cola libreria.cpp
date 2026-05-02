#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> cola;
    int n,x;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        cola.push(x);
    }

    while(!cola.empty()){
        cout<<cola.front()<<endl;
        cola.pop();
    }

    return 0;
}
