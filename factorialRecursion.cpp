#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }

    else{
        return (n * factorial(n-1));
    }
}

int main(){

    int n;
    cout<<"ENTER THE NUMBER:";
    cin>>n;

    cout<<"FACTORIAL:"<<factorial(n);
    return 0;
}