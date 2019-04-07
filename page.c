#include<stdio.h>
int main()
{
    float nm,acm,eat,r,f,m;
    printf(" ---------Page Vaule For Fault Service time Not modified-------- : ");
    scanf("%f",&nm);
    printf("------Page vaule For Fault Service Time Modified------ : ");
    scanf("%f",&m);
    printf("Enter Access Time Of Memory :  ");
    scanf("%f",&acm);
     printf("Enter Effective Access time  : ");
    scanf("%f",&eat);
    printf("Enter The Replacement Page Modification (Percentage) : ");
    scanf("%f",&r);
    f=(eat-acm)/(((r*m)+(1-r)*nm)+acm);
    printf(" Page Fault Maximum Acceptable Is  %f",f);
}

   
