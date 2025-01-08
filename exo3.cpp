#include <iostream>
using namespace std;
int main(){
     int a,b,c;
      cout <<"Saisir la premiere valeur " <<endl;
    cin>>a;
    cout <<"Saisir la deuxieme valeur " <<endl;
    do{
    cin>>b;
    }while(b==a);
    do{
    cout <<"Saisir la 3e valeur " <<endl;
    cin>>c;
    }while(c==a || c==b);
    if(a>b){
        int tmp=a;
        a=b;
        b=tmp;
    }
    if(b>c){
        int tmp=b;
        b=c;
        c=tmp;
    }
    if(a>b){
        int tmp=a;
        a=b;
        b=tmp;
    }

    cout<< "les nombres par ordre croissant sont "<<a<<","<<b<<","<<c;
    return 0;
}
