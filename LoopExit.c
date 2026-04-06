#include <stdio.h>

int main() {
int number, sum=0;
printf("Enter a number. The loop will exit when the number is divisible by 5: ");
while(1)
{
    printf("\nEnter a number:");
    scanf("%d",&number);
    sum+=number;
    printf("\nCurrent sum= %d\n",sum);
    if(sum%5==0)
    {
        printf("\nSum is divisible by 5, exitng loop\n");
        break;
    }
}
printf("Final sum: %d\n",sum);
  return 0;
}
