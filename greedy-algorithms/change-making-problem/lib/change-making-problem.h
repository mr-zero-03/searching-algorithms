int atm[] = { 100, 80, 50, 30, 20, 10, 5, 1 }; //The array must be ordered from highest to lowest
int atmSizeArray = ( sizeof(atm) / sizeof (int) );
int maxAmount = 0;

int wallet[100];
int walletSizeArray=0;
int moneyInTheWallet = 0;

bool atmCheck() {
  for ( int i=0; i < atmSizeArray-1; i++ ) {
    if ( atm[i] < atm[i+1] ) {
      return false;
    }
  }
  return true;
}


void printfAtm () {
  if ( atmSizeArray == 0 ) {
    printf("The ATM is empty, please fill it up\n");
  } else {
    printf("The max amount you can withdraw is $%i\n", maxAmount );
    for ( int i=0; i < atmSizeArray; i++ ) {
      printf("[%i] $%i\n", i, atm[i] );
    }
  }
}


void printfWallet() { //The value on your wallet is not saved, it restarts when you call the withdraw function
  if ( walletSizeArray == 0 ) {
    printf("The wallet is empty");
  } else {
    printf("You have $%i in your wallet\n", moneyInTheWallet );
    for ( int i = 0; i < walletSizeArray; i++ ) {
      printf("[%i] $%i\n", i, wallet[i]);
    }
  }

}


void withdraw(){
  int userMoneyToWithdraw=0;
  printf("Enter the amount to withdraw: ");
  scanf("%i", &userMoneyToWithdraw);


  if ( userMoneyToWithdraw <= 0 ) {
    printf("Incorrect amount :c, please, be serious\n");
  } else if ( userMoneyToWithdraw > maxAmount ) {
    printf("The ATM does not have enough money to give you that amount, the max amount you can withdraw is $%i\n", maxAmount);
  } else {

    int tempUserMoneyToWithdraw = userMoneyToWithdraw;
    walletSizeArray = 0;
    moneyInTheWallet = 0;

    for ( int i=0; i < atmSizeArray; i++ ) {
      if ( (tempUserMoneyToWithdraw - atm[i]) >= 0 ) {
        wallet[walletSizeArray] = atm[i];
        moneyInTheWallet += wallet[walletSizeArray];
        tempUserMoneyToWithdraw -= atm[i];
        walletSizeArray++;
      }
    }

    if ( moneyInTheWallet == userMoneyToWithdraw ) {
      printf("\nSuccessfully withdrawn $%i\n", userMoneyToWithdraw );
      printfWallet();

    } else {
      printf("The ATM does not have enough money to give you that amount, the max amount you can withdraw is $%i, please check the money in the ATM\n", maxAmount);

      for (int i=0; i<walletSizeArray; i++) {
        wallet[i] = 0;
      }
      walletSizeArray = 0;
    }

  }
}
