#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        string s, t;
        cin >> s >> t;

        string newString;

        int lengthOfS = s.size();
        int lengthOft = t.size();

        int minLength;

        if(lengthOfS < lengthOft){
            minLength = lengthOfS;
        }else{
            minLength = lengthOft;
        }

       for(int i = 0; i < minLength; i++){
        newString.push_back(s[i]);
        newString.push_back(t[i]);
       }
       if(s.size() > t.size()){
        for(int i = t.size(); i < s.size(); i++){
            newString.push_back(s[i]);
        }
       }else if(s.size() < t.size()){
        for(int i = s.size(); i < t.size(); i++){
            newString.push_back(t[i]);
        }
       }
       cout << newString << endl;
        
    }
    return 0;
}