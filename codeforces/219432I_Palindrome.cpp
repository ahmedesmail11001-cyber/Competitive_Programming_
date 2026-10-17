#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n;

    long long res = 0;

    while (n>0) {   //123
        int r = n%10;   // 3
        res = res*10 + r;
        n/=10;
    }

    cout << res << '\n';
    if (temp == res) {
        // I found the palindrome num!!
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }


    return 0;
}