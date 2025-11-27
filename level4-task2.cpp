using namespace std;
#include <iostream>
int m=0;
int say(int n) {
    while (n>=10) {
        n/=10;
        m+=1;
    }
    return m+1;
}
int main () {
    int n;
    cout << "ededi daxil edin: ";
    cin >> n;
    int reqemsayi = say(n);
    cout << "ededin reqemlerinin sayi: " << reqemsayi << endl;
    return 0;
}