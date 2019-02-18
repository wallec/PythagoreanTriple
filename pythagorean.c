#include <stdio.h>

void pythagoreanTriple(int);

int main()
{
    int n = 0;
    
    scanf("%d", &n);
    
    pythagoreanTriple(n);

    return 0;
}

void pythagoreanTriple(int num)
{
    for(int i=1; i<num/2; i++)
        for(int j=i; j<num/2; j++)
        {
            if((i*i+j*j) == (num-i-j)*(num-i-j))
            {
                printf("%d %d %d", i, j, (num-i-j));
                return;
            }
        }
    
    printf("Nope.\n");
}
