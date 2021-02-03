#include<iostream>

using namespace std;

int first(int arr[], int n, int i, int k){
    if(i==n){
        return -1; 
    }

    if(arr[i] == k){
        return i;
    }
    
    return (first(arr, n, i+1, k));
}

int last(int arr[], int n, int i, int k){
    if(i==n){
        return -1;
    }

    if(arr[i] == k){
        return i;
    }

    return (last(arr, n, i-1, k));
}

int main(){

    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;

    int arr[n];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"ENTER THE ELEMENT TO SEARCH:";
    cin>>k;

    cout<<"FIRST OCCURENCE AT:"<<first(arr, n, 0, k)<<endl;
    cout<<"LAST OCCURENCE AT:"<<last(arr, n, n-1, k);

    return 0;
}