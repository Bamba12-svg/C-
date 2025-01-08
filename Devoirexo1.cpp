#include<iostream>
using namespace std;
main()
{
    int i,j,cpt,Lo=0;


        Lo=0;

        for(i=45; i<=90; i++)
        {
            cpt=0;
            for(j=1; j<i; j++)
            {
                if(i%j==0)
                {
                    cpt++;
                }
            }
            if(cpt==1)
            {

                cout<<i<<" ";
                Lo++;
            }
            if(Lo==5){
                break;
            }

        }




}
