#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    char hash[26] ={0};
   for(int i=0;i<s.size();i++){
    hash[s[i]-'a']++;
   }
   string ans=" ";
   int id=0;
   for(int i=0;i<26;i++){
    if(hash[i]!=0){
        s[id]=i+'a';
        id++;
    }
    
   }
   s.resize(id);
    cout<<s;
    return 0;
}