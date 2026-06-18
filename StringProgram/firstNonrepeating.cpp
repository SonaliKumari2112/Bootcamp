#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    for(int i=0;i<s.size();i++){
        int c=0;
        for(int j=0;j<s.size();j++){
            if(s[i]==s[j]){
                c++;
            }
        }
        if(c==1){
            cout<<s[i];
            return 0;
        }
      
        
    } cout<<"no character";
    return 0;
}