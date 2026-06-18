#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=0,r=s.size()-1;
    bool ispal=true;
    while (l<r)
    {
        if(s[l]==s[r]){
        
        }else{
            ispal=false;
            break;
        }
        l++;r--;
    }
    if(ispal){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
    return 0;
}