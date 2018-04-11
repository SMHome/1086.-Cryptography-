#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime( int i )
{
    int sqrtI = sqrt( ( double ) i );

    for( int j = 3; j <= sqrtI; j += 2 )
    {
        if( i % j == 0 )
            return false;
    }

    return true;
}

int main( void )
{
    int t, n;

    scanf("%d", &t);

    while( t-- )
    {
        scanf("%d", &n);

        int count = 1;

        if( n == 1 )
            printf("2\n");

        else
        {
            while( count != n )
            {
                for( int i = 3; i; i += 2 )
                {
                    if( is_prime ( i ) == true )
                    {
                        count++;

                        if( count == n ){
                            printf("%d\n", i);
                            break;
                        }
                    }
                }
            }
        }

    }

    return 0;
}
