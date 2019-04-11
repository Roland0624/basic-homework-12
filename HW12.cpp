#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
    int l;     //Side length of the square
    int a, b, c, d; //Four timers 
    printf("Enter the side length of the square :");
    scanf("%d", &l); 
    
    d = l;
    for(c=1; c<=d; c++){
       for(b=l; b<d; b++)//Print blank
          printf(" ");
       for(a=1; a<=l; a++)//Print stars
          printf("*");
       printf("\n");
       l--;
    }
    
    system("pause");
    return 0;
}
