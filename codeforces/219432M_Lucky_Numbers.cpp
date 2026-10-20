#include <iostream>
using namespace std;

int main(){

    int a, b;
    cin >> a >>b;
    bool found = false;

    for (int i=a; i<=b; i++) {

        int temp =i;
        // You are Lucky until approve not
        bool flag = true;

        while (temp>0) {
            if (temp%10 !=4 && temp%10 !=7)
                // Not Lucky!!
                flag = false;
            temp/=10;
        }

        if (flag == true) {
            cout << i << ' ';
            found = true;
        }

    }

    if (found == false) {
        cout << -1 << '\n';

    }

    return 0;
}