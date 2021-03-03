int array[] = { 1, 2, 3, 4, 5 };
int sizeArray = ( sizeof(array) / sizeof(int) );


void printfArray(){
  for(int i=0; i<sizeArray; i++){
			printf("[%i] = %i\n", i, array[i]);
	}
}

void getArray(){
	for(int i=0; i < sizeArray; i++){
	  printf("Type the value of the position %i in your array: ", i);
	  scanf("%i", &array[i]);
	}
	printf("\n");
	printfArray();
}

void search(){
  int numberToSearch=0;
  printf("Type the number you want to search: ");
  scanf("%i", &numberToSearch);

  printf("\n");
  int timesFound=0;
  for ( int i=0; i < sizeArray; i++ ) {
    if ( numberToSearch == array[i] ) {
      printf("The number %i was found on the position %i of the array\n", numberToSearch, i);
      timesFound++;
    }
  }
  printf("\nThe number was found a total of %i times", timesFound);

}
