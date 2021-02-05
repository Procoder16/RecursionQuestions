#include<iostream>
#include<string>

using namespace std;

void replacePi(string str){
    if(str.length() == 0){
        return;
    }

    else{
        if(str[0] == 'p' && str[1]=='i'){
            cout<<"3.14";
            string ros = str.substr(2);
            replacePi(ros);
        }
        else{
            cout<<str[0];
            string ros = str.substr(1);
            replacePi(ros);
        }
    }
}

int main(){
    string str;

    cout<<"ENTER THE STRING:";
    cin>>str;

    replacePi(str);

    return 0;
}