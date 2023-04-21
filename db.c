#include <stdio.h>
#include <string.h>

int main(void)
{

    char buff[15];
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "ic1_projekt"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       
        printf ("\n Congrats you did it! The flag is: IC1-projekt\n");

    return 0;
}}
