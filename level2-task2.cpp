using namespace std;
#include <iostream>
void muqa(int x) {
    if (x>0)
        cout<<"eded musbetdir"<<endl;
    else if (x<0)
        cout<<"eded menfidir"<<endl;
    else 
        cout<<"eded 0-dir"<<endl;
}
int main (){
    int x;
    cout<<"eded daxil edin:"<<endl;
    cin>>x;
    muqa(x);
    return 0;
}