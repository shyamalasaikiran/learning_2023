#include<stdio.h>
int main(){
    int n;
    printf("Enter any 4 digit number:");
    scanf("%d",&n);
    while(1){
        if(n>999 && n<=9999){
            break;
        }
        else{
            printf("Enter 4 digit number:");
            scanf("%d",&n);
        }
    }
    char s[4];
    itoa(n,s,10);
    
    int max=-1;
    for(int i=0;i<4;i++){
        char temp[]={'0','0','0','\0'};
        int index=0;
        for(int j=0;j<4;j++){
            if(j!=i){
                temp[index]=s[j];
                index++;
            }
        }
        if(atoi(temp)>=max){
            max=atoi(temp);
        }
    }
    printf("\n The largest 3 digit number possible is: %d",max);
    return 0;

}