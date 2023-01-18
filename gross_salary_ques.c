/*

    Problem
    Submissions
    Leaderboard
    Discussions

Aarzoo works as an employee in the XYZ corporation. She has an account on their portal where she gets all the notifications and salary slips. The company has certain norms by which the salary breakup of an employee is displayed on their profile. Every month Aarzoo cross checks the salary through the given parameters. The company uses the following HRA and DA percentages:

• If the Basic Salary is less than or equal to 10000 then HRA = 8% of the basic, and DA = 10% of the basic;

• If Basic Salary is less than or equal to 20000 and greater than 10000 then HRA = 16% and DA = 20%;

• If Basic Salary is greater than 20000 then HRA = 24% and DA = 30%. */

#include <stdio.h>
#include <math.h>

int main() {
double a,hra,da,bs,gs;
scanf("%lf",&a);
bs=a;
if(a<=20000)
{ if (
a<=10000){
hra = bs*8/100;
da = bs*10/100;
}
else {
hra = bs*16/100;
da = bs*20/100;
}}
else
{
hra = bs*24/100;
da = bs*30/100;
}
gs=bs+da+hra;
printf("%.2lf",gs);
return 0; }
