# C-final-project# Project Tittle -- CPL FP 
This is README file of our project , let's see it 

# Overview
* User can put string in textinput and this string converted to an encrypted code  
* User can decrypt an encrypted code  or Exit
# Code and Syntax

## C language
### import libraries function 
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
```
### main function
```c
// many lines of code to determine which statement chosen
int main()
{
  char array [100];
  int menu_option=-1;
  printf("Please enter input to convert it : ");
  gets(array);
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

```

### Encryption function
```c
// encryption function:

void encryption(char array [])
{
    int i=0;
    for(i =0 ; (i<300 && array[i]!='\0') ; i++)//to read and encrypt all elements of array
    {
        array[i] = array[i] + 3;
    }
    printf("\nYour input with encryption is: %s\n", array);
}
```
### Decryption function
```c
//decryption function:
void decryption(char array [])
{
    int i=0;
    for(i =0 ; i<300 && array[i]!='\0' ; i++)//to read and decrypt all elements of array
    {
        array[i] = array[i] - 3;
    }
    printf("\nYour input with decryption is: %s\n", array);
}
```

### menu function 
```c
//menu function to choose 
int menu()
{
  int menu_option;// to make the user choose which operation he wants
  printf("\nChoose which operation do you want \n\n");
  printf(" 1) To Encryption \n\n");
  printf(" 2) To Decryption \n\n");
  printf(" 3) To Exit\n\n");
  scanf("%d", &menu_option);
  return menu_option;
}

```



      
