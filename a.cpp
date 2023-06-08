/*
problem summary : 
amader bolte hobe total kotota animal use hoise, tar moddhe koyta rabit, koyta rat,
koyta frog and tara total used animal er koto percent.

*/
#include <stdio.h>
int main()
{
    int b, a, total = 0, rabbits = 0, rats = 0, frogs = 0;
    char t;
    scanf("%d", &b); // test cases input

    for (int i = 0; i < b; i++) // b times loop chalalam
    {
        // protibar ekta amount and ekta character ( animal er name ) input nilam
        scanf("%d %c", &a, &t); 

        // amount ta total a jog korlam
        total += a;

        if (t == 'C') rabbits += a; // contidion mille rabbit er shongkha barbe
        
        else if (t == 'R') rats += a; // contidion mille rat er shongkha barbe
        
        else if (t == 'S') frogs += a; // contidion mille frog er shongkha barbe
    }

        printf("Total: %d cobaias\n", total);
        printf("Total de coelhos: %d\n", rabbits);
        printf("Total de ratos: %d\n", rats);
        printf("Total de sapos: %d\n", frogs);
        printf("Percentual de coelhos: %.2lf %%\n", (double)rabbits/total * 100); // total er koto partecent rabbit
        printf("Percentual de ratos: %.2lf %%\n", (double)rats/total * 100); // total er koto partecent rat
        printf("Percentual de sapos: %.2lf %%\n", (double)frogs/total * 100); // total er koto partecent frog
        
return 0;
}
