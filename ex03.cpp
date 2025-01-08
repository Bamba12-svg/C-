#include <iostream>
using namespace std;
int main(){
     int annee;
      cout <<"Saisir l'annee" <<endl;
    cin>>annee;
    if((annee%4==0 && annee%100!=0) || annee%400==0){
        cout <<annee<< " est bissextile";
    }
    else{
        cout <<annee<<  "  n'est bissextile ";
    }
    return 0;
}
