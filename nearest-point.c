
#include<stdio.h>
int num,i;
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
// for(i=0;i<num;i++){
// if(smallest)
// }
// float less_gap =0 ;
// for(i=0;i<num;i++){
//     for(i=0;i<num;i++){
//                 less_gap= arr2[i]- less_gap;

//         }

// }
    return 0;
}

