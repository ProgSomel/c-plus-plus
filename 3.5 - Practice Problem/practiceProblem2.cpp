#include<bits/stdc++.h>
using namespace std;

class Cricketer{
        public:
        int jersy_no;
        string country;
};

int main()
{
    Cricketer* dhoni = new Cricketer;
    dhoni->jersy_no = 7;
    dhoni->country = "India";

    Cricketer* kohli = new Cricketer;
    kohli->jersy_no = 18;
    kohli->country = "India";


    kohli->jersy_no = dhoni->jersy_no;
    kohli->country = dhoni->country;

    delete dhoni;
    cout << kohli->jersy_no << " " << kohli->country << endl;
    return 0;
}