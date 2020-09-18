#include <iostream>
using namespace std;
int sum(int a, int b);
int main() {
    int a,b,s;
    cout << "Enter two integers:" << endl;
    cin >> a >> b;
    s = sum(a,b);
    cout << a << "+" << b << "=" << s << endl;
    return 0;
}

