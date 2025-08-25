#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n]; // 0-based indexing
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a[temp - 1] = i + 1; // Adjust for 1-based input and output
    }
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;
    return 0;
}