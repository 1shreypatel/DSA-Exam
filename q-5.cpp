#include <iostream>
using namespace std;

int main() {
    int arr[] = {9, 4, 7, 2, 5, 8, 3, 6};
    int n = 8;

    int even[ n ], odd[ n ];
    int e = 0, o = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[e] = arr[i];
            e++;
        }
        else {
            odd[o] = arr[i];
            o++;
        }
    }

    for (int i = 0; i < e; i++) {
        for (int j = 0; j < e - 1; j++) {
            if (even[j] > even[j + 1]) {
                int temp = even[j];
                even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < o; i++) {
        for (int j = 0; j < o - 1; j++) {
            if (odd[j] < odd[j + 1]) {
                int temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }

    cout << "Merged Array: ";

    for (int i = 0; i < e; i++) {
        cout << even[i] << " ";
    }

    for (int i = 0; i < o; i++) {
        cout << odd[i] << " ";
    }

    return 0;
}