#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    int str1_len = str1.length(), str2_len = str2.length(), str3_len = str3.length();

    int arr[3] = {str1_len, str2_len, str3_len};

    int max_val = -1;
    int min_val = 21;
    
    for (int i = 0; i < 3; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    cout << max_val - min_val;

    return 0;
}