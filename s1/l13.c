#include<stdio.h>
int main(){
char rollno[999],name[999];
int phy,che,maths;
printf("Enter rollno :\n");
scanf("%s",rollno);
printf("Enter name :\n");
scanf("%s",name);
printf("Enter physics marks :\n");
scanf("%d",&phy);
printf("Enter maths marks :\n");
scanf("%d",&maths);
printf("Enter chemistry marks :\n");
scanf("%d",&che);
printf("Student enrolled with rollno %s (%s) scored total marks of %d with percentage of %f",rollno,name,(maths+che+phy),(float)(maths+che+phy)/3);


return 0;
}