#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "saisir la valeur n: ";
    cin>>n;


    //triangle rectangle
    cout << "triangle rectangle";
    cout << endl;
    cout << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout<< endl << endl << endl;


    //triangle isocele
    cout << "triangle isocele";
    cout << endl;
    cout << endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++)
        {
            cout << " ";
        }
        for(int k=1; k<=(2*i-1); k++)
        {
            cout << "*";
        }
        cout << endl;


    }
    cout << endl <<endl <<endl;


    //carree
    cout << "carree";
    cout << endl;
    cout << endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<< "*";
        }
        cout<< "\n";
    }


    cout << endl <<endl <<endl;


    //carree creux
    cout << "carree creux";
    cout << endl;
    cout << endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if( i==1 || i==n || j==1 || j==n )
            {
                cout<< "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<< "\n";
    }


    cout << endl <<endl <<endl;
    //triangle rectangle creux
    cout << "triangle rectangle creux";
    cout << endl;
    cout << endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i==1|| j==1 || i==n || i==j)
            {
                cout << "*";
            }
            else
            {
                cout<< " ";
            }
        }
        cout << "\n";
    }


      cout << endl <<endl <<endl;


       //triangle isocele creux
    cout << "triangle isocele creux";
    cout << endl;
    cout << endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++)
        {
            cout << " ";
        }
        for(int k=1; k<=(2*i-1); k++)
        {
            if(i==1 || i==n || k==1 || k==(2*i-1)){
                cout<< "*";
            }
            else{
                cout<< " ";
            }
        }
        cout << endl;


    }


    return 0;
}
