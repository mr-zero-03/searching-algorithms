#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lib/change-making-problem.h"

void menu(){
  int option=0;
  do{
		printf("\n-------------------------------\n");
		printf("     Change-making problem :D\n");
		printf("1. Print the money on the ATM\n");
		printf("2. Withdraw money\n");
    printf("3. Print the money on your wallet\n");
		printf("4. Leave\n");
		printf("-------------------------------\n");
		printf("Choose your option:");
		scanf("%i", &option);
		printf("\n");

		switch(option){
			case 1:
				printfAtm();
			break;
			case 2:
				withdraw();
			break;
      case 3:
        printfWallet();
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

int main () {
  if ( atmCheck() ) {
    for ( int i=0; i < atmSizeArray; i++ ) { maxAmount += atm[i]; } //To know the max amount you can withdraw
    menu();
  } else {
    printf("ERROR!\nPlease, check that the ATM array is ordered!\n");
  }

  return 0;
}
