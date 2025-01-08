#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"donner la taille :";
    cin>>n;
    int tmp,tab[n];
    for(int i=0;i<n;i++){
             cout <<"saisir une valeur :";
            cin>>tab[i];
    }
    for(int i=0;i<n/2;i++){
        tmp=tab[i];
        tab[i]=tab[n-1-i];
        tab[n-1-i]=tmp;
    }
     for(int i=0;i<n;i++){
         cout<<tab[i];
     }
     return 0;
}
