using namespace std;
#include <iostream>
int armstrong(int n){
    int eded=n;
    int cem=0;
    while (n>0){
        int a=n%10;
    cem+=a*a*a;
n=n/10;
    }
    if (cem==eded){
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
    int n;
    cout<<"eded daxil edin:";
    cin>>n;
    if (armstrong(n)){
        cout<<"armstrong ededdir."<<endl;
    }
    else{
        cout<<"armstrong eded deyil."<<endl;
    }
    return 0;
}