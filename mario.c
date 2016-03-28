#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height=0;
    do 
    {
        //ask the user for the height
        printf("Height: ");
        height = GetInt();
        if(height == 0)
        {
            exit(0);
        } 
          
    } while( height > 23 || height <= 0 || sizeof(height) != 4);
    
    
    //line spacing
    for(int i=0; i<height; i++)
    {
        //spaces
        for (int j=(height-1)-i; j > 0;j--)
        {
            printf(" ");
        }
        //hashes 
        for (int k=0; k < i+2; k++)
        {
            printf("#");
        } 
       printf("\n");   
    }
}
