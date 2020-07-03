#include <bits/stdc++.h>

using namespace std;

bool status[1000000 + 1];
void sieve()
{
    memset(status,true,1000000);
    status[1]=false;
    for (int i=4; i<1000000;i+=2)
        status[i]=false;
    for (int i=3;i<1000;i+=2)
        if (status[i])
            for (int j=i*i;j<1000000;j+=i*2)
                status[j]=false;
    return;
}



int main(){

    sieve();

    int n;
    cin>>n;

    if(status[n]){
        cout << "Prime Number" << endl;
    }else{
        cout << "Not Prime" << endl;
    }




}
