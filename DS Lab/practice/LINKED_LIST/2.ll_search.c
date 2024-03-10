#include <stdio.h>
int main()
{

    int START=0, PTR=START, LINK[11] = {1,2,5,-1,-1,7,-1,9,-1,10,-1};
    char INFO[11] = {"NO   E X IT"};
    // PTR = START;
    char c='E';
    while (PTR != -1)
    {
        if(INFO[PTR]==c)
        {
            printf("%d",PTR);
            break;
        }
        else
            PTR=LINK[PTR];
    }

    return 0;
}