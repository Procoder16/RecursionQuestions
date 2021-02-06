#include<iostream>
using namespace std;

string removeDuplicates(string s){

    if(s.length() == 0){
        return "";
    }

    else{
        char ch = s[0];
        string ans = removeDuplicates(s.substr(1));

        if(ch == ans[0]){
            return ans;
        }

        return ch+ans;
    }
}

int main(){

    string str;
    cout<<"ENTER THE STRING:";
    cin>>str;

    cout<<removeDuplicates(str);

    return 0;
}