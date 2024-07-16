#include <iostream>
using namespace std;

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int even_sum = 0;
    int three_multi_sum = 0;

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 1) {
            even_sum += arr[i];
        }

        if (i % 3 == 2) {
            three_multi_sum += arr[i];
        }
    }
    cout << fixed;
    cout.precision(1);
    
    float three_multi_avg = (float)three_multi_sum / 3;

    cout << even_sum << " " << three_multi_avg;
    return 0;
}