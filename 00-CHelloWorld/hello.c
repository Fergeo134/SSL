#include <stdio.h>


int main() {
   int fprintf(FILE *output, const char *format, ...);
   printf("Hello, World!");
   return 0;
}
/*
int main()
{
    char *filename = "output.txt";

    // open the file for writing
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening the file %s", filename);
        return -1;
    }
    // write to the text file
    for (int i = 0; i < 10; i++)
        fprintf(fp, "This is the line #%d\n", i + 1);

    // close the file
    fclose(fp);

    return 0;

    }*/