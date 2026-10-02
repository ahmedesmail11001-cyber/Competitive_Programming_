#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    bool flag = true;

    // i*i <= x same as i <= sqrt(x)
    // if there is no divisible for x from 2->sqrt(x) so it prime
    for (int i=2; i*i <= x; i++) {
        if (x%i==0) {
            flag = false;
            break;
        }
    }


    if (flag)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';


    return 0;
}