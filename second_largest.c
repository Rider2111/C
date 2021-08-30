#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b){
        if (a>c){
            if (b>c)
                printf ("%d is second largest number", b);
            else 
                printf("%d is second largest number", c);    
        }
    }
    else if (b>c){
        if (a>c){
            printf("%d is second largest number",a);
        }
        else
            printf("%d is second largest number",c);
    }
    else {
           if (a>b)
           printf("%d is the scond largest number",a);

           else 
           printf("%d is second largest number",b); 
    }
        


}