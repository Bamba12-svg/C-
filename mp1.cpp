#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string,string>bamba;
    bamba.insert(pair<string,string>("bamba","Diakhate"));
    bamba.insert(pair<string,string>("cheikh","Diakhate"));
    bamba.insert(pair<string,string>("Omar","Diakhate"));
    bamba.insert(pair<string,string>("kine","Diakhate"));
    bamba["Omar"]="DIop";
    cout <<bamba.size()<<endl;
    for(auto pair : bamba){
        cout << pair.first << "-" << pair.second<<endl;
    }
}

