#include <iostream>
using namespace std;
int main(){
    int i,n,cpt,vre;
    cout<<"Donner la taille du tableau : ";
    cin>>n;
    int tab[n];
    cout<<"Donner les elements du tableau : "<<endl;
    for(i+0;i<n;i++){
        cout<<"element : "<<i+1<< ":";
        cin>>tab[i];
    }
    cout<<"Donner la valeur recherche : ";
    cin>>vre;
    for(i+0;i<n;i++){
        if(tab[i]==vre){
            cpt++;
        }
    }
    if(cpt>=0){
        cout<<"Valeur recherche "<<vre<<" a ete retrouve"<<cpt<<" fois";
    }else{
        cout<<"La valeur recherche n"<<vre<<" n'a pas ete trouve";
    }

}

