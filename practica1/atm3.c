
#include <stdio.h>
#include <stdlib.h>

#define InitBalance 1000
float Balance;

int main() {
	int operation;
   	float income, withdraw;
     	Balance=InitBalance;

  do {
  	printf("\nWelcome to the FSO ATM\n");
  	operation=0;
  	printf("\nIndicate operation to do:\n");
 	printf(" 1.Cash Income\n 2.Cash Withdrawal\n 3.Balance Enquiry\n");
  	printf(" 4.Account Activity\n 5.Change PIN\n 6.Exit\n\n");
 	printf(" Operation:");
  	scanf("%d",&operation); 
 
 	switch(operation) {
 
  	case 1:
    		printf(" Cash Income\n");
    		printf("\n Enter the amount to deposit:");   
    		scanf("%f",&income);
    		Balance += income;  
    		printf(" Successful income\n");
   	break;
  
  	case 2:
    		printf(" Cash Withdrawal\n");
    		printf("\n Enter the amount to withdraw:");
    		scanf("%f",&income);
    
    		if(Balance>income){
      			Balance=Balance-income;
    		}else{
      			printf(" Operation does not allowed\n");
      			printf("   Not enough cash\n");
    		}		
    	break;

  	case 3:
   		printf(" Balance Enquiry\n");
   		printf(" Currrent balance: %.2f \n", Balance);
   	break;
   
  	case 4:
   		printf(" This operation is not implemented");
  	break;
  
  	case 6:
   		printf(" EXIT\n"); 
    		printf("\n\n Current Balance: %.2f Euros", Balance);
  		printf("\n\n Thanks \n\n");
   		exit(0);
  	break;
  
  	default:
   		printf(" ERROR: This opertaion does not applied\n");   
  	break;

   	}
   
   } while (operation != 6);

}


