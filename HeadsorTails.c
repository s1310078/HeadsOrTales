#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main(){
  int i;
  int coin, heads = 0;

  srand(time(NULL));

  printf("Tossing a coin...\n");
  for(i=1; i<=N; i++){
    printf("Round %d: ",i);
    if((coin = rand() % 2) == 0){
      heads += 1;
      printf("Heads\n");
    }
    else
      printf("Tails\n");
  }
}