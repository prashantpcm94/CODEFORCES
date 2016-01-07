#include<stdio.h>
int main()
{
    
    int n,i,count1=0,count2=0,count3=0,count4=0,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
            count1++;
        if(a[i]==2)
            count2++;
        if(a[i]==3)
            count3++;  
        if(a[i]==4)
            count4++;  
    }    
    
    k=count4+count3;
     
    count1=count1-count3;  
    if(count1>0)
    {
         if(count2%2==0)
         {
               count2=count2/2;
               if(count1%4==0)
                     count1=count1/4;
               else
                     count1 = (count1/4)+1;
               k=k+count1+count2;
          }
         else
         {
               count2 = count2-count2/2;
               count1=count1-2;
               if(count1>0)
               {
                   if(count1%4==0)
                       count1=count1/4;
                   else
                       count1 = count1/4+1;
                   k=k+count1+count2; 
               }
               else
                   k=k+count2;
          }
                  
         
        
    }
    else
    {
        count2=count2-count2/2;
        k=k+count2;
    }
       
    printf("%d",k);
    return 0;
       
}