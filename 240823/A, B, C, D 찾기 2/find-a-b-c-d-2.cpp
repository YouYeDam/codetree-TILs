#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[15];

    for (int i = 0; i < 15; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 15);

    for (int i = 1; i <= 40; i++) {
        for (int j = i; j <= 40; j++) {
            for (int k = j; k <= 40; k++) {
                for (int l = k; l <= 40; l++) {
                    int a = i;
                    int b = j;
                    int c = k;
                    int d = l;

                    int ab = a + b;
                    int bc = b + c;
                    int cd = c + d;
                    int da = d + a;
                    int ac = a + c;
                    int bd = b + d;

                    int abc = a + b + c;
                    int abd = a + b + d;
                    int acd = a + c + d;
                    int bcd = b + c + d;

                    int abcd = a + b + c + d;

                    int new_arr[15] = {a, b, c, d, ab, bc, cd, da, ac, bd, abc, abd, acd, bcd, abcd};
                    sort(new_arr, new_arr + 15);

                    bool IsSame = true;

                    for (int i = 0; i < 15; i++) {
                        if (arr[i] != new_arr[i]) {
                            IsSame = false;
                        }
                    }
                    if (IsSame) {
                        cout << a << " " << b << " " << c << " " << d;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}