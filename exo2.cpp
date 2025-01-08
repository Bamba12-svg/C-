#include <iostream>
using namespace std;
int main(){
     int n;
     float montant;

    cout <<"Saisir une valeur" <<endl;
    cin>>n;
    if(n<10000){
        montant=n*0.01;
    }
     else if(n<=100000){
        montant=n*0.1;
     }
     else{
        montant=n*0.15;
     }
      cout <<"le montant est :" <<montant;
      return 0;
}
