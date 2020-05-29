#include <stdio.h>


void add(int a,int b);

void multiply(int a,int b);


void main()

{
    int a,b,sum,choice;

    
    while(1)
  
  {
    printf("Enter the first number:");
    
scanf("%d",&a);
    printf("Enter the second number:");
    
scanf("%d",&b);
    printf("addition=1,multiplcation=2,exit=3\n");
   
 scanf("%d",&choice);
    
    
if(choice==1)
    add(a,b);
   
 else if (choice==2)
    multiply(a,b);
  
 else if (choice==3)
   exit(0);
}
}



void add(int a,int b)

{
    int total;
 
  total=a+b;
    
  
  printf("total:%d",total) ;
}



void multiply(int a,int b)

{
    int total;
  
  total=a*b;
   
 printf("total:%d",total) ;
}
