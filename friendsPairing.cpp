#include<iostream>

using namespace std;

int friendsPair(int n){

    if(n==0 || n==1 || n==2){
        return n;
    }

    else{
        return (friendsPair(n-1) + friendsPair(n-2)*(n-1));
    }
}

int main(){

    int n;
    cout<<"ENTER THE NUMBER OF FRIENDS:";
    cin>>n;

    cout<<"NUMBER OF PAIRING WAYS:"<<friendsPair(n);

    return 0;
}