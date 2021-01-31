
#include<iostream>
using namespace std;

int sumTilln(int n){

    if(n==0){
        return 0;
    }

    else{
        return (n + sumTilln(n-1));
    }
}

int main(){

    int n;
    cout<<"ENTER THE VALUE OF n UPTO WHICH THE SUM HAS TO BE CALCULATED:";
    cin>>n;

    cout<<"SUM="<<sumTilln(n);

    return 0;
}