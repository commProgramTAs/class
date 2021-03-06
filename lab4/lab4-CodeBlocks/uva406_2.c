#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  bool composite[1005] = {true, false};
  int prime_count[1005] = {0,1};
  int count = 1, N, C, start, end, prime_i, i, j;
  for (i = 2 ; i <= 1000 ; i++) {
    if( !composite[i] ){
      for(j = i * i ; j <= 1000 ; j += i)
        composite[j] = 1;
      count++;
    }
    prime_count[i] = count;
  }

  while ( scanf( "%d %d", &N, &C ) != EOF ) {
    start = prime_count[N]/2 - C + 2;
    end = prime_count[N]/2 + C;
    if( !(prime_count[N] % 2) ) start--;
    if( start < 1 ) start = 1;
    if( end > prime_count[N] ) end = prime_count[N];

    printf( "%d %d:", N, C );
    for( prime_i = 1 ; prime_count[prime_i] < end ; prime_i++ ){
      if( !composite[prime_i] )
        if( prime_count[prime_i] < end && prime_count[prime_i] >= start )
          printf( " %d", prime_i );
    }
    printf( " %d\n\n", prime_i );
  }
  return 0;
}
