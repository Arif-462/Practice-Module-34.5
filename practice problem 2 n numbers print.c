#include<stdio.h>
int main()
{
    FILE* inputFile = fopen("input.txt", "r");
    FILE* outputFile = fopen("output.txt", "w");

    if(inputFile == NULL)
    {
        fprintf(outputFile, "File not found!\n");
        return 0;
    }
    else
    {
        int n;
        fscanf(inputFile, "%d",&n);
        for(int i=01; i<=n; i++)
        {
            fprintf(outputFile, "%d  ",i);
        }
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
