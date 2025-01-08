#include <iostream>
using namespace std;
int main(){
    int n,inverse;
    cout <<"Saisir une valeur entiere" <<endl;
    cin>>n;
    while(n!=0){
        int r=n%10;
        inverse=(inverse*10)+r;
        n=n/10;
    }
    cout <<"l'inverse est :" <<inverse;




    return 0;

}
