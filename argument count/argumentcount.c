#include <stdio.h>
int main(int argc, char *argv[]) // argc"argument count" counts the total number of arguments passed to command line when running the prgogram
//*argv[] (argument vector) is used to accept the string to store the string passed to command line 
//vector is basically a 1-D array
{
    int count;
    printf("Total no of arguments:%d\n", argc);
    printf("\n");
    printf("Program is called with the %s\n", argv[0]); //argv[0] gives the first string of the vector
    if (argc > 1)
    {
        for (count = 1; count < argc; count++)
        {
            printf("%s\n", argv[count]);
        }
    }
    else
    {
        printf("Nothing else passed as an argument\n");
    }
    return 0;
}
