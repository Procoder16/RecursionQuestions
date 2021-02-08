#include<iostream>
using namespace std;

int knapsack(int value[], int wt[], int n, int W){

    if(n==0 || W==0){
        return 0;
    }

    if(wt[n-1]>W){
        return knapsack(value, wt, n-1, W);
    }

    else{

        int added = knapsack(value, wt,n-1, W-wt[n-1]) + value[n-1];
        int notadded = knapsack(value, wt, n-1, W);
        return max(added, notadded);
    }
}

int main(){

    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};

    cout<<"MAXIMUM VAKUE:"<<knapsack(value, wt, 3, 50);

    return 0;
}