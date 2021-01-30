#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
         int key = atoi(argv[1]);
         
       if(!isdigit(key)) 
       {
        string text = get_string("Plaintext:");
        printf("Ciphertext:");
        for(int i = 0; i < strlen(text); i++)
         {
            if(isupper(text[i]))               //text[i] >= 'A' && text[i] <= 'Z'
            {
                printf("%c", (((text[i] - 'A') + key) % 26) + 'A');
            }

            else if( islower(text[i]))      //text[i] >= 'a' && text[i] <= 'z'      
            {
                printf("%c", (((text[i] - 'a') + key) % 26) + 'a');
            }

            else
            {
                printf("%c", text[i]);
            }
           
        }
        printf("\n");
        return 0;
        }
        else
        {
            printf("Usage: ./caesar key\n");
        return 1;
        }
    }

     else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    return 0;
}
