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
        int n;
        fscanf(inputFile, "%d",&n);

        for(int i=0; i<n; i++)
        {
            for(int j=n-1; j>=i; j--)
            {
                fprintf(outputFile, "  ");
            }

            for(int j=0; j<n; j++)
            {

                fprintf(outputFile, "#  ");

            }
            fprintf(outputFile, "\n");
        }


    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}


