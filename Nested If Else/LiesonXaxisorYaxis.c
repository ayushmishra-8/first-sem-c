//CODE TO CHECK WHERE THE PIONT X AND Y LIES ON WHICH AXIX 

#include<stdio.h>
int main(){
int x , y ;
printf("Enter a point X,Y :");
scanf("%d %d",&x,&y);

if(x==0 && y==0){
    printf("Point lies on origin");
  }
   if (x>0 && y==0){
    printf("Point lies on X axis");
  }      

  if(x>0 && y>0){
    printf("Lies on both x and y axix");
  }  

 if(x==0 && y>0){
    printf("Lies on  y axix");
  } 
  return 0 ;
  //DONE



}