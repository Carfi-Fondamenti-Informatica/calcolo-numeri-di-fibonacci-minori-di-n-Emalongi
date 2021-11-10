#include <iostream>
using namespace std;
int main() {
   int n=0,prec=0, succ=1,ris=0,i=0;
   prec=i;
   cin>>n;
   cout<<"1"<<endl;
   for(i=0;i<=n;i++){
       ris=prec+succ;
       prec=succ, succ=ris;
       if(ris<=n){
           cout<< ris<< endl;
       }
   }

    return 0;
}
