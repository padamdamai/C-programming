#include<stdio.h>
#include<stdlib.h>
int total,i;
int max=10000000,min=(-10000000), array[78], max_num=0,min_num=(1000000000);
//int count = 0,count_number=0;
float point;
int main() {
printf("How many number you want to entered:");
scanf("%d",&total);

if(total != 0){
		printf("Which nearest point you want to find,\n Enter the point:");
		scanf("%f",&point);
		printf("Enter the number:\n");
		for( i=0 ; i < total ; i++ ){
		      scanf("%d",&array[i]);
		 }
 
				 // to find maxiimum and minimum number
				 for( i=0 ; i < total ; i++ ){
				      if(array[i] > max_num ){
				      	max_num = array[i];
					  }
					   if(array[i] < min_num ){
				      	min_num = array[i];
					  }
				 }
//printf("\nThe max and min is %d and %d",min_num,max_num);

				for(i=0;i<total;i++)
				{
				      if((array[i] > point) &&  (array[i] < max))
				      {
				     max = array[i];
				    
				      }
				      
				      if((array[i] < point) &&  (array[i]> min))
				      {
				        min = array[i];
				      }
				 }

}
else{
	exit(0);
}

	
if((point > min_num) && (point < max_num))
			{
      						 if(min == (-10000000) )
							   {
 							printf("The nearest point is %d",max);
		 						}
 							else
							 {
 							printf("The nearest point is %d and %d",min,max);
 							}
	  		}

else{
	printf("\n\n+!!!Error Message \nPLEASE ENTER THE NEAREST POINT PROPERLY\n");
}

 return 0;
}
