/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


    int main()
    {
    int cp,sp;
    scanf("%d",&cp);
    scanf("%d",&sp);
    if(cp>sp)
    {
        printf("Loss");
    }
    else if(cp<sp)
    {
        printf("Profit");}
    else {
        printf("NO Loss No profit");
    }
    return 0;
}
