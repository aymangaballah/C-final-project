#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// encryption functtion:

void encryption(char array [])
{
    int i=0;
    for(i =0 ; (i<300 && array[i]!='\0') ; i++)
    {
        array[i] = array[i] + 3;
    }
    printf("\nYour input with encryption is: %s\n", array);

}
//decryption function:
void decryption(char array [])
{
    int i=0;
    for(i =0 ; i<300 && array[i]!='\0' ; i++)
    {
        array[i] = array[i] - 3;
    }
    printf("\nYour input with decryption is: %s\n", array);
}
//menu function to choose 
int menu()
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
  printf("Please enter input to convert it : ");
  gets(array);



//choose what do you want to do with string which you entered
  while(menu_option!=3)
  {
      menu_option = menu();
      if(menu_option == 1)
      {
          encryption(array);
      }
      else if(menu_option == 2)
      {
          decryption(array);
      }
  }
  }


