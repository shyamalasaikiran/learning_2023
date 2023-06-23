#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st number:\n");
    scanf("%d",&a);
    printf("Enter 2nd number\n");
    scanf("%d",&b);
    if(a>=b){
        printf("The biggest number is:");
        printf("%d",a);
    }
    else{
        printf("The biggest number is: ");
        printf("%d",b);
    }
   
    
    return 0;
}