#include <iostream>
using namespace std;

int main() {
    int n = 10; // Print the first 10 Fibonacci numbers
    int t1 = 0, t2 = 1, nextTerm;

    cout << "Fibonacci Sequence: " << endl;

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << ", ";
    }
    return 0;
}
