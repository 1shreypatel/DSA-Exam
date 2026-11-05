#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, -5, 20, -8, 30, -2, 15};
    int n = 7;

    int positive = 0;
    int negative = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }
    }

    cout << "Positive numbers: " << positive << endl;
    cout << "Negative numbers: " << negative << endl;

    return 0;
}