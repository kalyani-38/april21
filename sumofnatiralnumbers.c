
 //sum of natural numbers
#include <stdio.h>
int sumofnaturalnumbers(int start, int end);

int main()
{
    int start, end, sum;
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    
    sum = sumofnaturalnumbers(start, end);
    
    printf("Sum of natural numbers from %d to %d = %d", start, end, sum);
    
    return 0;
}



int sumofnaturalnumbers(int start, int end)
{
    if(start == end)
        return start;
    else
        return start + sumofnaturalnumbers(start + 1, end); 
}
