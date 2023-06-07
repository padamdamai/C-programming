
#include<stdio.h>
int num,i,j;
int value = 100000;
float x = 4.2;
float arr2[76],array[78],largest = 0;
int main() {
printf("How many number you want to entered:");
scanf("%d",&num);
printf("Enter the number:\n");
for(i=0;i<num;i++){
      scanf("%f",&array[i]);
 }
  printf("The value of x => 4.2");
for(i=0;i<num;i++){
      if(4.2 > array[i]){
        arr2[i]= x - array[i];
       
   
      }
      else{
        arr2[i]= array[i] - x;
      }
 }
 printf("\n");
 for(i=0;i<num;i++){
   printf("%.2f\n",arr2[i]);
 }
for(i=0;i<num;i++){
  for(j=1;j<num;j++){
  if(arr2[i] >= array[i]){
        if((arr2[i] - array[i]) < value){
          value = arr2[i] - array[i];
  }
  else{
    if((array[i] - arr2[i]) < value){
          value = array[i] - arr2[i];
  }
  }
}
}
}
printf("The smallest gap between the number is %.2f\n",value);


    return 0;
}

