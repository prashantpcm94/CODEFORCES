#include<stdio.h>
int main(){
      int n,y,j,i,a[4],y1;
      scanf("%d",&n);
      for(y=n+1;y<100000;y++){
          y1=y;i=0;
          while(y!=0){
                a[i] = (y%10);
                y = y/10;
                i++;
                }
          y=y1;
          for(i=0;i<4;i++){
              for(j=i;j<4;j++){
                  if(a[i]==a[j]&&i!=j)
                    goto S; 
                              
      }
      
      }
      goto Y;
      S :continue;
      }
      Y :printf("%d",y);
      return 0;
 }