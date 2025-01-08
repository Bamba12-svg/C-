#include <iostream>

using namespace std;

int main()
{
    int n=6;

    //triangle rectangle

    cout << "triangle rectangle";
    cout << endl;
    cout << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout<< endl << endl << endl;

    //triangle isocele

    cout << "triangle isocele";
    cout << endl;
    cout << endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
          cout << " ";
        }
        for(int k=1; k<=(2*i-1); k++){
          cout << "*";
        }
        cout << endl;


    }
    cout << endl <<endl <<endl;

     //carree

     cout << "carree";
    cout << endl;
    cout << endl;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cout<< "*";
            }
            cout<< "\n";
        }


        cout << endl <<endl <<endl;
        //carree bleu

        cout << "carree bleu";
        cout << endl;
        cout << endl;
         for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
              if( i==1 || i==n || j==1 || j==n ){
                  cout<< "*";
              }
              else{
                cout << " ";
              }
            }
            cout<< "\n";
        }





    return 0;
}
