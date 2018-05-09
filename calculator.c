#include <stdio.h>
#include <stdlib.h>

#define ISIZE 100

int main(){
	double num1,num2;
	int oper;
	char inp[ISIZE+1] = "";
	printf("\tCalculator\n\n");

	printf("Enter your first number: ");
	fgets(inp, ISIZE, stdin);
	num1 = atof (inp);


	printf("Enter your second number: ");
	fgets(inp, ISIZE, stdin);
	num2 = atof (inp);

	printf("Enter your operand: ");
	fgets(inp, ISIZE, stdin);
	oper = inp[0]; 

	printf("The result is: %f %c %f =", num1, oper, num2);
	

	switch(oper){

		case '+': printf("%f\n", num1+num2); break;
		case '-': printf("%f\n", num1-num2); break;
		case '*': printf("%f\n", num1*num2); break;
		case '/': if (num2!=0)printf("%f\n", num1/num2); 
			  else printf("Cannot divide by zero");
			  break;

		default: printf("I do not know what the operator is");




	}


	return 0;


}