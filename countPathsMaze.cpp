#include<iostream>

using namespace std;

int countPathsMaze(int n, int i, int j){

    if(i==n-1 && j==n-1){
        return 1;
    }

    else if(i>=n || j>=n){
        return 0;
    }

    else{
        return (countPathsMaze(n, i+1, j) + countPathsMaze(n, i, j+1));
    }

}

int main(){

    int n;
    cin>>n;

    cout<<"NUMBER OF PATHS:"<<countPathsMaze(n,0,0);

    return 0;
}