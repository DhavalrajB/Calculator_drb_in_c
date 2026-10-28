#include <stdio.h>

int main(){
	double num1;
	double num2;
	char op;
	double total;
	while (1){
		printf("Enter num1: ");
		scanf("%lf", &num1);
		printf("Enter num2: ");
		scanf("%lf", &num2);
		printf("Enter operator (+,-,*,/): ");
		scanf("%s", &op);
		
		switch (op){
			case '+':
			      total=num1+num2;
			      break;
			case '-':
			      total=num1-num2;
			      break;
			case '*':
			       total = num1*num2;
			       break;
			case '/':
			       total = num1/num2;
			       break;
			default:
			       printf("Invalid input");
			}
		printf("%lf\n", total);	
		}
	
	return 0;
	}