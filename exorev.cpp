#include <iostream>
using namespace std;

int main()
{
int tailletab1;
int tailletab2;
    do{
        cout<< "saisir la taille du premier tableau"<<endl;
        cin>>tailletab1;
        cout<< "saisir la taille du deuxieme tableau"<<endl;
        cin>>tailletab2;
    }while(tailletab1<=0 || tailletab2<=0);

    int tab1[tailletab1],tab2[tailletab2];

    cout << "saisi du premier tableau:";
    cout <<endl;
    cout <<endl;
    cout <<endl;

    int cpt=0;
    int cpt1=0;
    for(int i=0; i<tailletab1; i++)
    {
        cout << "saisir une valeur: "<<endl;
        cin>>tab1[i];
        cpt++;
    }
    cout <<endl;
    cout <<endl;
    cout <<endl;

    cout << "saisi du deuxieme tableau:";
    cout <<endl;
    cout <<endl;
    cout <<endl;
    for(int j=0; j<tailletab2; j++)
    {
        cout << "saisir une valeur: "<<endl;
        cin>>tab2[j];
        cpt1++;
    }

    //instructioon pour fusionner les deux tableaux
    int tailletableautotal=cpt+cpt1;

    for(int k=0;k<cpt;k++){
        cout<<tab1[k];
    }
    for(int k=0;k<cpt1;k++){
        cout<<tab2[k];
    }

    return 0;
}
