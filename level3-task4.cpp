using namespace std;
#include <iostream>
int fac(int n){
    if (n>1)
        return n*fac(n-1);
    else 
        return 1;
}
int main (){
    int n;
    cout<<"ededi daxil edin:";
    cin>>n;
    cout<< "ededin faktoriali: " << fac(n) << endl;
    return 0;
}