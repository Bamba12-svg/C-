#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout <<"Entrer la taille du tableau : ";
        cin>>n;
    }
    while(n<=0);
    int tab[n];
    cout <<"Remplissez la taille du tableau : ";
    for(int i=0; i<n; i++)
    {
        cout <<"\nElemant " << i+1 << " : ";
        cin>>tab[i];
    }
    bool croissant=true, decroissant= true;
    for (int i =0; i<n-1; i++)
    {
        if (tab[i]> tab[i+1])
        {
            croissant = false;
        }
        if(tab[i]<tab[i+1])
        {
            decroissant=false;
        }
    }

    if (croissant==true)
    {
        cout<< "le tableau est croissant "<<endl;
    }
    else if (decroissant)
    {
        cout<<"le tableau est decroissant "<<endl;
    }
    else
    {
        cout<<"Neutre"<<endl;
    }
  
}





