#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  int i;
  int n;
  int a=0,b=0;
  char str[8];

  printf("Who are you?\n");
  printf("> ");
  scanf("%s",str);
  printf("Hello, %s!\n\n",str);
  
  printf("Tossing a coin...\n");

  srand(time(NULL));
  int c[3]={rand(),rand(),rand()};

  for(i=0;i<3;i++){
    if(c[i]%2==0) { printf("Round %d:Heads\n",i+1);
      a++;
    } else if(c[i]%2==1) { 
      printf("Round %d:Tails\n",i+1);
      b++;
    }
  }

  printf("Heads: %d,Tails:%d\n",a,b);

  if(a>b) printf("%s won!\n",str);
  else printf("%s lost!\n",str);

  return 0;
}
