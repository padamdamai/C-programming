#include<stdio.h>

void fun(int x,int y,int z){
    int total;
    float percent;
     total = x+y+z;
    printf("Your total marks is:%d\n",total);
     percent= (total*100)/300;
     printf("Your percentage is :%f %\n",percent);
     if(percent>=80){
        printf("\nyou have got Distinction");
     }
     if((percent>=60) && (percent<=79.99)){
        printf("\nyou have got first division");
     }
     if((percent>=46) && (percent<=59.99)){
        printf("\nyou have got second division");
     }
     if((percent>=32) && (percent<=49.99)){
        printf("\nyou have got third devision\n");
     }
    else{
        printf("You dont have any grade(Fail)\n..........\n");
    }
}




int main(){
int i,roll,math,science,english;
char name[20]="";
for(i=1;i<=3;i++){
        printf("Enter your roll number:");
        scanf("%d",&roll);
        printf("Enter your name:");
        scanf("%s",&name);
        printf("\nEnter your subject marks properly\n....");

        printf("\nEnter your marks of math:");
        scanf("%d",&math);
        printf("\nEnter your marks of Science:");
        scanf("%d",&science);
        printf("\nEnter your marks of English:");
        scanf("%d",&english);
        fun(math,science,english);
        
}
        



}