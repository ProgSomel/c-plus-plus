#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y;
    cin >> x >> y;

    if(x && y >= 1){
    cout << x << " " << '+' << " " << y << " " << '=' << " " << x + y << endl;
    cout << x << " " << '*' << " " << y << " " << '=' << " " << x * y << endl;
    cout << x << " " << '-' << " " << y << " " << '=' << " " << x - y;
    }
    
    return 0;
}