#include <iostream>

using namespace std;

// Алгоритм Евкліда
int euclidean(int m, int n) {
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}

// Алгоритм послідовного перебору
int sequential(int m, int n) {
    int t = min(m, n);
    while (t > 0) {
        if (m % t == 0 && n % t == 0) {
            return t;
        }
        t--;
    }
    return 1; // НСД завжди є хоча б 1
}

int main() {
    int m, n;
    cout << "Enter the first number m: ";
    cin >> m;
    cout << "Enter the second number n: ";
    cin >> n;

    int gcd_euclidean = euclidean(m, n);
    int gcd_sequential = sequential(m, n);

    cout << "NSD by Euclid's algorithm: " << gcd_euclidean << endl;
    cout << "NSD by the sequential search algorithm: " << gcd_sequential << endl;

    return 0;
}

