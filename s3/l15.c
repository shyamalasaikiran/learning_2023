
#include<stdio.h>
int main(){
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    int temp[n];
    for(int i=0;i<n;i++){
        
        printf("Enter number %d:",i+1);
        scanf("%d",&temp[i]);
        
    }
    for(int i=0;i<n;i++){
        if(temp[i]<10){
            printf("Not valid\n");
            continue;
        }
        int min=999999;
        int max=-1;
        char s[max];
        itoa(temp[i],s,10);
        int var=0;
        
        while(s[var]!='\0'){
            int a;
            a=s[var]-'0';
          if(max<a){
            max=a;
          }
          if(min>a){
            min=a;
          }
            
            var++;
        }
        printf("\n%d and %d",min,max);

    }
    return 0;
}
