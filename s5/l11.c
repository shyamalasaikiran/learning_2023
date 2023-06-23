#include<stdio.h>
struct s{
    int rollno;
    float marks;
    char name[20];
};
int main(){
    int n;
    printf("Enter the number of structures\n");
    scanf("%d",&n);
    struct s a[n];
    for(int i=0;i<n;i++){
        printf("Enter roll no of structure %d\n",i+1);
        scanf("%d",&a[i].rollno);
        printf("Enter marks of structure %d\n",i+1);
        scanf("%f",&a[i].marks);
        printf("Enter name of student of structure %d\n",i+1);
        scanf("%s",a[i].name);

    }
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[i].marks;
    }
     int max=-1;
     struct s c[n];
     int index=0;
     int arr_index=0;
    qsort(b,n,sizeof(int),NULL);
    int i=n-1;
     while(i>=0){
       for(int j=0;j<n;j++){
        if(b[i]==a[j].marks){
             printf("\n ----structure----- \n%s \n %d \n %f\n",a[i].name,a[i].rollno,a[i].marks);
        }
       }
       i--;
     }
     int choice;
     printf("Do you want to search structure by name\n 1:Yes 2:No");
     scanf("%d",&choice);
     if(choice==1){
        char inputname[99999];
        printf("\nEnter the name to be searched\n");
        scanf("%s",inputname);
        for(int i=0;i<n;i++){
            printf("\n matching %s to %s",inputname,a[i].name);
            if(strcmp(a[i].name,inputname)==0){
                printf("structure matched is:\n %d \n%s \n%f\n",a[i].rollno,a[i].name,a[i].marks);
            }
            else{
                printf("No matched structure\n");
            }
        }
     }
     else if(choice==2){}
     else if(choice==3){printf("Invalid input");}
    return 0;
}