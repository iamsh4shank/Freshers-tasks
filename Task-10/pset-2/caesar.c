#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

 
 int main(int argc, string argv[])
 {
    if (argc != 2)
    {
        printf("Nope\n");
        return 1;
    }
    
    int k = atoi(argv[1]);

    if (k < 0)
    {
        printf("Nope\n");
        return 1;
    }
    else
    {
        string code = GetString();
        
        for (int i = 0, n = strlen(code); i < n; i++)
            {
                if islower(code[i])
                    printf("%c", (((code[i] + k) - 97) % 26) + 97);
                else if isupper(code[i])
                    printf("%c", (((code[i] + k) - 65) % 26) + 65);
                else
                    printf("%c", code[i]);
            }
            printf("\n");
            return 0;
    }
 }
