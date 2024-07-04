#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main(){
  int i;
  int coin, heads = 0;

   char user_name[100];

  printf("Who are you?\n");
  scanf("%s",user_name);
  printf("Hello, %s!\n", user_name);

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
  printf("Heads: %d, Tails: %d\n", heads, N - heads);

}