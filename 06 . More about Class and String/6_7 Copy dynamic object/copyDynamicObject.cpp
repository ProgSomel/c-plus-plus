#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    string country;
    int jersy;

    Cricketer(string country, int jersy){
        this->jersy = jersy;
        this->country = country;
    }
};


int main()
{
    Cricketer* dhoni = new Cricketer("India", 7);
    Cricketer* kohli = new Cricketer("India", 18);
    *kohli = *dhoni; //? kohli will get the full object of dhoni, not the address of dhoni 
    cout << kohli->jersy << " " << kohli->jersy << endl;
    return 0;
}