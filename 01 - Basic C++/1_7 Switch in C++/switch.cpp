#include<iostream>
using namespace std;
int main()
{
    // int day;
    // cin>>day;

    // switch (day)
    // {
    // case 1:
    //     /* code */
    //     cout << "saturday" << endl;
    //     break;
    // case 2:
        
    //     cout << "sunday" << endl;
    //     break;
    
    // default:
    //     cout << "monday";
    //     break;
    // }
    // return 0;

    int x;
    cin>>x;

    switch (x%2)
    {
    case 0:
        /* code */
        cout << "Even";
        break;
    
    default:
        cout << "Odd";
        break;
    }
}