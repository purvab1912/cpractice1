#include <stdio.h>
void main (void)
{
    //find greater number between three numbers
    int numb1 = 100;
    int numb2 = 300;
    int numb3 = 600;
    if (numb1 < numb2)
    {
        if (numb2 < numb3)
        {
        printf (" numb3 = %d is greater", numb3);
        }
    }
}