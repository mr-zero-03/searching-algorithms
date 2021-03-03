#include <stdio.h>
#include <stdlib.h>
#include "lib/linear-search.h"

void menu(){
  int option=0;
  do{
		printf("\n-------------------------------\n");
		printf("     Linear Search :D\n");
		printf("1. Print the array\n");
		printf("2. Change values on the array\n");
		printf("3. Search a value in the array\n");
		printf("4. Leave\n");
		printf("-------------------------------\n");
		printf("Choose your option:");
		scanf("%i", &option);
		printf("\n");

		switch(option){
			case 1:
				printfArray();
			break;
			case 2:
				getArray();
			break;
			case 3:
			  search();
		  break;
		  case 4:
			  printf("Thanks for using :D");
		  break;
		  default:
			  printf("Invalid option");
		}
    if ((option != 1) && (option != 2)) {
      printf("\n");
    }
  } while (option != 4);
}

int main (){
  menu();

  return 0;
}
