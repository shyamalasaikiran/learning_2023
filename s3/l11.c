#include<stdio.h>
int n;
void reverse_function(int a){
    while(a>0){
        printf("%d",a);
        a--;
    }
    printf("\n");
}
void space_print(int a){
//    printf("a is %d",a);
   for(int i=0;i<(2*(n-a));i++){
    printf(" ");
   }
   reverse_function(a);
}
void f1(int a){
    for(int i=1;i<=a;i++){
        printf("%d",i);
    }
    space_print(a);
}
int main(){
    scanf("%d",&n);
    int temp=n;
    while(temp>0){
    f1(temp);
    temp--;
    }
    return 0;
}