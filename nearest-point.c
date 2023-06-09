#include<stdio.h>
#include<stdlib.h>
int total,i;
int max=10000000,min=(-10000000), array[78];
float point;
int main() {
printf("How many number you want to entered:");
scanf("%d",&total);

if(total != 0){
printf("Which nearest point you want to find,\n Enter the point:");
scanf("%f",&point);
printf("Enter the number:\n");
for(i=0;i<total;i++){
      scanf("%d",&array[i]);
 }

// for(i=0;i<total;i++){
//   int a = array[i];
// if (!(a<point)){
//   printf("!!!PLEASE ENTER THE NEAREST POINT PROPERLY\n");
//   exit(0);
// }
// }




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
  printf("\nThe nearest point of %d  is %d and %d",point ,min,max);
}
else{
  printf("S!!!!! sorry please enter the number");
}

 return 0;
}




