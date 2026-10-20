#include <iostream>
using namespace std;

int main(){

    int x;
    cin >> x;

    for (int i=2; i<=x; i++) {
        // The number is prime until prove not
        bool flag = true;
        for (int j=2; j<=x; j++) {
            if (i!=j) {

                if (i%j==0) {
                    flag = false;
                }
            }
        }

        if (flag == true) {
            cout << i << ' ';
        }
    }



    return 0;
}