#include <iostream>
using namespace std;
int main() {
    int a=1,b=1, n=0, i=0;
    int c=0;
    a=i;
    cin>>n;
    cout<<"1"<<endl;
    for(i=1;i<=n;i++){
        c=a+b;
         a=b;
         b=c;
        cout<< c<< endl;
    }
return 0;
}
