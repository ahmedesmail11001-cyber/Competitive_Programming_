#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;


    while (t--) {

        int x;
        cin >> x;

        // max input number=20 so the factorial must be stored in long long
        long long res = 1;

        if (x==0 || x==1) {
            cout << 1 << '\n';
            continue;
        }

        for (int i=1; i<=x; i++) {
            res*=i;
        }

        cout << res << '\n';
    }



    return 0;
}