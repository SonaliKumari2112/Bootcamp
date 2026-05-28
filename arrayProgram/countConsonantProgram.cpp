#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter the string ";
    cin>>str;
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='i'||str[i]=='I'||
        str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
            count++;
        }
    }
    cout<<"No of consonant : "<<str.size()-count;
    return 0;
}

