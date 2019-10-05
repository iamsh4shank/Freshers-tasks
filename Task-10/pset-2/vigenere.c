#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{    
  
    if (argc != 2)
    {
        printf("Wrong number of arguments. Please try again.\n");
        
        return 1;
    }
    else 
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Key must be alphabetic chars only.");
                
                return 1;
            }    
        }
    }
    
    string k = argv[1];
    int kLen = strlen(k);
    
    string p = GetString();
    
        for (int i = 0, j = 0, n = strlen(p); i < n; i++)
    {            
        int letterKey = tolower(k[j % kLen]) - 'a';
        
        if (isupper(p[i]))
        {
            
            printf("%c", 'A' + (p[i] - 'A' + letterKey) % 26);
            
            j++;
        }
        else if (islower(p[i]))
        {
            printf("%c", 'a' + (p[i] - 'a' + letterKey) % 26);
            j++;
        }
        else
        {
            
            printf("%c", p[i]);
        }
    }
    
    printf("\n");
    
    return 0;
}
