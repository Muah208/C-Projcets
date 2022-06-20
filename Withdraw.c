#include <stdio.h>

int main(){

    int Amount_Value; //User Amount Value

    printf("Enter amount you want withdraw: ");
     scanf("%d", &Amount_Value);
    
     int Money_Value_200 = Amount_Value / 200; //Money Value 200 EGP 
      printf("\nAmount No Of 200 EGP: %d",Money_Value_200);
     Amount_Value = Amount_Value - (200 * Money_Value_200);
     

     int Money_Value_100 = Amount_Value / 100; //Money Value 100 EGP 
      printf("\nAmount No Of 100 EGP: %d",Money_Value_100);
     Amount_Value = Amount_Value - (100 * Money_Value_100);
    

     int Money_Value_50 = Amount_Value/50; //Money Value 50 EGP 
      printf("\nAmount No Of 50 EGP: %d",Money_Value_50);
     Amount_Value = Amount_Value - (50 * Money_Value_50);
     

     int Money_Value_20 = Amount_Value/20; //Money Value 20 EGP 
      printf("\nAmount No Of 20 EGP: %d",Money_Value_20);
     Amount_Value = Amount_Value - (20 * Money_Value_20);
     

     int Money_Value_10 = Amount_Value/10; //Money Value 10 EGP 
      printf("\nAmount No Of 10 EGP: %d",Money_Value_10); 
     Amount_Value = Amount_Value - (10 * Money_Value_10);
     

     int Money_Value_5 = Amount_Value/5; //Money Value 5 EGP 
      printf("\nAmount No Of 5 EGP: %d",Money_Value_5);
     Amount_Value = Amount_Value - (5 * Money_Value_5);
     

     int Money_Value_1 = Amount_Value/1; //Money Value 1 EGP 
      printf("\nAmount No Of 1 EGP: %d",Money_Value_1);
     Amount_Value = Amount_Value - (1 * Money_Value_1);
     
   
    return 0;
}