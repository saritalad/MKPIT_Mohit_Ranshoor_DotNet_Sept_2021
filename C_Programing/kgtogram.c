#include<stdio.h>
int main()
{/* wrong answer ,I have already explained this in class room I want ans 5Kg 400gm for input value of gm =5400 
5 Oct 2021
Q1	WAP to enter weight in grams and convert into Kg Gm(Ex:5620 gm = 5Kg 620gm)
*/
int gram,kg;
printf("\n enter the weight in gram");
scanf("%f",&gram);
kg=gram/1000;
printf("the weight in kg is=%2.3f ",kg);
return 0;
}

