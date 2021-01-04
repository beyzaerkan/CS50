#include <stdio.h>
#include <cs50.h>
#include <math.h>
 
 int main()
 {
 
 float lira = get_float("Enter the change.\n");
 int kurus=round (lira*100);
 int sayi=0;
 
 while(kurus>=25)
 {
 kurus-=25;
 sayi++;
 }
 
 while(kurus>=10)
 {
 kurus-=10;
 sayi++;
 }
 
 while(kurus>=5)
{
kurus-=5;
sayi++;
} 
 
  while(kurus>=1)
{
kurus-=1;
sayi++;
} 

printf("Coin = %i\n",sayi);


return 0;
 }
