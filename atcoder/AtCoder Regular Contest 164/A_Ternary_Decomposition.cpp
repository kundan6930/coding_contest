#include <iostream>
using namespace std;

int main() {
    int t;
cin>>t;
while(t--)
{
        int n, k;
        cin >> n >> k;
        if (n % 3 == 0)
         {
            if (k == 1)
             {
                cout << "YES" << endl;
            } 
            else if (k == 2 && n >= 6) 
            {
                cout << "YES" << endl;
            } 
            else if (k == 3 && n >= 12) 
            {
                cout << "YES" << endl;
            } 
            else {
                cout << "NO" << endl;
            }
        } 
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}