#include <stdio.h>
 
int main() {
 
   double hour, km_h = 12, km;
   double fuel;
   
   scanf("%lf %lf", &hour, &km);
   
   fuel = hour * km;
   
   fuel = fuel/km_h;
   
   printf("%.3lf\n", fuel);
 
    return 0;
}