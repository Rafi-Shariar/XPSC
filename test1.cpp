#include<stdio.h>

struct student
{
    int ID;
    float Age;

} one,two;

int main(void){

    one.ID = 125;
    two.Age = 25;

    printf(" Ones's ID is %d and Age is %f", one.ID, two.Age);


    return 0;
}