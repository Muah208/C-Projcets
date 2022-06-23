#include <stdio.h>
#include <conio.h>
#include <stdint.h>
#include <stdlib.h>

int main(){

// Var
    const float Th_Steel_Pipe = 0.02; //Thickness of Steel pipes Constant
    const float Th_Concrete_Pipe = 0%.2f; //Thickness of Concrete pipes Constant
    
    int Start_P; //start - End Choice

    float LX0 = 1.13,RX0 = 1.13; //Step 1 Right And Left Length
    float LX1 = 1.5,RX1 = 1.5; //Right And Left Space between Ex section an pipes
    float X12 = 2,X23 = 2; //Space between pipes
    float HL1 = 5.5,HR1 = 5.5; //The hight of step 1
    float Pipe_T_1,Pipe_T_2,Pipe_T_3; //Outter Dim
    float OT; //Outter Dim according to user choice

    int Type_No; //Type of pipes var
    float Dim_Pipe; //Dimeter of pipes var
    int UserCond1; //User choice between go on or change the exacavtion section
    int User_Cond2; //User choice between go on or change the var of exacavtion section

    float EX_Area; //Area Of Ex Section
    float New_Value; //New value at any var in Ex Section
    
    float NGL; //Natural Ground Level
    float ExL; //Excavation Level

    float TOD; //Total Depth in meter

    float TOW_EX; //Total Width at Zero level
    float HMax; //max of two heights
    float EX_Width; // width at user depth

 // Eq
 // Welcome Intro

     printf("***** Weclcome This Progarme will help you to calcualte the area of exacavtion section for 3 pipes *****\n");
     printf("\n                                ***** Press: any Key To Start *****\n");
     printf("\n                                 ___Or Press: 0 To End\n");
     scanf("%d", &Start_P); 
if (Start_P != 0)
{
 do
 {
    // User Pipes choice Or End Programe

     printf("Which Type Of Pipes Will Use? \n Type 1 - Steel Pipes \n Type 2 - Concrete Pipes \nEnter the type number:");
     printf("\n____Press: 0 To End ____\n");
     scanf("%d", &Type_No); 
      
     
      if (Type_No != 0)
    
     {

      // Loops if choice not 1 or 2
     if (Type_No > 2  || Type_No < 1 ){
    
    
     while (0 < Type_No > 3)
     {
         printf("\nYou Entered Type No : %d", Type_No);
          printf("\nSo, Please Enter No Between 1 Or 2 only \n Type 1 - Steel Pipes \n Type 2 - Concrete Pipes \nEnter the type number:");
          scanf("%d", &Type_No);
     } 

     
      // Cases of pipes type

     }else if ( Type_No == 1  || Type_No == 2 ){
         switch (Type_No)
        {
       case 1:
             OT = Th_Steel_Pipe;
             printf("\nYour Type No is: %d", Type_No);
             printf( " - Steel Pipes- Thickness of pipe (m) = %.2f",Th_Steel_Pipe); 
        break;
      case 2:
             OT = Th_Concrete_Pipe;
             printf("\nYour Type No is: %d", Type_No);
             printf(" - Concrete Pipes - Thickness of pipe (m) = %.2f",Th_Concrete_Pipe);    
        break;  
        } 
      
  // To Calculate Outter dim of pipes according the type of pipes

    printf("\nWhat's Your Inner Dimeter Of Pipes will Use (in meter)?\n");
    scanf("%.2f", &Dim_Pipe);

    Pipe_T_1 = OT * 2 + Dim_Pipe;
    Pipe_T_2 = OT * 2 + Dim_Pipe;
    Pipe_T_3 = OT * 2 + Dim_Pipe;

    printf("The outter Dim of all 3 pipes ot will be the same (in meter): \n");
    printf("For Pipe 1: %.2f m\n",Pipe_T_1),printf("For Pipe 2: %.2f m\n",Pipe_T_2),printf("For Pipe 3: %.2f m\n",Pipe_T_3),printf(" m\n");

    printf("\nIf You Want to change the Exacvation section Press: Any Value \nOr you can escape by pressing : 0 \n");
    scanf("%d", &UserCond1);

      if ( UserCond1 != 0){
        
          // Ex section
          printf("___ LX1 ___                                                                                    ___ RX1 ___\n");
          printf("           \\ HL1                                                                        HR1 /\n");
          printf("             ___ LX0 ___ (Pipe_T_1) ___ X12 ___ (Pipe_T_2)___ X23 ___ (Pipe_T_3)___ RX0 ___ \n");
          
          // Change of Ex section Values
          printf("\n1-LX1 = %.2f", LX1),printf("\n2-HL1 = %.2f", HL1),printf("\n3-LX0 = %.2f", LX0);
          printf("\n4-Pipe_T_1 = %.2f", Pipe_T_1);
          printf("\n5-X12 = %.2f", X12);
          printf("\n6-Pipe_T_2 = %.2f", Pipe_T_2);
          printf("\n7-X23 = %.2f", X23);
          printf("\n8-Pipe_T_3 = %.2f", Pipe_T_3);
          printf("\n9-RX0 = %.2f", RX0),printf("\n10-HR1 = %.2f", HR1),printf("\n11-RX1 = %.2f", RX1);
          printf("\n____If you want to change any value just input the list number of var____");
          printf("\n____If you want to go on Just Press: 0____\n");
          scanf(" %d", &User_Cond2);
          
        do
        {

          switch (User_Cond2){
            case 1:
            printf("\n____Please Enter the new value (in Meter) of LX1: \n");
            scanf("%.2f", &New_Value);
            LX1 = New_Value;
            break;

            case 2:
            printf("\n____Please Enter the new value (in Meter) of HL1: \n");
            printf("\n____Know that HL1 = HR1 ____\n");
            scanf("%.2f", &New_Value);
            HL1 = New_Value;
            HR1 = HL1;
            break;

            case 3:
            printf("\n____Please Enter the new value (in Meter) of LX0: \n");
            scanf("%.2f", &New_Value);
            LX0 = New_Value;
            break;

            case 5:
            printf("\n____Please Enter the new value (in Meter) of X12: \n");
            scanf("%.2f", &New_Value);
            X12 = New_Value;
            break;

            case 7:
            printf("\n____Please Enter the new value (in Meter) of X23: \n");
            scanf("%.2f", &New_Value);
            X23 = New_Value;
            break;

            case 9:
            printf("\n____Please Enter the new value (in Meter) of RX0: \n");
            scanf("%.2f", &New_Value);
            RX0 = New_Value;
            break;

            case 10:
            printf("\n____Please Enter the new value (in Meter) of HR1: \n");
            printf("\n____Know that HL1 = HR1 ____\n");
            scanf("%.2f", &New_Value);
            HR1 = New_Value;
            HL1 = HR1;
            break;

            case 11:
            printf("\n____Please Enter the new value (in Meter) of RX1: \n");
            scanf("%.2f", &New_Value);
            RX1 = New_Value;
            break;

            case 4:
            case 6:
            case 8:
            printf("\n____This varbles can't change becouse it's according the first inuputs____ \n");
            break;

            default:
            printf("\n____Invalied inuputs____ \n");
            break;

          } // End Cases
          
          // Ex section
          printf("___ LX1 ___                                                                                    ___ RX1 ___\n");
          printf("           \\ HL1                                                                        HR1 /\n");
          printf("             ___ LX0 ___ (Pipe_T_1) ___ X12 ___ (Pipe_T_2)___ X23 ___ (Pipe_T_3)___ RX0 ___ \n");
          
          // Change of Ex section Values
          printf("\n1-LX1 = %.2f", LX1),printf("\n2-HL1 = %.2f", HL1),printf("\n3-LX0 = %.2f", LX0);
          printf("\n4-Pipe_T_1 = %.2f", Pipe_T_1);
          printf("\n5-X12 = %.2f", X12);
          printf("\n6-Pipe_T_2 = %.2f", Pipe_T_2);
          printf("\n7-X23 = %.2f", X23);
          printf("\n8-Pipe_T_3 = %.2f", Pipe_T_3);
          printf("\n9-RX0 = %.2f", RX0),printf("\n10-HR1 = %.2f", HR1),printf("\n11-RX1 = %.2f", RX1);
          printf("\n____If you want to change any value just input the list number of var____");
          printf("\n____If you want to go on Just Press: 0____\n");
          scanf(" %d", &User_Cond2);
          

        } while (User_Cond2 != 0);//End While

      }else if (UserCond1 == 0){
           printf("\n           _______________________________\n");
           }
           
           printf("\n");
           printf("\n_______________________________ Natural Ground Level (NGL)  _______________________________\n");
           printf("                                           /\\ \n");
           printf("                                            | \n");
           printf("                                            | \n");
           printf("                                            | \n");
           printf("____________________________________ Total Depth (m)  _____________________________________\n");
           printf("                                            | \n");
           printf("                                            | \n");
           printf("         printf                                   | \n");
           printf("                                          \\/  \n");
           ("_________________________________ Excavation Level (ExL)  _________________________________\n");
           printf("\n");

           printf("\nPlease Enter your Natural Ground Level (in meter) - NGL: \n");
           scanf("%.2f", &NGL);
        
           printf("\nPlease Enter your Excavation Level (in meter) - ExL: \n");
           scanf("%.2f", &ExL);

           TOD = NGL - ExL;

           printf("\nNGL: %.2f", NGL);
           printf("\nExL: %.2f", ExL);
           printf("\nTota Depth (m): %.2f", TOD);
           printf("\nThe Maximum Heigth of Ex (m): %.2f", HL1);
           HMax = HL1;
           if (TOD > HMax || TOD < 0)
           {
            do
            {
              printf("\n_______________________________\n");
              printf("\n");
              printf("The Total Depth not applicable\n");
              printf("So, There is no Area to calculate\n");
            
              printf("\n");
              printf("\n_______________________________ Natural Ground Level (NGL)  _______________________________\n");
              printf("                                           /\\ \n");
              printf("                                            | \n");
              printf("                                            | \n");
              printf("                                            | \n");
              printf("____________________________________ Total Depth (m)  _____________________________________\n");
              printf("                                            | \n");
              printf("                                            | \n");
              printf("                                            | \n");
              printf("                                          \\/  \n");
              printf("_________________________________ Excavation Level (ExL)  _________________________________\n");
              printf("\n");
              
              printf("\nPlease Enter anther value of Natural Ground Level (in meter) - NGL: \n");
              scanf("%.2f", &NGL);
      
              printf("\nPlease Enter anther value of Excavation Level (in meter) - ExL: \n");
              scanf("%.2f", &ExL);
              
              TOD = NGL - ExL;

              printf("\nNGL: %.2f", NGL);
              printf("\nExL: %.2f", ExL);
              printf("\nTota Depth (m): %.2f", TOD);

            }while ( HMax > TOD > 0);
           }



    TOW_EX  = LX0 + Pipe_T_1 + X12 + Pipe_T_2 + X23 + Pipe_T_3 + RX0;
    EX_Width = TOD * (TOW_EX / HMax);
    EX_Area = (.5 * (EX_Width + TOW_EX) ) * HMax;
    

    printf("\n");
    printf("___ "),printf("%.2f",LX1),printf(" ___                                                                                                   ___ "),printf("%.2f",RX1),printf(" ___\n");
    printf("                 \\ "),printf("%.2f",HL1),printf("                                                                              "),printf("%.2f",HR1),printf(" /\n");
    printf("                   ___ "),printf("%.2f",LX0),printf(" ___ "),printf("%.2f",Pipe_T_1),printf(" ___ "),printf("%.2f",X12),printf(" ___ "),printf("%.2f",Pipe_T_2),printf("___ "),printf("%.2f",X23),printf(" ___ "),printf("%.2f",Pipe_T_3),printf("___ "),printf("%.2f",RX0),printf(" ___ \n");

    printf("\n");
    printf("\n_______________________________ Natural Ground Level ("),printf("%.2f",NGL),printf(")  _______________________________\n");
    printf("                                           /\\ \n");
    printf("                                           || \n");
    printf("                                           || \n");
    printf("                                           || \n");
    printf("____________________________________ Total Depth ("),printf("%.2f",TOD),printf(")  _____________________________________\n");
    printf("                                           || \n");
    printf("                                           || \n");
    printf("                                           || \n");
    printf("                                          \\/  \n");
    printf("_________________________________ Excavation Level ("),printf("%.2f",ExL),printf(")  _________________________________\n");
    printf("\n");
              
    printf("\n______________________________________________________________\n");
    printf("\n");
    printf("\n____Total Width at Ex Level: %.2f", TOW_EX);
    printf(" m");
    printf("\n____Maximum Hieght in Ex Section: %.2f", HMax);
    printf(" m");
    printf("\n____Ex width at total depth from Ex level: %.2f", EX_Width);
    printf(" m");
    printf("\n____The section area is: %.2f", EX_Area);
    printf(" m2\n");

    printf("\n**** Thank You for using Ex section area calculate By: Eng.Muhammad Osama ****");
    printf("\n____ If you want to calculate another value Press :  any Value ____ \n____Or Press: 0 To End ____\n");
    scanf("%d", &Start_P);
  }
  }else if ( Type_No == 0){   
     printf("\n**** **************************************************************** ****");
     printf("\n____ If you want to calculate another value Press : any Value____ \n____Or Press: 0 To End ____\n");
     scanf("%d", &Start_P);
  }
  
} while (Start_P != 0);
  
}

    return 0;
}
