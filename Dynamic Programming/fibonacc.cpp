#include <iostream>
using namespace std;

int fibonacci(int n){
    int arr[n];
    if(n <= 1){
        return n;
    }

    arr[0] = 0;
    arr[1] = 1;

    for(int i=2; i<= n; i++){
        arr[i] = arr[i-2] + arr[i-1];
    }

    return arr[n];
}





int main(){

    cout<<fibonacci(6); // 8
}
