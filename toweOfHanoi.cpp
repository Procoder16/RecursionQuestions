
#include<iostream>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper){

    if(n==0){
        return;
    }

    else{
        towerOfHanoi(n-1, src, helper, dest);
        cout<<"MOVE FROM "<<src<<" TO "<<dest<<endl;
        towerOfHanoi(n-1, helper, dest, src);
    }
}

int main(){

    int n;
    cout<<"ENTER THE NUMBER OF DISCS:";
    cin >> n;

    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}