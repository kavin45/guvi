#include<stdio.h>

#include<conio.h>

void main()

{
   
 int i,j,size,temp;
  
  int a[10];
    
printf("enter the number size\n");

    scanf("%d",&size);
    
printf("enter the elments\n");
    
for(i=0;i<size;i++)

    {
       
 scanf("%d",&a[i]);
  
  }
    
for(i=0;i<size;i++)

    {
       
 for(j=i+1;j<size;j++)
 
       {
          
         
 if(a[i]>a[j])
   
     {
          
  temp=a[i];
 
   a[i]=a[j];
           
 a[j]=temp;
       
 }
        }
    }
    
        
printf("the sorted number is:\n");
       
 for(i=0;i<size;i++)
       
 {
           
 printf("%d\n",a[i]);
      
  }
        
printf("\n");
        
for(i=0;i<size;i++)
       
 {
        
for(j=i+1;j<size;j++)
        
{
            
if(a[i]==a[j])
            
{
                
printf("%d",a[i]);
           
 }
       
 }
   
 }
   
 getch();
}