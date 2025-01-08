#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "combien d'elements dans le tableau : ";
    cin>>N;

    int tableau[N];

    if (N<=1)
    {
        cout<<" le tableau est trop petit" <<endl;
    }
    cout<< "entrer les elements du tableau" <<endl;
    for (int i=0; i<N; i++)
    {
        cout <<"element" <<i+1<<" : ";
        cin>>tableau[i];
    }
    bool croissant=true, decroissant= true;
    for (int i =0; i<N-1; i++)
    {
        if (tableau[i]> tableau[i+1])
        {
            croissant = false;
        }
        if(tableau[i]<tableau[i+1])
        {
            decroissant=false;
        }
    }
    if (croissant)
    {
        cout<< "le tableau est croissant "<<endl;
    }
    else if (decroissant)
    {
        cout<<"le tableau est decroissant "<<endl;
    }
    else
    {
        cout<<"le tableau est mixte"<<endl;
    }

    return 0;
}
