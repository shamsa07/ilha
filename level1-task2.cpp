using namespace std;
#include <iostream>
int cem(int a, int b) {
    return a + b;
}
int ferq(int a, int b) {
    return a - b;
}
int hasil(int a, int b) {
    return a * b;
}
int bolme(int a, int b) {
    return a / b;
}

int main() {
    int a, b;
    cout << "2 eded daxil edin:";
    cin >> a >> b;
    int x = cem(a, b);
    int y = ferq(a, b);
    int u = bolme(a, b);
    int t = hasil(a, b);
    cout << "cem: " << x << endl;
    cout << "ferq: " << y << endl;
    cout << "hasil: " << t << endl;
    cout << "bolme: " << u << endl;
    return 0;
}


