#include <cs50.h>
#include <stdio.h>

int main(void)
{
int height;
printf("Height :");
scanf("%d", &height);    
printf("%d\n",height);
int counter = 0;
for (int row=0; row<height; row++) {
    if (counter != height) {
        for (int first = (height-1) - counter; first > 0; first--) {
            printf(" ");
        }
        for (int second = 0; second <= counter; second++) {
            printf("#");
        }
        printf("  "); 
        for (int third = 0; third <= counter; third++) {
             printf("#");
        }
        printf("\n");
        counter++;
    }
}     
       
}
