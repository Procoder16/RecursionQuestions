#include<iostream>

using namespace std;

bool sorted(int arr[], int n){

    if(n==0){
        return true;
    }

    else{
        return (arr[0]<arr[1] && sorted(arr+1, n-1));           
    }
}

int main(){

    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;

    int arr[n];

    cout<<"ENTER THE ELEMENTS OF THE ARRAY:\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool ans = sorted(arr, n);

    if(ans){
        cout<<"THE GIVEN ARRAY IS SORTED";
    }
    else{
        cout<<"THE GIVEN ARRAY IS NOT SORTED";
    }

    return 0;
}