#include "alph.h"

int main()
{
    char input[1200];
    int i = 0;
    int r = 0;
    int l = 0;
    char **output = new char *[1200];
    for(int j = 0; j < 1200; j++)
        output[j] = new char[1200];
    fgets(input, sizeof input, stdin);
    while(input[i] != '\0')
    {
        if(isLetter(input[i]))
            output[r][l++] = input[i];
        else if(l != 0)
        {
            output[r][l] = '\0';
            r++;
            l = 0;
        } 
        i++;   
    }
    sort(r, output);
    printMas(r, output);
    return 0;
}
