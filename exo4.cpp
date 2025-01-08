#include <iostream>
using namespace std;
int main(){
     int a,b,c,d,maxx;
     maxx=a;
     maxx=b>maxx?b:maxx;
     maxx=c>maxx?c:maxx;
     maxx=d>maxx?d:maxx;
     cout<< "Le maximum est : "<<maxx;
     return 0;
}
