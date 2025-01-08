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
        if(nb%2==0){
            liste2.push_back(nb);
            continue;
        }else{
            liste3.push_back(nb);
            continue;
        }
        }
        cout<<"liste pair : ";
        for(int nb: liste2){
            cout<<nb;
        }
        cout<<"liste impair : ";
        for(int nb: liste3){
            cout<<nb;
        }
    }
