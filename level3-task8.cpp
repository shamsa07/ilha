#include <iostream>
using namespace std;

int ters(int x) {
    int z = 0; 
    while (x > 0) {
        z = z * 10 + x % 10;  
        x = x / 10;           
    }
    return z;
}
int main() {
    int x;
    cout << "ededi daxil edin: ";
    cin >> x;
    int y = ters(x);
    cout << "ededin tersi: " << y << endl;
    return 0;
}