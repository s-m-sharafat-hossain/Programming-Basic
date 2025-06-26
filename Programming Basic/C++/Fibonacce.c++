#include <iostream>
using   namespace std;

int main() {
    int num1 = 0, num2 = 1;
    int newFibo;

    cout << num1 << endl;
    cout << num2 << endl;

    for(int fibo = 0; fibo < 10; fibo++) {
        newFibo =  num1 + num2;
        cout << newFibo << endl;
        num1 = num2;
        num2 = newFibo;
    }

    return 0;
}