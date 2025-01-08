#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> liste1,liste2,liste3;
    int nb;
    cout<<"\nDonner les 5 elements du liste 1 : ";
    for(int i=0;i<5;i++){
        cin>>nb;
        liste1.push_back(nb);
    }
    cout<<"\nDonner les 5 elements du liste 2 : ";
    for(int i=0;i<5;i++){
        cin>>nb;
        liste2.push_back(nb);
    }
    cout<<"La liste ";
    liste3.merge(liste1);
    liste3.merge(liste2);
    liste3.sort();
    liste3.unique();

   for (int nb : liste3) {
 cout << nb << " ";
 }
  cout<<"la taille est : "<<liste3.size();


}
