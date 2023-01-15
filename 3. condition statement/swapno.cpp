#include <stdio.h>
void main (void)
{
    //swap number using third variable
    int numb1 = 10;
    int numb2 = 20;

    int numb3 = numb2; //numb3 = 20
    numb2 = numb1 ; //numb2 = 10
    numb1 = numb3; //numb1 = 20

    //swap number using third variable
    int numb4 = 100;
    int numb5 = 200;

    numb4 = numb4 + numb5 ; //numb4 = 300
    numb5 = numb4 - numb5 ; //numb5 = 100
    numb4 = numb4 - numb5 ; //numb4 = 200

}