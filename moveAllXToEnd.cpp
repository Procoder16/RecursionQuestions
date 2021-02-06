#include<iostream>
using namespace std;

string moveX(string str){

    if(str.length() == 0){
        return "";
    }
    else{

        char ch = str[0];
        string ans = moveX(str.substr(1));

        if(ch == 'x'){
            return ans+ch;
        }
        else{
            return ch+ans;
        }
    }
}

int main(){

    string str;
    cout<<"ENTER THE STRING:";
    cin>>str;

    cout<<moveX(str);

    return 0;
}