#include <stdio.h>
#include <string.h>
int main(void){
  int g;
  char t[200];
  printf("what you want to say?");
  fgets(t,200,stdin);
  t[strlen(t)-1]='\0';
  
   while (strlen(t)==0)
 {
    printf("NO? PUT SOMETHING DUDE");
    printf("\nwhat you want to say?");
  fgets(t,200,stdin);
  t[strlen(t)-1]='\0';
 

 }
  printf("how many times you want to repeat?");
  scanf("%d",&g);
  for(int i = 1; i <= g; i++)
  {
    printf("%d",i);
    printf(" %s\n",t);
  }

  int e;
  printf("put 1 to repeat or any key to quit\n");
  scanf("%d",&e);
  if(e == 1){
    main();
  }
  else
  {
    printf("bye");
  }
  

}