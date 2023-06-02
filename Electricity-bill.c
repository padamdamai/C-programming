
// WAP to calculate and print electricity bill of a given customer .The captured id ,name aand unit consumed
// // by user should be captured from the keyboard to display total amount to be paid to customer
// THE UNIT CHARGE AS FOLLOW:
// UNIT                                CHARGES/UNIT
// Upto 199                            @ 1.20
// 200 and above but less than 400     @1.50
// 400 and above but less than 600     @1.80 
// 600 and above                       @2.00

// if bill exceeds rs.400 then a subcharge of 15% will be charged and the minimun bill should be of rs.10%

#include<stdio.h>
 
int unit(int a){
	float x,y; 	
	
	if(a <=199){
		x= a*(1.20);
		printf("\nTotal amount is:%f",x);
	if(a<400){
		y=((10*x)/100)+ x;
		printf("\nTotal amount is less than Rs.400 so only 10 percent will be charged\n.........................................................\n");
		printf("\nYour total amount with 10 percent charged is :%f\n..........................................................\n",y);
		return 0;
	}
}
		if((a >200) ||(a<=400)){
		x= a*(1.50);
		printf("\nTotal amount is:%f",x);
		if(x>=400){
			y=((15*x)/100)+ x;
			printf("\nTotal amount exceed Rs.400 so 15 percent will be charged\n.........................................................");
			printf("\nYour total amount with 15 percent charged is :%f\n..........................................................\n",y);
		return 0;
		}
		else{
			y=((10*x)/100)+ x;
			printf("\nTotal amount is less than Rs.400 so only 10 percent will be charged\n.........................................................");
			printf("\nYour total amount with 10 percent charged is :%f\n..........................................................\n",y);
			return 0;
		}
	}
	
	if((a >400) ||(a<=600)){
		x= a*(1.80);
		printf("\nTotal amount is:%f",x);
		if(x>=400){
			y=((15*x)/100)+x;
			printf("\nTotal amount exceed Rs.400 so 15 percent will be charged\n...................................................................");
			printf("\nYour total amount ith 15 percent charged is :%f\n......................................................................\n",y);
			return 0;
		}
		else{
			y=((10*x)/100)+ x;
			printf("\nTotal amount is less than Rs.400 so only 10 percent will be charged\n.........................................................");
			printf("\nYour total amount with 10 percent charged is :%f\n..........................................................\n",y);
			return 0;
		}
	}
	if(a >600){
		x= a*(2.00);
		printf("\nTotal amount is:%f",x);
		if(x>=400){
			y=((15*x)/100)+x;
			printf("\nTotal amount exceed Rs.400 so 15 percent will be charged\n....................................................................");
			printf("\nYour total amount ith 15 percent charged  is :%f\n.........................................................................",y);
			return 0;
		}
		else{
			y=((10*x)/100)+ x;
			printf("\nTotal amount is less than Rs.400 so only 10 percent will be charged\n.........................................................");
			printf("\nYour total amount with 10 percent charged is :%f\n..........................................................",y);
			return 0;
		}
	}
}
int main(){
	for(int i =0;i<=5;i++){
	int a,b,s;
	printf("\n\nPULCHOWK,LALITPUR ELECTRICITY AUTHORITY\n\n");
	printf("\tEnter your ID :");
	scanf("%d",&a);
	printf("\tEnter your Name :");
	scanf("%s",&b);
	printf("\tHow many unit have you consumed :");
	scanf("%d",&s);
	unit(s);
	}
	
}
