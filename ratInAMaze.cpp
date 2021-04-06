#include<iostream>

using namespace std;

bool isSafe(int** maze, int x, int y, int n){

    if(x<n && y<n && maze[x][y] == 1){
        return true;
    }

    return false;    
}

bool ratInAMaze(int** maze, int x, int y, int n, int** path){

    if((x == (n-1)) && (y == (n-1))){
        path[x][y] = 1;
        return true;
    }
    if(isSafe(maze,x,y,n)){
        path[x][y] = 1;

        if (ratInAMaze(maze, x+1, y, n, path)){
            return true;
        }
        if (ratInAMaze(maze, x, y+1, n, path))
        {
            return true;
        }
        
        path[x][y] = 0;
        return false;        
    }
    return false;
}

int main(){

    int n;
    cout<<"ENTER THE SIZE OF THE SQUARE MATRIX:";
    cin>>n;

    int** maze = new int*[n];
    for(int i=0; i<n; i++){
        maze[i] = new int[n];
    }

    cout<<"ENTER THE MAZE:";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>maze[i][j];
        }
    }

    int** path = new int*[n];
    for(int i=0; i<n; i++){
        path[i] = new int[n];
        for(int j=0; j<n; j++){
            path[i][j] = 0;
        }
    }

    if(ratInAMaze(maze, 0, 0, n, path)){
        for(int i=0; i<n; i++){
            for(int j=0; i<n; j++){
                cout<<path[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

/*
1 0 1 0 1 
1 1 1 1 1 
0 1 0 1 0 
1 0 0 1 1 
1 1 1 0 1
*/
