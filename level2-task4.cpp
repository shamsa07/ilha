using namespace std;
#include <iostream>
int cam(int a){
    if (a%2==0){
        cout<<"cut ededdir"<<endl;
   }
    else{
        cout <<"tek ededdir"<<endl;
    } 
}
int main (){
    int a;
    cout<<"ededi daxil edin:";
    cin>>a;
    cout<< cam(a)<<endl;
    return 0;
}