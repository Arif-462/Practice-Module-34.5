#include<stdio.h>
int main()
{
    FILE *inputFile ;
    FILE *outputFile ;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if(inputFile == NULL)
    {
         fprintf(outputFile, "Not found\n");
        return 0 ;
    }
    else
    {
        while(1)
        {
            char ch = fgetc(inputFile);
            if(ch == EOF)
            {
                break;
            }
            fputc(ch , outputFile);
        }
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
