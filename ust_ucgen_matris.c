#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ÜST ÜÇGEN MATRİS Oluştur(Satır ve Sütun Sayısı kesinlikle aynı)
// asal köşegenin alt kısmı tamamen 0
// 3 x 3 lük üst üçgen matris örneği aşağıdadır
/* 1 2 4
   0 6 3
   0 0 5
*/

int main() 

{
    
  int i,j;  
  
  int ikiBoyutluDizi[10][10];
  
  srand(time(0));
  
 for(i = 0 ; i < 10 ; i++) 
 {                                          
     
  for(j = 0 ; j < 10 ; j++)  
  {
    if(j >= i)
   {
    ikiBoyutluDizi[i][j] = 1 + rand()%9;  
   } 
      
   else
   {
    ikiBoyutluDizi[i][j] = 0; // asal köşegenin altındaki elemanlar 0
   }
  }                              
     
 }
 
 // ekrana yazdırılıyor
 for(i = 0 ; i < 10 ; i++) 
 {                                               
  for(j = 0 ; j < 10 ; j++)  
  {
   printf("%d ",ikiBoyutluDizi[i][j]);
  }
   printf("\n");
 }
 
 return 0;
  
}