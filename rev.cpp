#include <iostream>
using namespace std;
int main()
{
    int n;
    do{
        cout<< "Donner le nombre des elements : ";
    cin>>n;
    }while(n<0);
    int T[n];
    for(int i=0; i<n; i++){
        cout<<"Donner l'element "<<i+1<< " : ";
        cin>>T[i];
    }
    int maax,miin,som;
    float moy;
    maax=T[0];
    miin=T[0];
    som=T[0];
    for(int i=0; i<n; i++){
        if(maax<T[i])
            maax=T[i];
        else if(miin<T[i])
            miin=T[i];
        som+=T[i];

    }
    moy=(float)som/n;
     cout<<"\nle maximum est : "<<maax;
      cout<<"\nle minimum est : "<<miin;
    cout<<"\nla moyenne est : "<<moy;
}
