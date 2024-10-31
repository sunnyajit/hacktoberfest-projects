#include <iostream>
using namespace std;
// Function to print Fibonacci sequence
void printFibonacci(int n) {
    int a = 0, b = 1;
    cout << "Fibonacci sequence up to " << n << ": ";
    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    printFibonacci(n);
    return 0;
}
