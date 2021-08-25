#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// encryption function:

void encryption(char array [])
{
    int i=0;
    for(i =0 ; (i<150 && array[i]!='\0') ; i++)
    {
        array[i] = array[i] + 7;
    }
    printf("\nYour input with encryption is: %s\n", array);

}
//decryption function:
void decryption(char array [])
{
    int i=0;
    for(i =0 ; i<150 && array[i]!='\0' ; i++)
    {
        array[i] = array[i] - 7;
    }
    printf("\nYour input with decryption is: %s\n", array);
}
//menu function to choose 
int menu(char array[])
{
  int menu_option;
  printf("\nChoose which operation do you want \n\n");
  printf(" 1) To Encryption \n\n");
  printf(" 2) To Decryption \n\n");
  printf(" 3) To Exit\n\n");
  scanf("%d", &menu_option);
  return menu_option;
}
int main()
{
  char array [100];
  int menu_option=-1;
  printf("Please enter an input to convert it : \n"); // For the first input



//choose what do you want to do with the string you entered
  while(menu_option!=3)
  {
      
  	  gets(array);
	  if(array[0] != '\0'){
      menu_option = menu(array);
  	  
      if(menu_option == 1)
      {
          encryption(array);
          printf("Please enter an input to convert it : \n"); // to ask the user for every iteration
      }
      else if(menu_option == 2)
      {
      	  decryption(array);
      	  printf("Please enter an input to convert it : \n"); // to ask the user for every iteration
      }
      else if(menu_option != 3){
      	printf ("Enter a valid choice (1 or 2 or 3)!!\n"); // to notify the user to input only 1 or 2 or 3
      	
	  }
	}
  }
  }
