#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{   string s;
    string ans=" ";
    getline(cin,s);
   int count=0;
    for(int i=0;i<s.size();i++){
        int count=0;
        char ch=s[i];
        if(i+1<s.size()&& isdigit(s[i+1])){
            i++;
            count=count*10+(s[i]-'0');
        }
        while(count--){
            ans+=ch;
        }
    }
    cout<<ans;
    return 0;
}