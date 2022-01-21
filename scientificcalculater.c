#include<stdio.h>
#include<conio.h>
#include<math.h>

void addition();
void substraction();
void multiplication();
void division();
void modulus();
void factorial();
void square();
void cube();
void power();



main(){
int number;
printf("                                                Thanks to Vishwa sir                   \n");
printf("          *******************************************WELCOME TO SCIENTIFIC CALCULATOR ***************************\n");
printf(" \n                                       Enter a number to perform a operation \n");
printf("\n Enter number : 1 to Addition :\n");
printf("\n Enter number : 2 to Substraction :\n");
printf("\n Enter number : 3 to Multiplication :\n");
printf("\n Enter number : 4 to Division:\n");
printf("\n Enter number : 5 to Modulus :\n");
printf("\n Enter number : 6 to Factorial :\n");
printf("\n Enter number : 7 to Square :\n");
printf("\n Enter number : 8 to Cube :\n");
printf("\n enter number : 9 to power :\n");


while(1){
    printf("\n Please, Enter any number between 1 to 8:\n");
    scanf("%d",&number);


switch(number){

 case 1:
    addition();
    break;
 case 2:
    substraction();
    break;
 case 3:
    multiplication();
    break;
 case 4:
    division();
    break;
 case 5:
    mudulus();
    break;

 case 6:
    factorial();
    break;

 case 7:
    square();
    break;
 case 8:
    cube();
    break;

 case 9:
    power();
    break;
 case 0:
    exit(0);
 default:
     printf("\n Please enter any valid number :");

}

}


}
void addition(){
int a, b, c;
printf("enter your first number :");
scanf("%d",&a);
printf("enter your second number :");
scanf("%d",&b);
c = a+b;
printf("%d + %d = %d",a,b,c);

}
void substration(){
int a, b, c;
printf("enter your first number :");
scanf("%d",&a);
printf("enter your second number :");
scanf("%d",&b);
c = a-b;
printf("%d - %d = %d",a,b,c);

}
void multiplication(){
int a, b, c;
printf("enter your first number :");
scanf("%d",&a);
printf("enter your second number :");
scanf("%d",&b);
c = a*b;
printf("%d * %d = %d",a,b,c);

}
void division(){
float a, b;
float c;
printf("enter your first number :");
scanf("%f",&a);
printf("enter your second number :");
scanf("%f",&b);
c = a/b;
printf("%f / %f = %f",a,b,c);

}
void modulus(){
float a, b, c;
printf("enter your first number :");
scanf("%f",&a);
printf("enter your second number :");
scanf("%f",&b);
c = a % b;
printf("%f % %f = %f",a,b,c);

}
void factorial(){
int a, factorial;
printf(" Enter which number you want factorial :");
scanf("%d",&a);
factorial=1;
for (int i=1;i<=n;i++){
    factorial=factorial*i;
}
printf(" Your factorial of this number %d is = %d",n,factorial);
}
void cube(){
int a;
printf(" Enter which number you want cube :");
scanf("%d",&a);
double b=pow(a,3);
printf(" The cube is : %lf",b);


}
void power(){
double a, b;
printf(" Enter your base :");
scanf("%lf",&a);
printf(" Enter your power :");
scanf("%lf",&b);
double c=pow(a,b);
printf(" The power is : %lf",c);

}
void square(){
double a;
printf(" Enter your number you want square :");
scanf("%lf",&a);

double b=pow(a,2);
printf(" The square is : %lf",b);

}
