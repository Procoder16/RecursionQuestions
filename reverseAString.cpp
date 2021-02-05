#include<iostream>
#include<string>

using namespace std;

void reverseString(string str){

    if(str.length() == 0){
        return;
    }

    else{
        string ros = str.substr(1);
        reverseString(ros);
        cout<<str[0];
    }
}

int main(){

    string str;
    cout<<"ENTER A STRING TO PRINT THE REVERSE:";
    cin >> str;

    reverseString(str);

    return 0;   
}