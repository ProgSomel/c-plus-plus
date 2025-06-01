#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin, s)){
        string r = "";
        for(uint i = 0; i < s.length(); i++){
            if(s[i]!=' '){
                r+=s[i];
            }
        }
        sort(r.begin(), r.end());
        cout<<r<<endl;
    }
    return 0;
}