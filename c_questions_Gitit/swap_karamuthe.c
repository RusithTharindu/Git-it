#include<stdio.h>
void main()
{ int a,b,t;
printf("Enter the first Number : ");
scanf("%d",&a);
printf("Enter the second Number : ");
scanf("%d",&b);
a=b;
b=a;
a=b;
t=a;
//what is that t doing there? kinda sus ryt!
if (a==b){
    printf("Wenna bane! Swap wenna one! Aye balanna \n");
}
else{
printf("first number is %d & the second number is %d",a,b);
}
}
