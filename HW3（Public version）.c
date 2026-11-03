/*
 * Hello World ICS Project
 * Copyright (C) 2026 HWmakerAlice
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <Windows.h>
#include <time.h>
#include <conio.h> 
#define PI 3.14

int Abb(int a,int b)
{
	return a+b;
}
int Sub(int a,int b)
{
	return a-b;
}
int Mul(int a,int b)
{
	return a*b;
}
int areaOne(int a)
{
	int mul;
	mul=a*a;
	return mul;
}
int areaTwo(int a,int b)
{
	int mul;
	mul=a*b;
	return mul;
}
double areaThree(double r)
{
	double area1;
	area1=PI*pow(r,2);
	return area1;
}
double areaFour(double sr,double lr)
{
	double area2;
	area2=PI*sr*lr;
	return area2;
}
double areaFive_one(double a,double h)
{
	double area3;
	area3=(a*h)/2.0;
	return area3;
}
double areaSix_first(double x1,double y1,double x2,double y2,double x3,double y3)
{
	double area4;
	area4=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
	return area4;
}
double areaSix_second(double n)
{
	double area5;
	area5=(1.0/2.0)*fabs(n);
	return area5;
}
double areaSeven_first(double a,double b,double c)
{
	double area6;
	area6=(a+b+c)/2.0; 
	return area6;
}
double areaSeven_second(double n,double a,double b,double c)
{
	double area7;
	area7=n*(n-a)*(n-b)*(n-c);
	return area7;	
} 
double areaSeven_thrid(double n)
{
	double area8;
	area8=sqrt(n);
	return area8;
}
double areaEghlt_first(double a,double b)
{
	double area9;
	area9=(a*b)/2.0;
	return area9;
}
double areaEghlt_second(double a,double h)
{
	double area10;
	area10=a*h;
	return area10;
}
double perimeterfrist(double a)
{
	double perimeter1;
	perimeter1=4.0*a;
	return perimeter1;
}
double perimeterSecond(double a,double b)
{
	return (a + b) * 2.0;
}
double perimeterThrid(double rad)
{
	double perimeter3;
	perimeter3=2*PI*rad;
	return perimeter3;
}
double perimeterFour(double a,double b,double c)
{
	return a+b+c;
}
double midpoint_one(double a,double b)
{
	return (a+b)/2.0;
}
double midpoint_two(double c,double d)
{
	return (c+d)/2.0;
}
double Bmi(double a,double b)
{
	return b/(a*a);
}
double Line(double a,double b)
{
	return a*a+b*b;
}
double Line_second(double a,double x,double b,double y,double c)
{
	return a*x+b*y+c;
}
double Line_third(double n,double m)
{
	return fabs(n)/sqrt(m);
}
double Line_four(double c1,double c2)
{
	return c1-c2;
}
double Line_five(double e,double f)
{
	return f*f+e*e;
}
double Line_six(double n,double m)
{
	return fabs(n)/sqrt(m);
}
float Cost_estimation(float a,float b,float c,float d)
{
	return (a+b+c+d)/1.2;
}
double Fabric_budget(double a,double b)
{
	return (a+b+10.0)*2.0;
}
double Props_and_consumables(double a,double b)
{
	return (a/b)*1.5;
}
double Height_Scaling(double a,double b,double c)
{
	return a*(b/c);
}
double Turn_pictures_into_real_objects(double a,double b,double c)
{
	return (a/b)*c;
}
typedef struct studentdata
{
	char studentname[200];
	long studentid;
	int mark1;
	int mark2;
	int mark3;
	int result1;
	double result2;
}STU;
void MarkBobbleSort(STU* an,int num)
{
	int i,j;
	STU traps;
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-i-1;j++)
		{
			if(an[j].result1<an[j+1].result1)
			{
				traps=an[j];
				an[j]=an[j+1];
				an[j+1]=traps;	
			}	
		}	
	} 
}
double Radian(double a)
{
	double formula;
	formula=a*PI/180;
	return formula;
}

int main(void)
{
	char choice;
	do
	{
		char fill[200];
		int cont;
		
		system("cls");
		
		printf("¡ï HELLO-WORLD 3.0 [ICS02 F-P-93-1 HW3_SYSTEM HW3] ¡ï\n");
		printf("Make in 2026.8.31 2026.9.1 2026.9.4 2026.9.8\n");
		printf("Coder name: HWmakerAlice\n");
		printf("----------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("1.Basic Calculation  2.Solving a quadratic equation  3.Complex number calculation  4.Integer converter\n");
		printf("5.Linear function formula solution  6.Solving the area of various shapes  7.Solving the perimeter of various shapes  8.Mid point search\n");
		printf("9.BMI calculator  10.Change Calculator  11.The chord length problem of straight lines and circles  12.Open the assistant with a small software\n");
		printf("13.Calculation issues needed for the preliminary preparation of cosplay  14.Current Time  15.Student Performance asatatistics Table\n"); 
		printf("16.Solving trigonometric functions\n");
		printf("----------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("Function SelectionFunction Selection:");
		scanf("%d",&cont);
		printf("----------------------------------------------------------------------------------------------------------------------------------------------\n");
		
		switch(cont)
		{
			case 1:{
				char cho;
				
				printf("1.Basic Calculation:\n");
				printf("a.Addition  b.Subtraction  c.Multiplication  d.Division\n");
				printf("Function SelectionFunction Selection:");
				scanf(" %c",&cho);
				switch(cho)
				{
					case 'a':
					case 'A':{
						FILE* fp1;
						int a,b;
						int result1;
						
						printf("a.Addition:\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("number a:");
						scanf("%d",&a);
						printf("number b:");
						scanf("%d",&b);
						result1=Abb(a,b);
						printf("Answer:%d\n",result1);
						fp1=fopen(full,"w");
						if(fp1==NULL)
						{
							return -1;
						}
						fprintf(fp1,"file name:%s\n",full);
						fprintf(fp1,"a.Addition\n");
						fprintf(fp1,"Answer:%d+%d=%d\n",a,b,result1);
						fclose(fp1);
						break;
					}
					case 'b':
					case 'B':{
						FILE* fp2;
						int a,b;
						int result2;
						
						printf("b.Subtraction:\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("number a:");
						scanf("%d",&a);
						printf("number b:");
						scanf("%d",&b);
						result2=Sub(a,b);
						printf("Answer:%d\n",result2);
						fp2=fopen(full,"w");
						if(fp2==NULL)
						{
							return -1;
						}
						fprintf(fp2,"file name:%s\n",full);
						fprintf(fp2,"b.Subtraction\n");
						fprintf(fp2,"Answer:%d-%d=%d\n",a,b,result2);
						fclose(fp2);
						break;
					}
					case 'c':
					case 'C':{
						FILE* fp3;
						int a,b;
						int result3;
						
						printf("c.Multiplication:\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("number a:");
						scanf("%d",&a);
						printf("number b:");
						scanf("%d",&b);
						result3=Mul(a,b);
						printf("Answer:%d\n",result3);
						fp3=fopen(full,"w");
						if(fp3==NULL)
						{
							return -1;
						}
						fprintf(fp3,"file name:%s\n",full);
						fprintf(fp3,"c.Multiplication:\n");
						fprintf(fp3,"Answer:%d*%d=%d\n",a,b,result3);
						fclose(fp3);
						break;
					}
					case 'd':
					case 'D':{
						FILE* fp4;
						int a,b;
						int result4;
						
						printf("d.Division:\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("number a:");
						scanf("%d",&a);
						printf("number b:");
						scanf("%d",&b);
						if(b==0)
						{
							printf("not calcultion number.\n");
							break;
						}
						result4=a/b;
						printf("Answer:%d\n",result4);
						fp4=fopen(full,"w");
						if(fp4==NULL)
						{
							return -1;
						}
						fprintf(fp4,"file name:%s\n",full);
						fprintf(fp4,"d.Division:\n");
						fprintf(fp4,"Answer:%d/%d=%d\n",a,b,result4);
						if(b==0)
						{
							fprintf(fp4,"not calcultion number.\n");
						}
						fclose(fp4);
						break;
					}
					default:{
						printf("Invalid choice\n");
						break;
					}
				}
				break;
			}
			case 2:{
				FILE* fp1;
				int a,b,c;
				double x1,x2;
				double formula3;
				
				printf("2.Solving a quadratic equation\n");
				printf("Custom file name(txt):\n");
				scanf("%s",fill);
				char full[200];
				sprintf(full,"%s.txt",fill);
				printf("number a:");
				scanf("%d",&a);
				printf("number b:");
				scanf("%d",&b);
				printf("number c:");
				scanf("%d",&c);
				if(a==0){
					printf("a=0, can't run.\n");
					fp1=fopen(full,"w");
					if(fp1==NULL)
					{
						return -1;
					}
					fprintf(fp1,"file name:%s\n",full);
					fprintf(fp1,"2.Solving a quadratic equation\n");
					fprintf(fp1,"a=0, can't run");
					fclose(fp1);
					break;
				} 
				formula3=b*b-4.0*a*c; 
				x1=(-b+sqrt(formula3))/(2.0*a);
				x2=(-b-sqrt(formula3))/(2.0*a);
				if(formula3>0)
				{
					printf("Answer:x1=%.2lf  x2=%.2lf\n",x1,x2);
				}
				else if(formula3==0)
				{
					printf("Answer:x1=x2=%.2lf\n",x1);
				}
				else
				{
					printf("Not answer.\n");
				}
				fp1=fopen(full,"w");
				if(fp1==NULL)
				{
					return -1;
				}
				fprintf(fp1,"file name:%s\n",full);
				fprintf(fp1,"2.Solving a quadratic equation\n");
				fprintf(fp1,"quadratic formula:%dx^2+%dx+%d=0\n",a,b,c);
				if(formula3>0)
				{
					fprintf(fp1,"Answer:x1=%.2lf  x2=%.2lf\n",x1,x2);
				}
				else if(formula3==0)
				{
					fprintf(fp1,"Answer:x1=x2=%.2lf\n",x1);
				}
				else
				{
					fprintf(fp1,"Not answer.\n");
				}
				fclose(fp1);
				break;
			}
			case 3:{
				char cho;
				
				printf("3.Complex number calculation\n");
				printf("a.Addition complex number  b.Subtraction complex number  c.Multiplication complex number  d.Division complex number\n"); 
				printf("Function SelectionFunction Selection:");
				scanf(" %c",&cho);
				switch(cho)
				{
					case 'A':
					case 'a':{
						FILE* fp1;
						int a,b,c,d;
						int sum,sum2;
						
						printf("a.Addition complex number\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("number 1 real part:");
						scanf("%d",&a);
						printf("number 1 imaginary part:");
						scanf("%d",&b);
					
						printf("complex number 1:%d+%di\n",a,b);
						printf("number 2 real part:");
						scanf("%d",&c);
						printf("number 2 imaginary part:");
						scanf("%d",&d);
						printf("complex number 2:%d+%di\n",c,d);
						sum=a+c;
						sum2=b+d;
						printf("Answer:%d+%di\n",sum,sum2);
						fp1=fopen(full,"w");
						if(fp1==NULL)
						{
							return -1;
						}
						fprintf(fp1,"file name:%s\n",full);
						fprintf(fp1,"a.Addition complex number\n");
						fprintf(fp1,"complex number 1:%d+%di\n",a,b);
						fprintf(fp1,"complex number 2:%d+%di\n",c,d);
						fprintf(fp1,"Answer:%d+%di\n",sum,sum2);
						fclose(fp1);
						break;
					}
					case 'B':
					case 'b':{
						FILE* fp2;
						int a,b,c,d;
						int sub,sub2;
						
						printf("b.Subtraction complex number\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("number 1 real part:");
						scanf("%d",&a);
						printf("number 1 imaginary part:");
						scanf("%d",&b);
						
						printf("complex number 1:%d+%di\n",a,b);
						printf("number 2 real part:");
						scanf("%d",&c);
						printf("number 2 imaginary part:");
						scanf("%d",&d);
						printf("complex number 2:%d+%di\n",c,d);
						sub=a-c;
						sub2=b-d;
						printf("Answer:%d+%di\n",sub,sub2);
						fp2=fopen(full,"w");
						if(fp2==NULL)
						{
							return -1;
						}
						fprintf(fp2,"file name:%s\n",full);
						fprintf(fp2,"b.Subtraction complex number\n");
						fprintf(fp2,"complex number 1:%d+%di\n",a,b);
						fprintf(fp2,"complex number 2:%d+%di\n",c,d);
						fprintf(fp2,"Answer:%d+%di\n",sub,sub2);
						fclose(fp2);
						break;
					}
					case 'C':
					case 'c':{
						FILE* fp3;
						int a,b,c,d;
						int mul,mul2;
						
						printf("c.Multiplication complex number\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("number 1 real part:");
						scanf("%d",&a);
						printf("number 1 imaginary part:");
						scanf("%d",&b);
						printf("complex number 1:%d+%di\n",a,b);
						printf("number 2 real part:");
						scanf("%d",&c);
						printf("number 2 imaginary part:");
						scanf("%d",&d);
						printf("complex number 2:%d+%di\n",c,d);
						mul=a*c-b*d;
						mul2=a*d+b*c;
						printf("Answer:%d+%di\n",mul,mul2);
						fp3=fopen(full,"w");
						if(fp3==NULL)
						{
							return -1;
						}
						fprintf(fp3,"file name:%s\n",full);
						fprintf(fp3,"c.Multiplication complex number\n");
						fprintf(fp3,"complex number 1:%d+%di\n",a,b);
						fprintf(fp3,"complex number 2:%d+%di\n",c,d);
						fprintf(fp3,"Answer:%d+%di\n",mul,mul2);
						fclose(fp3); 
						break;
					}
					case 'D':
					case 'd':{
						FILE* fp4;
						int a,b,c,d;
						double div,div2;
						
						printf("d.Division complex number\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("number 1 real part:");
						scanf("%d",&a);
						printf("number 1 imaginary part:");
						scanf("%d",&b);
						
						printf("complex number 1:%d+%di\n",a,b);
						printf("number 2 real part:");
						scanf("%d",&c);
						printf("number 2 imaginary part:");
						scanf("%d",&d);
						printf("complex number 2:%d+%di\n",c,d);
						if(c*c+d*d==0)
					    {
					        printf("Division by zero complex number.\n");
					        fp4=fopen(full,"w");
					        if(fp4!=NULL)
					        {
					            fprintf(fp4,"file name:%s\n",full);
					            fprintf(fp4,"d.Division complex number\n");
					            fprintf(fp4,"Division by zero complex number.\n");
					            fclose(fp4);
					        }
					        break;
					    }
					    div=(a*c+b*d)/(c*c+d*d);
					    div2=(b*c-a*d)/(c*c+d*d);
					    printf("Answer:%.2lf+%.2lfi\n",div,div2);
					    fp4=fopen(full,"w");
					    if(fp4==NULL) return -1;
					    fprintf(fp4,"file name:%s\n",full);
					    fprintf(fp4,"d.Division complex number\n");
					    fprintf(fp4,"complex number 1:%d+%di\n",a,b);
					    fprintf(fp4,"complex number 2:%d+%di\n",c,d);
					    fprintf(fp4,"Answer:%.2lf+%.2lfi\n",div,div2);
					    fclose(fp4);
					    break;
					}
				default:{
						printf("Invalid choice\n");
						break;
					}	
				}
				break;
			}
			case 4:{
				char cho;
				printf("4.Integer converter\n");
				printf("a.Convert decimal to binary  b.Convert decimal to octal  c.Convert decimal to hexadecimal\n");
				printf("Function SelectionFunction Selection:");
				scanf(" %c",&cho);
				
				switch(cho)
				{
					case 'a':
					case 'A':{
						FILE* fp1;
						int num;
						int i;
						int bit;
						
						printf("a.Convert decimal to binary\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("Input integerinput integer:");
						scanf("%d",&num);
						printf("binary:\n");
						for(i=31;i>=0;i--)
						{
							bit=(num>>i)&1;
							printf("%d",bit);
							if(i%4==0)
							{
								printf(" ");
							}
						} 
						printf("\n");
						fp1=fopen(full,"w");
						if(fp1==NULL)
						{
							return -1;
						}
						fprintf(fp1,"file name:%s\n",full);
						fprintf(fp1,"a.Convert decimal to binary\n");
						fprintf(fp1,"Input integerinput integer:%d\n",num);
						fprintf(fp1,"binary:");
						for(i=31;i>=0;i--)
						{
							bit=(num>>i)&1;
							fprintf(fp1,"%d",bit);
							if(i%4==0)
							{
								fprintf(fp1," ");
							}
						} 
						fprintf(fp1,"\n");
						fclose(fp1);
						break;
					}
					case 'b':
					case 'B':{
						FILE* fp2;
						int num;
						printf("b.Convert decimal to octal\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("Input integerinput integer:");
						scanf("%d",&num);
						printf("Octal:%o\n",num);
						fp2=fopen(full,"w");
						if(fp2==NULL)
						{
							return -1;
						}
						fprintf(fp2,"file name:%s\n",full);
						fprintf(fp2,"b.Convert decimal to octal\n");
						fprintf(fp2,"Input integerinput integer:%d\n",num);
						fprintf(fp2,"Octal:%o\n",num);
						fclose(fp2);
						break;
					}
					case 'c':
					case 'C':{
						FILE* fp3;
						int num;
						printf("c.Convert decimal to hexadecimal\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("Input integerinput integer:");
						scanf("%d",&num);
						printf("Hexadecimal(big write):%X\n",num);
						printf("Hexadecimal(Small write):%x\n",num);
						fp3=fopen(full,"w");
						if(fp3==NULL)
						{
							return -1;
						}
						fprintf(fp3,"file name:%s\n",full);
						fprintf(fp3,"c.Convert decimal to hexadecimal\n");
						fprintf(fp3,"Input integerinput integer:%d\n",num);
						fprintf(fp3,"Hexadecimal(big write):%X\n",num);
						fprintf(fp3,"Hexadecimal(Small write):%x\n",num);
						fclose(fp3);
						break;
					}
					default:{
						printf("Invalid choice\n");
						break;
					}
				}
				break;
			}
			case 5:{
				FILE* fp5;
				double A_x1, A_y1;
			    double B_x2, B_y2;
			    double formula_1;
			    double formula_2;
			  	double k;
			    double b;
			    printf("5.Linear function formula solution\n");
			    printf("Custom file name(txt):\n");
				scanf("%s",fill);
				char full[200];
				sprintf(full,"%s.txt",fill);
			    printf("Point a:\n");
			    scanf("%lf %lf", &A_x1, &A_y1);
			    printf("Point b:\n");
			    scanf("%lf %lf", &B_x2, &B_y2);
			    formula_1 = B_y2 - A_y1;  
			    formula_2 = B_x2 - A_x1;  
			    
			    if(formula_2 == 0) {
			        printf("answer: x = %.2lf (vertical line)\n", A_x1);
			        fp5=fopen(full,"w");
			        if(fp5==NULL)
			        {
			        	return -1;
					}
					fprintf(fp5,"file name:%s\n",full);
					fprintf(fp5,"5.Linear function formula solution\n");
					fprintf(fp5,"Point a=(%.2lf,%.2lf)\n",A_x1,A_y1);
					fprintf(fp5,"Point b=(%.2lf,%.2lf)\n",B_x2,B_y2);
					fprintf(fp5,"answer: x = %.2lf (vertical line)\n",A_x1);
					fclose(fp5);
			    } 
				else {
			        k = formula_1 / formula_2;
			        b = A_y1 - k * A_x1;
			        if(b >= 0) {
			            printf("answer: y = %.2lfx + %.2lf\n", k, b);
			            fp5=fopen(full,"w");
			            if(fp5==NULL)
			            {
			            	return -1;
						}
						fprintf(fp5,"file name:%s\n",full);
						fprintf(fp5,"5.Linear function formula solution\n");
						fprintf(fp5,"Point a=(%.2lf,%.2lf)\n",A_x1,A_y1);
						fprintf(fp5,"Point b=(%.2lf,%.2lf)\n",B_x2,B_y2);
						fprintf(fp5,"answer: y = %.2lfx + %.2lf\n",k,b);
						fclose(fp5);
			        } 
					else {
			            printf("answer: y = %.2lfx - %.2lf\n", k, -b);
			            fp5=fopen(full,"w");
			            if(fp5==NULL)
			            {
			            	return -1;
						}
						fprintf(fp5,"file name:%s\n",full);
						fprintf(fp5,"5.Linear function formula solution\n");
						fprintf(fp5,"Point a=(%.2lf,%.2lf)\n",A_x1,A_y1);
						fprintf(fp5,"Point b=(%.2lf,%.2lf)\n",B_x2,B_y2);
						fprintf(fp5,"answer: y = %.2lfx - %.2lf\n",k,-b);
						fclose(fp5);
			        }
			    }
				break;
			} 
			case 6:{
				char cho;
				printf("6.Solving the area of various shapes\n");
				printf("a.Square area  b.Rectangular area  c.Circular area  d.Elliptical area  e.Triangular area  f.Angular area\n");
				printf("Function SelectionFunction Selection:");
				scanf(" %c",&cho);
				
				switch(cho)
				{
					case 'a':
					case 'A':{
						FILE* fp1;
						int a;
						int result1;
						printf("a.Square area\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("side length:");
						scanf("%d",&a);
						printf("\n");
						result1=areaOne(a);
						printf("Answer:%d\n",result1);
						fp1=fopen(full,"w");
						if(fp1==NULL)
						{
							return -1;
						}
						fprintf(fp1,"file name:%s\n",full);
						fprintf(fp1,"a.Square area\n");
						fprintf(fp1,"side length:%d\n",a);
						fprintf(fp1,"Answer:%d\n",result1);
						fclose(fp1);
						break;
					}
					case 'b':
					case 'B':{
						FILE* fp2;
						int a,b;
						int result2;
						printf("b.Rectangular area\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("Long side:");
						scanf("%d",&a);
						printf("Wide side:");
						scanf("%d",&b);
						printf("\n");
						result2=areaTwo(a,b);
						printf("Answer:%d\n",result2);
						fp2=fopen(full,"w");
						if(fp2==NULL)
						{
							return -1;
						}
						fprintf(fp2,"file name:%s\n",full);
						fprintf(fp2,"b.Rectangular area\n");
						fprintf(fp2,"Long side:%d\n",a);
						fprintf(fp2,"Wide side:%d\n",b);
						fprintf(fp2,"Answer:%d\n",result2);
						fclose(fp2);
						break;
					}
					case 'c':
					case 'C':{
						FILE* fp3;
						double r;
						double result3;
						
						printf("c.Circular area\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("rad:");
						scanf("%lf",&r);
						printf("\n");
						result3=areaThree(r);
						printf("Answer:%.2lf\n",result3);
						fp3=fopen(full,"w");
						if(fp3==NULL)
						{
							return -1;
						}
						fprintf(fp3,"file name:%s\n",full);
						fprintf(fp3,"c.Circular area");
						fprintf(fp3,"rad:%lf",r);
						fprintf(fp3,"Answer:%.2lf\n",result3);
						fclose(fp3);
						break;
					} 
					case 'd':
					case 'D':{
						FILE* fp4;
						double sr;
						double lr;
						double result4;
						
						printf("d.Elliptical area\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("short rad:");
						scanf("%lf",&sr);
						printf("\n");
						printf("long rad:");
						scanf("%lf",&lr);
						printf("\n");
						result4=areaFour(sr,lr);
						printf("Answer:%.2lf\n",result4);
						fp4=fopen(full,"w");
						if(fp4==NULL)
						{
							return -1;
						}
						fprintf(fp4,"file name:%s\n",full);
						fprintf(fp4,"d.Elliptical area\n");
						fprintf(fp4,"short rad:%lf\n",sr);
						fprintf(fp4,"long rad:%lf\n",lr);
						fprintf(fp4,"Answer:%.2lf\n",result4);
						fclose(fp4);
						break;
					} 
					case 'e':
					case 'E':{
						char cho1;
						printf("e.Triangular area\n");
						printf("a.Known low and high  b.Known three point  c.Helen's formula calculation\n");
						printf("Function SelectionFunction Selection:");
						scanf(" %c",&cho1);
						switch(cho1)
						{
							case 'a':
							case 'A':{
								FILE* fp5a;
								double a,h;
								double result1;
								printf("a.Known low and high\n");
								printf("Custom file name(txt):\n");
								scanf("%s",fill);
								char full[200];
								sprintf(full,"%s.txt",fill);
								printf("Bottom length:");
								scanf("%lf",&a);
								printf("\n");
								printf("high number:");
								scanf("%lf",&h);
								result1=areaFive_one(a,h);
								printf("Answer:%.2lf\n",result1);
								fp5a=fopen(full,"w");
								if(fp5a==NULL)
								{
									return -1;
								}
								fprintf(fp5a,"file name:%s\n",full);
								fprintf(fp5a,"e.Triangular area  a.Known low and high\n");
								fprintf(fp5a,"Bottom length:%lf\n",a);
								fprintf(fp5a,"High number:%lf\n",h);
								fprintf(fp5a,"Answer:%.2lf\n",result1);
								fclose(fp5a);
								break;
							}
							case 'b':
							case 'B':{
								FILE* fp5b;
								double x1,y1,x2,y2,x3,y3;
								double result2,result3;
								printf("b.Known three point\n");
								printf("Custom file name(txt):\n");
								scanf("%s",fill);
								char full[200];
								sprintf(full,"%s.txt",fill);
								printf("point 1:");
								scanf("%lf %lf",&x1,&y1);
								printf("\n");
								printf("point 2:");
								scanf("%lf %lf",&x2,&y2);
								printf("\n");
								printf("point 3:");
								scanf("%lf %lf",&x3,&y3);
								printf("\n");
								result2=areaSix_first(x1,y1,x2,y2,x3,y3);
								result3=areaSix_second(result2);
								printf("Answer:%.2lf\n",result3);
								fp5b=fopen(full,"w");
								if(fp5b==NULL)
								{
									return -1;
								}
								fprintf(fp5b,"file name:%s\n",full);
								fprintf(fp5b,"e.Triangular area  b.Known three point\n");
								fprintf(fp5b,"point 1:(%.2lf,%.2lf)\n",x1,y1);
								fprintf(fp5b,"point 2:(%.2lf,%.2lf)\n",x2,y2);
								fprintf(fp5b,"point 3:(%.2lf,%.2lf)\n",x3,y3);
								fprintf(fp5b,"Answer:%.2lf\n",result3);
								fclose(fp5b);
								break;
							}
							case 'c':
							case 'C':{
								FILE* fp5c;
								double a,b,c;
								double result4,result5,result6;
								printf("c.Helen's formula calculation\n");
								printf("Custom file name(txt):\n");
								scanf("%s",fill);
								char full[200];
								sprintf(full,"%s.txt",fill);
								printf("side a:");
								scanf("%lf",&a);
								printf("\n");
								printf("side b:");
								scanf("%lf",&b);
								printf("\n");
								printf("side c:");
								scanf("%lf",&c);
								printf("\n");
								result4=areaSeven_first(a,b,c);
								result5=areaSeven_second(result4,a,b,c);
								result6=areaSeven_thrid(result5);
								printf("Answer:%.2lf\n",result6);
								fp5c=fopen(full,"w");
								if(fp5c==NULL)
								{
									return -1;
								}
								fprintf(fp5c,"file name:%s\n",full);
								fprintf(fp5c,"e.Triangular area  c.Helen's formula calculation\n");
								fprintf(fp5c,"side a=%.2lf   side b=%.2lf   side c=%.2lf\n",a,b,c);
								fprintf(fp5c,"Answer:%.2lf\n",result6);
								fclose(fp5c);
								break;
							}
							default:{
								printf("Invalid choice\n");
								break;
							}
						}
						break;
					} 
					case 'f':
					case 'F':{
						char cho2;
						printf("f.Angular area\n");
						printf("a.Known diagonal length (most commonly used) b.Given the base and height (analogous to a parallelogram)\n");
						printf("Function SelectionFunction Selection:");
						scanf(" %c",&cho2);
						
						switch(cho2)
						{
							case 'a':
							case 'A':{
								FILE* fp6a;
								double a,b;
								double result7;
								printf("a.Known diagonal length (most commonly used)\n");
								printf("Custom file name(txt):\n");
								scanf("%s",fill);
								char full[200];
								sprintf(full,"%s.txt",fill);
								printf("side a:");
								scanf("%lf",&a);
								printf("\n");
								printf("side b:");
								scanf("%lf",&b);
								printf("\n");
								result7=areaEghlt_first(a,b);
								printf("Answer:%.2lf\n",result7);
								fp6a=fopen(full,"w");
								if(fp6a==NULL)
								{
									return -1;
								}
								fprintf(fp6a,"file name:%s\n",full);
								fprintf(fp6a,"f.Angular area  a.Known diagonal length (most commonly used)\n");
								fprintf(fp6a,"side a=%.2lf   side b=%.2lf\n",a,b);
								fprintf(fp6a,"Answer:%.2lf\n",result7);
								fclose(fp6a);
								break;
							}
							case 'b':
							case 'B':{
								FILE* fp6b;
								double a,h;
								double result8;
								printf("b.Given the base and height (analogous to a parallelogram)\n");
								printf("Custom file name(txt):\n");
								scanf("%s",fill);
								char full[200];
								sprintf(full,"%s.txt",fill);
								printf("Bottom length:");
								scanf("%lf",&a);
								printf("\n");
								printf("High number:");
								scanf("%lf",&h);
								printf("\n");
								result8=areaEghlt_second(a,h);
								printf("Answer:%.2lf\n",result8);
								fp6b=fopen(full,"w");
								if(fp6b==NULL)
								{
									return -1;
								}
								fprintf(fp6b,"file name:%s\n",full);
								fprintf(fp6b,"f.Angular area  b.Given the base and height (analogous to a parallelogram)\n");
								fprintf(fp6b,"Bottom length:%.2lf\n",a);
								fprintf(fp6b,"High number:%.2lf\n",h);
								fprintf(fp6b,"Answer:%.2lf\n",result8);
								fclose(fp6b);
								break;
							}
							default:{
								printf("Invalid choice\n");
								break;
							}
						}
						break;
					}
					default:{
						printf("Invalid choice\n");
						break;
					}
				}
				break;
			} 
			//case 7
			case 7:{
				char cho3;
				printf("7.Solving the perimeter of various shapes\n");
				printf("a.Square perimeter  b.Rectangular perimeter  c.Circular perimeter  d.Triangular perimeter\n");
				printf("Function SelectionFunction Selection:");
				scanf(" %c",&cho3);
				
				switch(cho3)
				{
					case 'a':
					case 'A':{
						FILE* fp7;
						double a;
						double result9;
						printf("a.Square perimeter\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("side length:");
						scanf("%lf",&a);
						printf("\n");
						result9=perimeterfrist(a);
						printf("Answer:%.2lf\n",result9);
						fp7=fopen(full,"w");
						if(fp7==NULL)
						{
							return -1;
						}
						fprintf(fp7,"file name:%s\n",full);
						fprintf(fp7,"a.Square perimeter\n");
						fprintf(fp7,"side length:%.2lf\n",a);
						fprintf(fp7,"Answer:%.2lf\n",result9);
						fclose(fp7);
						break;
					}
					case 'b':
					case 'B':{
						FILE* fp8;
						double a,b;
						double result10;
						printf("b.Rectangular perimeter\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("wide side length:");
						scanf("%lf",&a);
						printf("\n");
						printf("long side length:");
						scanf("%lf",&b);
						printf("\n");
						result10=perimeterSecond(a,b);
						printf("Answer:%.2lf\n",result10);
						fp8=fopen(full,"w");
						if(fp8==NULL)
						{
							return -1;
						}
						fprintf(fp8,"file name:%s\n",full);
						fprintf(fp8,"b.Rectangular perimeter\n");
						fprintf(fp8,"wide side length:%.2lf\n",a);
						fprintf(fp8,"long side length:%.2lf\n",b);
						fprintf(fp8,"Answer:%.2lf\n",result10);
						fclose(fp8); 
						break;
					}
					case 'c':
					case 'C':{
						FILE* fp9;
						double rad;
						double result11;
						printf("c.Circular perimeter\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("radius:");
						scanf("%lf",&rad);
						printf("\n");
						result11=perimeterThrid(rad);
						printf("Answer:%.2lf\n",result11);
						fp9=fopen(full,"w");
						if(fp9==NULL)
						{
							return -1;
						}
						fprintf(fp9,"file name:%s\n",full);
						fprintf(fp9,"c.Circular perimeter\n");
						fprintf(fp9,"radius:%.2lf\n",rad);
						fprintf(fp9,"Answer:%.2lf\n",result11);
						fclose(fp9);
						break;
					}
					case 'd':
					case 'D':{
						FILE* fp10;
						double a,b,c;
						double result12;
						printf("d.Triangular perimeter\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("side a:");
						scanf("%lf",&a);
						printf("\n");
						printf("side b:");
						scanf("%lf",&b);
						printf("\n");
						printf("side c:");
						scanf("%lf",&c);
						printf("\n");
						result12=perimeterFour(a,b,c);
						printf("Answer:%.2lf\n",result12);
						fp10=fopen(full,"w");
						if(fp10==NULL)
						{
							return -1;
						}
						fprintf(fp10,"file name:%s\n",full);
						fprintf(fp10,"d.Triangular perimeter\n");
						fprintf(fp10,"side a=%.2lf   side b=%.2lf   side c=%.2lf\n",a,b,c);
						fprintf(fp10,"Answer:%.2lf\n",result12);
						fclose(fp10);
						break;
					}
					default:{
						printf("Invalid choice\n");
						break;
					}
				}
				break;
			} 
			case 8:{
				FILE* fp11;
				double x1,y1,x2,y2;
				double result13;
				double result14;
				
				printf("8.Mid point search\n");
				printf("Custom file name(txt):\n");
				scanf("%s",fill);
				char full[200];
				sprintf(full,"%s.txt",fill);
				printf("point 1:");
				scanf("%lf %lf",&x1,&y1);
				printf("point 2:");
				scanf("%lf %lf",&x2,&y2);
				result13=midpoint_one(x1,x2);
				result14=midpoint_two(y1,y2);
				printf("Answer:(%.2lf,%.2lf)\n",result13,result14);
				fp11=fopen(full,"w");
				if(fp11==NULL)
				{
					return -1;
				}
				fprintf(fp11,"file name:%s\n",full);
				fprintf(fp11,"8.Mid point search\n");
				fprintf(fp11,"point 1:(%.2lf,%.2lf)   point 2:(%.2lf,%.2lf)\n",x1,y1,x2,y2);
				fprintf(fp11,"Answer:(%.2lf,%.2lf)\n",result13,result14);
				fclose(fp11);
				break;
			}
			case 9:{
				FILE* fp12;
				double height,Bodyweight;
				double resultBMI;
				printf("9.BMI calculator\n");
				printf("Custom file name(txt):\n");
				scanf("%s",fill);
				char full[200];
				sprintf(full,"%s.txt",fill);
				printf("Height:");
				scanf("%lf",&height);
				printf("\n");
				printf("Body weight:");
				scanf("%lf",&Bodyweight);
				printf("\n");
				resultBMI=Bmi(height,Bodyweight);
				if(resultBMI<18.5)
				{
					printf("Answer:%.2lf Slim\n",resultBMI);
				}
				else if(resultBMI>=18.5&&resultBMI<24)
				{
					printf("Answer:%.2lf Normal\n",resultBMI);
				}
				else if(resultBMI>=24&&resultBMI<28)
				{
					printf("Answer:%.2lf Slightly overweight\n",resultBMI);
				}
				else if(resultBMI>=28)
				{
					printf("Answer:%.2lf Obesity\n",resultBMI);
				}
				fp12=fopen(full,"w");
				if(fp12==NULL)
				{
					return -1;
				}
				fprintf(fp12,"9.BMI calculator\n");
				fprintf(fp12,"file name:%s\n",full);
				fprintf(fp12,"Height:%.2lf   Body height:%.2lf\n",height,Bodyweight);
				if(resultBMI<18.5)
				{
					fprintf(fp12,"Answer:%.2lf Slim\n",resultBMI);
				}
				else if(resultBMI>=18.5&&resultBMI<24)
				{
					fprintf(fp12,"Answer:%.2lf Normal\n",resultBMI);
				}
				else if(resultBMI>=24&&resultBMI<28)
				{
					fprintf(fp12,"Answer:%.2lf Slightly overweight\n",resultBMI);
				}
				else if(resultBMI>=28)
				{
					fprintf(fp12,"Answer:%.2lf Obesity\n",resultBMI);
				}
				fclose(fp12);
				break;
			} 
			case 10:{
				FILE* fp13;
				double Totalproductprice,dueamount;
				double smallchange;
				printf("10.Change Calculator\n");
				printf("Custom file name(txt):\n");
				scanf("%s",fill);
				char full[200];
				sprintf(full,"%s.txt",fill);
				printf("number 1(Total product price):");
				scanf("%lf",&Totalproductprice);
				printf("\n");
				printf("number 2(due amout):");
				scanf("%lf",&dueamount);
				printf("\n");
				smallchange=dueamount-Totalproductprice;
				printf("Answer(smallchange):%.2lf\n",smallchange);
				fp13=fopen(full,"w");
				if(fp13==NULL)
				{
					return -1;
				}
				fprintf(fp13,"file name:%s\n",full);
				fprintf(fp13,"10.Change Calculator\n");
				fprintf(fp13,"number 1(Total product price):%.2lf\n",Totalproductprice);
				fprintf(fp13,"number 2(due amout):%.2lf\n",dueamount);
				fprintf(fp13,"Answer(smallchange):%.2lf\n",smallchange);
				fclose(fp13);
				break;
			} 
			case 11:{
				char cho5;
				printf("11.The chord length problem of straight lines and circles\n");
				printf("a.The distance between a point and a straight line b.Distance between straight lines\n");
				printf("Function SelectionFunction Selection:");
				scanf(" %c",&cho5);
				
				switch(cho5)
				{
					case 'A':
					case 'a':{
						FILE* fp14;
						double a,b,c;
						double x,y;
						double result1,result2,result3;
						printf("a.The distance between a point and a straight line\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("Number a:");
						scanf("%lf",&a);
						printf("\n");
						printf("Number b:");
						scanf("%lf",&b);
						printf("\n");
						printf("Number c:");
						scanf("%lf",&c);
						printf("\n");
						printf("point (x,y):");
						scanf("%lf %lf",&x,&y);
						printf("\n");
						result1=Line(a,b);
						result2=Line_second(a,x,b,y,c);
						result3=Line_third(result1,result2);
						printf("Answer:%.2lf\n",result3);
						fp14=fopen(full,"w");
						if(fp14==NULL)
						{
							return -1;
						}
						fprintf(fp14,"file name:%s\n",full);
						fprintf(fp14,"a.The distance between a point and a straight line\n");
						fprintf(fp14,"number a:%.2lf   number b:%.2lf   number c:%.2lf\n",a,b,c);
						fprintf(fp14,"point(x,y)=(%.2lf,%.2lf)\n",x,y);
						fprintf(fp14,"Answer:%.2lf\n",result3);
						fclose(fp14);
						break;
					}
					case 'B':
					case 'b':{
						FILE* fp15;
						double e,f;
						double c1,c2;
						double result1;
						double result2;
						double result3;
						printf("b.Distance between straight lines\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("number a:");
						scanf("%lf",&e);
						printf("\n");
						printf("number b:");
						scanf("%lf",&f);
						printf("\n");
						printf("Number c1:");
						scanf("%lf",&c1);
						printf("\n");
						printf("Number c2:");
						scanf("%lf",&c2);
						printf("\n");
						result1=Line_four(c1,c2);
						result2=Line_five(e,f);
						result3=Line_six(result1,result2);
						printf("Answer:%.2lf\n",result3);
						fp15=fopen(full,"w");
						if(fp15==NULL)
						{
							return -1;
						}
						fprintf(fp15,"file name:%s\n",full);
						fprintf(fp15,"b.Distance between straight lines\n");
						fprintf(fp15,"number a:%.2lf   number b:%.2lf\n",e,f);
						fprintf(fp15,"number c1:%.2lf   number c2:%.2lf\n",c1,c2);
						fprintf(fp15,"Answer:%.2lf\n",result3);
						fclose(fp15);
						break;
					}
					default:{
						printf("Invalid choice\n");
						break;
					}
				}
				break;
			} 
			case 12:{
				char cho4;
				printf("12.Open the assistant with a small software\n");
				printf("a.calculator b.notebook c.Picture book d.On-screen keyboard e.System manager f.Control panel g.Task manager\n");
				printf("h.File esplorer i.Registry compiler j.Windows version information\n");
				printf("Function SelectionFunction Selection:");
				scanf(" %c",&cho4);
				
				switch(cho4)
				{
					case 'a':
					case 'A':{
						system("calc");
						break;
					}
					case 'b':
					case 'B':{
						system("notepad");
						break;
					}
					case 'c':
					case 'C':{
						system("mspaint");
						break;
					}
					case 'd':
					case 'D':{
						system("osk");
						break;
					}
					case 'e':
					case 'E':{
						system("msconfig");
						break;
					}
					case 'f':
					case 'F':{
						system("control");
						break;
					} 
					case 'g':
					case 'G':{
						system("taskmgr");
						break;
					}
					case 'h':
					case 'H':{
						system("explorer");
						break;
					}
					case 'i':
					case 'I':{
						system("regedit");
						break;
					}
					case 'j':
					case 'J':{
						system("winver");
						break;
					}
					default:{
						printf("Invalid choice\n");
						break;
					}
				}
				break;
			}
			case 13:{
				char cho5;
				printf("13.Calculation issues needed for the preliminary preparation of cosplay\n");
				printf("a.Cost estimation b.Fabric budget c.Props and consumables (like EVA and other materials) d.Height Scaling e.Turn pictures into real objects\n");
				printf("Function SelectionFunction Selection:");
				scanf(" %c",&cho5);
				switch(cho5)
				{
					case 'A':
					case 'a':{
						FILE* fp16;
						float a,b,c,d;
						float result1;
						printf("a.Cost estimation\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("Clothing price:");
						scanf("%f",&a);
						printf("Wig price:");
						scanf("%f",&b);
						printf("Item price:");
						scanf("%f",&c);
						printf("Cosmetic prices:");
						scanf("%f",&d);
						printf("\n");
						result1=Cost_estimation(a,b,c,d);
						printf("Answer:%.2f\n",result1);
						fp16=fopen(full,"w");
						if(fp16==NULL)
						{
							return -1;
						}
						fprintf(fp16,"file name:%s\n",full);
						fprintf(fp16,"a.Cost estimation\n");
						fprintf(fp16,"Clothint price:%.2f\n",a);
						fprintf(fp16,"Wig price:%.2f\n",b);
						fprintf(fp16,"Item price:%.2f\n",c);
						fprintf(fp16,"Cosmetic price:%.2f\n",d);
						fprintf(fp16,"Answer:%.2f\n",result1);
						fclose(fp16);
						break;
					}
					case 'B':
					case 'b':{
						FILE* fp17;
						double cm1,cm2;
						double result2;
						printf("b.Fabric budget\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("Clothing length (cm):");
						scanf("%lf",&cm1);
						printf("Sleeve length (cm):");
						scanf("%lf",&cm2);
						printf("\n");
						result2=Fabric_budget(cm1,cm2);
						printf("Answer:%.2lf\n",result2);
						fp17=fopen(full,"w");
						if(fp17==NULL)
						{
							return -1;
						}
						fprintf(fp17,"file name:%s\n",full);
						fprintf(fp17,"b.Fabric budget\n");
						fprintf(fp17,"Clothing length(cm):%.2lf\n",cm1);
						fprintf(fp17,"Sleeve length(cm):%.2lf\n",cm2);
						fprintf(fp17,"Answer:%.2lf\n",result2);
						fclose(fp17);
						break;
					}
					case 'C':
					case 'c':{
						FILE* fp18;
						double area1,area2;
						double result3;
						printf("c.Props and consumables (like EVA and other materials)\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("Unfolded area:");
						scanf("%lf",&area1);
						printf("Single board area:");
						scanf("%lf",&area2);
						printf("\n");
						result3=Props_and_consumables(area1,area2);
						printf("Answer:%.2lf\n",result3);
						fp18=fopen(full,"w");
						if(fp18==NULL)
						{
							return -1;
						}
						fprintf(fp18,"file name:%s\n",full);
						fprintf(fp18,"c.Props and consumables (like EVA and other materials)\n");
						fprintf(fp18,"Unfolded area:%.2lf\n",area1);
						fprintf(fp18,"Single board area:%.2lf\n",area2);
						fprintf(fp18,"Answer:%.2lf\n",result3);
						fclose(fp18);
						break;
					}
					case 'D':
					case 'd':{
						FILE* fp19;
						double a,b,c;
						double result4;
						printf("d.Height Scaling\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("Character design dimensions:");
						scanf("%lf",&a);
						printf("Your height:");
						scanf("%lf",&b);
						printf("Character set height:");
						scanf("%lf",&c);
						printf("\n");
						result4=Height_Scaling(a,b,c);
						printf("Answer:%.2lf\n",result4);
						fp19=fopen(full,"w");
						if(fp19==NULL)
						{
							return -1;
						}
						fprintf(fp19,"file name:%s\n",full);
						fprintf(fp19,"d.Height Scaling\n");
						fprintf(fp19,"Character design dimensions:%.2lf\n",a);
						fprintf(fp19,"Your height:%.2lf\n",b);
						fprintf(fp19,"Character set height:%.2lf\n",c);
						fprintf(fp19,"Answer:%.2lf\n",result4);
						fclose(fp19);
						break;
					}
					case 'E':
					case 'e':{
						FILE* fp20;
						double a,b,c;
						double result5;
						printf("e.Turn pictures into real objects\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("Image pixel length:");
						scanf("%lf",&a);
						printf("Reference for image pixels:");
						scanf("%lf",&b);
						printf("Length of the physical reference:");
						scanf("%lf",&c);
						printf("\n");
						result5=Turn_pictures_into_real_objects(a,b,c);
						fp20=fopen(full,"w");
						if(fp20==NULL)
						{
							return -1;
						}
						fprintf(fp20,"file name:%s\n",full);
						fprintf(fp20,"e.Turn pictures into real objects\n");
						fprintf(fp20,"Image pixel length:%.2lf\n",a);
						fprintf(fp20,"Reference for image pixels:%.2lf\n",b);
						fprintf(fp20,"Length of the physical reference:%.2lf\n",c);
						fprintf(fp20,"Answer:%.2lf\n",result5);
						fclose(fp20);
						break;
					}
					default:{
						printf("Invalid choice\n"); 
						break;
					}	
				} 
				break;
			} 
			case 14:{
				time_t now;
		    	struct tm *local;
		
		    	printf("<Current Time> Press 'y' to return to menu\n");
		    	while(1) {
		        	time(&now);
		        	local = localtime(&now);
		
		        	printf("\rCurrent Time: %02d:%02d:%02d",
		            		local->tm_hour,
		               		local->tm_min,
		               		local->tm_sec);
		
		        	Sleep(1000);
			        if(kbhit()) {
			            char ch = getch();   
			            if(ch == 'y' || ch == 'Y') {
			                break;           
			            }
			        }
		    	}
		    	printf("\n");
				break;
			}
			case 15:{
				FILE* fp;
				int i;
				int num;
				char term1[200];
				char term2[200];
				char term3[200];
				printf("15.Student Score Registration Program (Only for 3 Scores)\n");
				printf("Custom file name(csv):\n");
				scanf("%s",fill);
				char full[200];
				sprintf(full,"%s.csv",fill);
				printf("Count the number of people:");
				scanf("%d",&num);
				printf("Statistical Subject Name:\n");
				printf("Subject 1:");
				scanf("%s",term1);
				printf("Subject 2:");
				scanf("%s",term2);
				printf("Subject 3:");
				scanf("%s",term3);
				printf("\n");
				printf("Statistical element:\n");
				printf("Student name  Student id  mark 1  mark 2  mark3\n");
				STU an[num];
				/*
				typedef struct studentdata
				{
					char studentname[200];
					long studentid;
					int mark1;
					int mark2;
					int mark3;
					int result1;
					double result2;
				}STU;
				*/
				for(i=0;i<num;i++)
				{
					scanf("%s%ld%d%d%d",an[i].studentname,&an[i].studentid,&an[i].mark1,&an[i].mark2,&an[i].mark3);
					an[i].result1=an[i].mark1+an[i].mark2+an[i].mark3;
					an[i].result2=(an[i].mark1+an[i].mark2+an[i].mark3)/3.0;
				}
				printf("Sort Table:\n");
				printf("Sort number\t");
				printf("Student nume\t");
				printf("Student id\t");
				printf("Subject %s mark\t",term1);
				printf("Subject %s mark\t",term2);
				printf("Subject %s mark\t",term3);
				printf("Total score\t");
				printf("Average score of three subjects\n");
				printf("\n");
				MarkBobbleSort(an,num);
				for(i=0;i<num;i++)
				{
					printf("%d\t",i+1);
					printf("%s\t",an[i].studentname);
					printf("%ld\t",an[i].studentid);
					printf("%d\t",an[i].mark1);
					printf("%d\t",an[i].mark2);
					printf("%d\t",an[i].mark3);
					printf("%d\t",an[i].result1);
					printf("%lf\n",an[i].result2);
					printf("\n");
				}
				fp=fopen(full,"w");
				if(fp==NULL)
				{
					return -1;
				} 
				fprintf(fp,"Sort number,Student nume,Student id,Subject %s mark,Subject %s mark,Subject %s mark,Total score,Average score of three subjects\n",term1,term2,term3);
				MarkBobbleSort(an,num);
				for(i=0;i<num;i++)
				{
					fprintf(fp,"%d,%s,%ld,%d,%d,%d,%d,%.2lf\n",i+1,an[i].studentname,an[i].studentid,an[i].mark1,an[i].mark2,an[i].mark3,an[i].result1,an[i].result2);
				}
				fclose(fp);
				break;
			}//¡ã
			case 16:{
				char cho6;
				printf("16.Solving trigonometric functions\n");
				printf("a.Find sin  b.Find cos  c.Find tan\n");
				printf("Function SelectionFunction Selection:");
				scanf(" %c",&cho6);
				
				switch(cho6)
				{
					case 'a':
					case 'A':{
						FILE* fp21;
						double angle;
						double result6;
						printf("a.Find sin\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("Angle value:");
						scanf("%lf",&angle);
						printf("\n");
						result6=Radian(angle);
						printf("Answer:sin(%.2lf¡ã)=%.2lf\n",angle,sin(result6));
						fp21=fopen(full,"w");
						if(fp21==NULL)
						{
							return -1; 
						}
						fprintf(fp21,"file name:%s\n",full);
						fprintf(fp21,"a.Find sin\n");
						fprintf(fp21,"Angle value:%.2lf¡ã\n",angle);
						fprintf(fp21,"Answer:sin(%.2lf¡ã)=%.2lf\n",angle,sin(result6));
						fclose(fp21);
						break;
					}
					case 'b':
					case 'B':{
						FILE* fp22;
						double angle1;
						double result7;
						printf("b.Find cos\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("Angle value:");
						scanf("%lf",&angle1);
						printf("\n");
						result7=Radian(angle1);
						printf("Answer:sin(%.2lf¡ã)=%.2lf\n",angle1,cos(result7));
						fp22=fopen(full,"w");
						if(fp22==NULL)
						{
							return -1; 
						}
						fprintf(fp22,"file name:%s\n",full);
						fprintf(fp22,"b.Find cos\n");
						fprintf(fp22,"Angle value:%.2lf¡ã\n",angle1);
						fprintf(fp22,"Answer:cos(%.2lf¡ã)=%.2lf\n",angle1,cos(result7));
						fclose(fp22);
						break;
					} 
					case 'c':
					case 'C':{
						FILE* fp23;
						double angle2;
						double result8;
						printf("c.Find tan\n");
						printf("Custom file name(txt):\n");
						scanf("%s",fill);
						char full[200];
						sprintf(full,"%s.txt",fill);
						printf("Angle value:");
						scanf("%lf",&angle2);
						printf("\n");
						result8=Radian(angle2);
						printf("Answer:tan(%.2lf¡ã)=%.2lf\n",angle2,tan(result8));
						fp23=fopen(full,"w");
						if(fp23==NULL)
						{
							return -1;
						}
						fprintf(fp23,"file name:%s\n",full);
						fprintf(fp23,"c.Find tan\n");
						fprintf(fp23,"Angle value:%.2lf¡ã\n",angle2);
						fprintf(fp23,"Answer:tan(%.2lf¡ã)=%.2lf\n",angle2,tan(result8));
						fclose(fp23); 
						break;
					}
					default:{
						printf("Invalid choice\n");
						break;
					}
				}
				break;
			} 
			default:{
				printf("Invalid choice\n");
				break;
			}
			
		}
		printf("----------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("Do you want to recalculate(y n):");
		scanf(" %c",&choice);
	}while(choice=='Y'||choice=='y');
	printf("Good night(>-<)\n");
	return 0;
} 
