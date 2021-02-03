#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{


if(argc!=2)
{
    fprintf(stderr,"Usage: ./recover image\n");
    return 1;
    
    
}
    FILE* inputfile = fopen("card.raw", "r");
    if (inputfile == NULL)
    {
        printf("Could not open card.raw.\n");
        return 2;
    }


    unsigned char buffer[512];
    
    int count = 0;
    
    FILE* image = NULL; 
    
  
    int jpg_found = 0; 
    
  
    while (fread(buffer, 512, 1, inputfile) == 1)
    {
  
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xe0) == 0xe0)
        {
            if (jpg_found == 1)
            {
                
                fclose(image);
            }
            else
            {
                
                jpg_found = 1;
            }
            
            char filename[8];
            sprintf(filename, "%03d.jpg", count);
            image = fopen(filename, "a");
            count++;
        }
        
        if (jpg_found == 1)
        {
            
            fwrite(&buffer, 512, 1, image);
        }
        
    }

    
    fclose(inputfile);
    fclose(image);

    return 0;




}
