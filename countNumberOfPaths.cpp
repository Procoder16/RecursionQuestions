#include<iostream>

using namespace std;

int numberOfPaths(int start, int end){    

    int count = 0;

    if(start==end){
        return 1;
    }
    else if(start>end){
        return 0;
    }

    else{
        for(int i=1; i<=6; i++){
            count+=numberOfPaths(start+i,end);
        }
    }

    return count;
}

int main(){

    int s,e;

    cout<<"ENTER THE STARTING AND THE ENDING INDEX:";
    cin>>s>>e;

    cout<<"NUMBER OF PATHS:"<<numberOfPaths(s,e);

    return 0;
}