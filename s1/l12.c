#include<stdio.h>
//   - 90 to 100 -> "Grade A"
//     - 75 to 89 -> "Grade B"
//     - 60 to 74 -> "Grade C"
//     - 50 to 59 -> "Grade D"
//     - 0 to 49 -> "Grade F"

int main(){
    int a;
    printf("Enter the marks:");
    scanf("%d",&a);
    if(a>=90 && a<=100){
        printf("Grade A");
    }
    else if(a>=75 && a<=89){
        printf("Grade B");
    }
     else if(a>=60 && a<=74){
        printf("Grade C");
    }
     else if(a>=50 && a<=59){
        printf("Grade D");
    }
     else if(a>=0 && a<=49){
        printf("Grade F");
    }
    return 0;
}