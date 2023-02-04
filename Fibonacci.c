#include <stdio.h>

int main()
{
    int x=0;
    int count=0;
    int sum=0;
    int seq=1;
    printf("Enter a number %d\n", x );
    scanf("%d", &x);
    Fibo(x);

    return 0;
}

int Fibo (int y)
{
    if(count==y)
    {
        return;
    }
        sum= sum+seq;
        return Fibo(y-1);
        seq++;
        count++;

}
