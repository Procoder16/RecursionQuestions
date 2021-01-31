#include<iostream>
using namespace std;

int power(int n, int p){
    if(p==0){
        return 1;
    }

    else{
        return (n*power(n,(p-1)));
    }
}

int main(){

    int n, p;

    cout<<"ENTER THE BASE AND THE EXPONENTIAL VALUE:\n";
    cin>>n>>p;

    cout<<"THE VALUE IS:"<<power(n, p);

    return 0;
}