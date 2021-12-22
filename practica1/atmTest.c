
#include <stdio.h>
#include <stdlib.h>

#define InitBalance 1000
#define InitPassword 1234

float Balance;
int Password;
int inputPassword;

void changeString() {
    char str1[30] = "str1 test";
    char str2[30] = "str2 change test";

    for(int aux = 0; str1[aux] != '\0'; aux++) {
        str1[aux] = str2[aux];
    }
    printf("str1 is: %s", str1);
}

int changePassword(int oldPassword) {

    printf("\nPLease indicate the old password: ");
    int inputPassword;
    scanf("%d", &inputPassword);

    //Old password identification
    while(oldPassword != inputPassword) {
        printf("\nPassword incorrect.");
        printf("\nPlease try again: ");
        scanf("%d", &inputPassword);
    }

    int newPassword;
    printf("\nPlease indicate the new password: ");
    scanf("%d", &inputPassword);
    printf("\nPlease repeat the new password: ");
    scanf("%d", &newPassword);

    //Checks if the new passwords are equal
    while (oldPassword != inputPassword) {
        printf("\nThe inputs arent the same, please try again.");
        printf("\nPlease indicate the new password: ");
        scanf("%d", &inputPassword);
        printf("\nPlease repeat the new password: ");
        scanf("%d", &newPassword);
    }

    printf("\nPassword changed successfuly");
    return newPassword;
}

void main() {
	int operation;
   	float income, withdraw;
     	Balance = InitBalance;
     	Password = InitPassword;
     	
     	//Initial greeting
     	printf("\nWelcome to the FSO ATM\n");
     	printf("\nPlease indicate teh password: ");
     	scanf("%d", &inputPassword);
     	
  	//Initial password check
  	while (inputPassword != Password) {
  		printf("\nPassword incorrect.");
  		printf("\nPlease indicate the card password again: ");
  		scanf("%d", &inputPassword);
  	}

	//Operations loop
  	do {
  		//Operations menu
  		operation=0;
  		printf("\n\nWelcome to the FSO ATM\n");
  		printf("\nIndicate operation to do:\n");
 		printf(" 1.Cash Income\n 2.Cash Withdrawal\n 3.Balance Enquiry\n");
  		printf(" 4.Account Activity\n 5.Change PIN\n 6.Exit\n\n");
 		printf(" Operation:");
  		scanf("%d",&operation); 
 
 		//Operation switch
 		switch(operation) {
 		
 		//Cash income switch
  		case 1:
    			printf(" Cash Income\n");
    			printf("\n Enter the amount to deposit:");   
    			scanf("%f",&income);
    			Balance += income;  
    			printf(" Successful income\n");
   		break;
  
  		//Cash withdrawal switch
  		case 2:
    			printf(" Cash Withdrawal\n");
    			printf("\n Enter the amount to withdraw:");
    			scanf("%f",&income);
    
    			if(Balance>income){
      				Balance=Balance-income;
    			} else {
      				printf(" Operation does not allowed\n");
      				printf("   Not enough cash\n");
    			}		
    		break;

		//Balance consulting switch
  		case 3:
   			printf(" Balance Enquiry\n");
   			printf(" Currrent balance: %.2f \n", Balance);
   		break;
   		
   		//Account activity switch (not implemented yet)
  		case 4:
   			printf(" This operation is not implemented");
  		break;
  		
  		//Change PIN switch
  		case 5:
  			Password = changePassword(Password);
  			printf("\nPassword implement test, new password: %d\n", Password);
  		break;
  
  		//Exit switch
  		case 6:
   			printf(" EXIT\n"); 
    			printf("\n\n Current Balance: %.2f Euros", Balance);
  			printf("\n\n Thanks \n\n");
   			exit(0);
  		break;
  
  		//Default: Operation non existent
  		default:
   			printf(" ERROR: This opertaion does not applied\n");   
  		break;

   		}
   
   	} while (operation != 6);

}



