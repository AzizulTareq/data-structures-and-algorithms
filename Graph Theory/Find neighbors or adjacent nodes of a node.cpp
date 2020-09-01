#include <bits/stdc++.h>
using namespace std;

int adj[100][100];

int main(){

    int nodes, edges;
    cin>>nodes>>edges;

    int n1 = 0, n2 = 0;
    for(int i=0; i<edges; i++){
        cin>>n1>>n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    for(int i=0; i<nodes; i++){
        if(adj[3][i] == 1){
            cout<<i<<" ";
        }
    }


}

