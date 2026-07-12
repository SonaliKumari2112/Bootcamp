#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
   string t=s;
   reverse(t.begin(),t.end());
    if(s==t){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
    return 0;
}