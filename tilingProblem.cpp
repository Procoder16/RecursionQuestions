#include<iostream>

using namespace std;

int tilingProblem(int n){

    if(n==0){
        return 0;
    }

    else if(n==1){
        return 1;
    }

    else{
        return tilingProblem(n-1) + tilingProblem(n-2);
    }
}

int main(){

    int n;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;

    cout<<"NUMBER OF WAYS:"<<tilingProblem(n);

    return 0;
}