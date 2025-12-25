using namespace std;
#include <iostream>
int sahe(int r) {
    return 3.14 * r * r;
}
int cevre(int r) {
    return 2 * r * 3.14;
}
int main() {
    int r;
    cout << "çevrenin radiusunu daxil edin:";
    cin >> r;
    int s = sahe(r);
    int c = cevre(r);
    cout << "sahe:" << s << endl;
    cout << "uzunluq:" << c << endl;
    return 0;
}
