using namespace std;
#include <iostream>
int sahe(int a) {
    return a * a;
}
int perimetr(int a) {
    return 4 * a;
}
int main() {
    int a;
    cout << "kvadrat?n t?r?fini daxil edin;";
    cin >> a;
    int x = sahe(a);
    int y = perimetr(a);
    cout << "kvadrat?n sah?si:" << x << endl;
    cout << "kvadrat?n perimetri:" << y << endl;

}