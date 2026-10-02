#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
 
    int n;
    cin >> n;
    int x = 1;
    bool flag = false;
 
    while (x<=n) {

        // if x is an even so x%2 return 0 which evaluates the false
        if (!(x%2)) {
            cout << x << '\n';
            flag = true;
        }
        x++;
    }
 
    if (flag==false) {
        cout << -1 << '\n';
    }
 
    return 0;
}