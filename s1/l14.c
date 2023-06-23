#include<stdio.h>
int main(){
    int n1,n2;
    char o[999];
    printf("Enter 1st number\n");
    scanf("%d",&n1);
    printf("Enter operand\n");
    scanf("%s",o);
    printf("\nEnter 2nd number\n");
    scanf("%d",&n2);
    if(o[0]=='+'){ printf("%d",n1+n2);}
    if(o[0]=='-'){printf("%d",n1-n2);}
    if(o[0]=='*'){printf("%d",n1*n2);}
    if(o[0]=='/'){printf("%d",n1/n2);}
    if(o[0]=='%'){printf("%d",n1%n2);}
   
    return 0;

}