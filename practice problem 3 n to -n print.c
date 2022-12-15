#include<stdio.h>
int main()
{
    FILE* inputFile;
    FILE* outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    if(inputFile == NULL)
    {
        fprintf(outputFile, "Not found\n");
        return 0;
    }
    else
    {
        int t,n;
        fscanf(inputFile, "%d",&t);

        for(int i=0; i<t; i++)
        {
            fscanf(inputFile, "%d",&n);

            if(n>0)
            {
               for(int i=n; i>=-n; i--)
               {
                    fprintf(outputFile, "%d ",i);
               }
               fprintf(outputFile, "\n");
            }

            else if(n<0)
            {
                for(int i = n; i <= -n; i++)
                {
                    fprintf(outputFile, "%d ",i);
                }
                fprintf(outputFile, "\n");
            }
        }
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
