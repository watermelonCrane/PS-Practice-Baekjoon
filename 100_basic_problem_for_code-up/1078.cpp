#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 != 0) n--;

    if ((n / 2) % 2 == 0) {
        cout << (n + 2) * (n / 2 / 2);
    }
    else {
        cout << (n + 2) * (n / 2 / 2) + (n / 2 + 1);
    }
    

    return 0;
}