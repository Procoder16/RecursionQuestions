#include<iostream>
using namespace std;

void inc(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    else{
        inc(n-1);
        cout<<n<<endl;
    }
}

void dec(int n){

    if(n==1){
        cout<<n;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}

int main(){

    int n;
    cout<<"ENTER THE NUMBER:";
    cin>>n;

    inc(n);
    dec(n);

    return 0;
}