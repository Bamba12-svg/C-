#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, sauv;
     cout<< "saisir une valeur positive: ";
     cin>>n;

     sauv=n;

     int nbr=0;
     do{
        nbr++;
        sauv=sauv/10;
     }while(sauv!=0);

     int sauv2=n;
     int ams=0;

     while(sauv2!=0){
        int rest = sauv2%10;
        ams=ams+pow(rest,nbr);
        sauv2=sauv2/10;
     }
     if(ams==n){
        cout<< n << " est un amstrong";
     }
     else{
        cout<< n << " n'est pas un amstrong";
     }

}
