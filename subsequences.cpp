#include<iostream>
using namespace std;

void subsequences(string str, string ans){

    if(str.length() == 0){
        cout<<ans<<endl;
        return;
    }

    else{
        char ch = str[0];
        string ros = str.substr(1);

        subsequences(ros, ans);
        subsequences(ros, ans+ch);
    }
}


int main(){

    string str;
    cout<<"ENTER THE STRING:";
    cin>>str;

    subsequences(str, "");

    return 0;
}