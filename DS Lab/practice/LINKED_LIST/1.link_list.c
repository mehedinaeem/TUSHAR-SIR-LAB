#include <stdio.h>
int main()
{

    int START=0, PTR, LINK[11] = {1,2,5,-1,-1,7,-1,9,-1,10,-1};
    char INFO[11] = {"NO   E X IT"};
    PTR = START;
    while (PTR != -1)
    {
        printf("%c", INFO[PTR]);
        PTR = LINK[PTR];
    }

    return 0;
}