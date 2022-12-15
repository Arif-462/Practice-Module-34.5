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
        int arr[n];
        for(int i=0; i<n; i++)
        {
            fscanf(inputFile, "%d",&arr[i]);
        }
        int sum=0;
        for(int i=0; i<n; i++)
        {

            sum = sum + arr[i] % 10;

        }
        fprintf(outputFile, "Sum = %d", sum);



    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}

