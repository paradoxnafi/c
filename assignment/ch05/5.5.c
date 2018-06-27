// Md. Nafi Shahriyar
// ID: 18103346

#include<stdio.h>

void main()

 {

   int Maths,Phy,Chem,Total,Total_MP;

   printf("Enter the marks of maths :");
   scanf("%d",&Maths);

   printf("Enter the marks of phy :");
   scanf("%d",&Phy);

   printf("Enter the marks of chem :");
   scanf("%d",&Chem);

   Total=Maths+Phy+Chem;
   Total_MP=Phy+Maths;

   if (Maths>=60 && Phy>=50 && Chem>=40 && Total>=200)

      printf("The candidate is eligible for the admission");

   else

   {      

      if(Total_MP>=150)

         printf("The candidate is eligible for the admission");

      else

          printf("The candidate is not eligible for the admission");

   }
}