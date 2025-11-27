using namespace std;
#include <iostream>
bool sade(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int eded;
    cout << "ededi daxil edin: ";
    cin >> eded;
    if (sade(eded)) {
        cout << eded << " sade ededdir." << endl;
    } else {
        cout << eded << " murekkeb ededdir." << endl;
    }
    return 0;
}