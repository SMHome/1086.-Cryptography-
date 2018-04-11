#include <stdio.h>
#include <math.h>
#define MAX  165000

long long status[ MAX ];
long long prime[ MAX ];

void isPrime( void )
{
    int i, j;
    long long n = MAX;

    long long sq = sqrt( n * 1.000 );

    for( i = 4; i <= n; i += 2 ) status[ i ] = 1;

    for( i = 3; i <= sq; i += 2 ){
        if( status[ i ] == 0 ){
            for( j = 2 * i; j <= n; j += i )
                status[ j ] = 1;
        }
    }

     int p = 1;
     prime[ 1 ] = 2;

     for( i = 3; i <= n; i += 2 ){
        if(status [ i ] == 0 ){
            prime[  ++p ] = i;
        }
     }
}

int main( )
{
    int k, n;

    isPrime();

    scanf("%d", &k);

    while( k-- )
    {
        scanf("%d", &n);

        printf("%d\n", prime[ n ] );
    }

    return 0;


}
