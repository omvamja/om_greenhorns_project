#include<stdio.h>
#include<conio.h>


void main(){

clrscr();

int  grosssalry;
float har,da,ta,totl;

printf("base salary:");
scanf("%d",&grosssalry);

printf("har");
scanf("%f",&har);

printf("da");
scanf("%f",&da);

printf("ta");
scanf("%f",&ta);

har=(har/100)*grosssalry;
da=(da/100)*grosssalry;
ta=(ta/100)*grosssalry;

totl= grosssalry+har+da+ta;

printf("total is %.1f",totl);


getch();
}