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
#include <Windows.h> 

int sum(int* p,int* q)
{
	return *p + *q;
}
int sub(int* p,int* q)
{
	return *p - *q;
}
int mul(int* p,int* q)
{
	return *p * *q;
}
double divs(double* p,double* q)
{
	return *p / *q;
}
typedef struct StudentThreeSubject
{
	long long int id;
	char name[500];
	char sex[500];
	int mark1;
	int mark2;
	int mark3;
	int result1;//总分 
	double result2;//平均分 
}STS;
void BobbleSortresult1(STS* an,int num)
{
	int i,j;
	STS traps;
	
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-1-i;j++)
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
typedef struct StudentEightSubject
{
	long long int id;
	char name[500];
	char sex[500];
	int mark1;
	int mark2;
	int mark3;
	int mark4;
	int mark5;
	int mark6;
	int mark7;
	int mark8;
	int result1;//总分 
	double result2;//平均分 
}SES;
void BobbleSortresult2(SES* arr,int num)
{
	int i,j;
	SES traps;
	
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-i-1;j++)
		{
			if(arr[j].result1<arr[j+1].result1)
			{
				traps=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=traps;
			}
		}
	}
}

int main(void)
{
	char choice;
	do
	{
		
		char cho;
		char file[200];
		
		system("cls");
		
		printf("★ Hello World 3.0 Mini [ICS02 F-P-93-0 HW3_SYSTEM HW3MINI] ★\n");
		printf("Make in 2026.9.29\n");
		printf("Coder: HWmakerAlice\n");
		printf("----------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("A.Basic Calculation\n");
		printf("B.Student Performance asatatistics Table\n");
		printf("C.File search(compatible with HW3 ICS2,other txt file are also usable)\n");
		printf("\n");
		printf("Select:");
		scanf(" %c",&cho);
		printf("----------------------------------------------------------------------------------------------------------------------------------------------\n");
		
		switch(cho)
		{
			case 'A':
			case 'a':{
				
				char cant1;
				//功能1：基础运算 
				printf("A.Basic Operations\n");
				printf("Menu:A.addition B.subtraction C.multiplication D.division\n");
				printf("Select:");
				scanf(" %c",&cant1);
				printf("\n");
				
				switch(cant1)
				{
					case 'A':
					case 'a':{
						//加法 
						FILE* fp1;
						int a;
						int b;
						int* p;
						int* q;
						char fule[200];
						int resultsum;
						
						printf("A.Basic Operations : addition\n");
						printf("New file:");
						scanf("%s",file);
						printf("\n");
						sprintf(fule,"%s.txt",file);//新建txt文件
						printf("Number 1:");
						scanf("%d",&a);
						p=&a;
						printf("\n");
						printf("Number 2:");
						scanf("%d",&b);
						q=&b;
						printf("\n");
						
						resultsum=sum(&a,&b);//加法运算式（地址传递）
						printf("Answer : %d \n",resultsum);
						
						fp1=fopen(fule,"w");//打开新建文件 
						if(fp1==NULL)
						{
							return -1;	
						} 
						
						fprintf(fp1,"A.Basic Operations : addition\n");
						fprintf(fp1,"Number 1:%d\tNumber 2:%d\n",*p,*q);
						fprintf(fp1,"Answer : %d\n",resultsum);
						fprintf(fp1,"(File name : %s)\n",fule);
						fclose(fp1);
						break;
					}
					case 'B':
					case 'b':{
						FILE* fp2;
						int a;
						int b;
						int* p;
						int* q;
						char fule[200];
						int resultsub;
						
						printf("A.Basic Operations : subtraction\n");
						printf("New file:");
						scanf("%s",file);
						printf("\n");
						sprintf(fule,"%s.txt",file);
						printf("Number 1:");
						scanf("%d",&a);
						p=&a;
						printf("\n");
						printf("Number 2:");
						scanf("%d",&b);
						q=&b;
						printf("\n");
						
						resultsub=sub(&a,&b);
						printf("Answer : %d \n",resultsub);
						
						fp2=fopen(fule,"w");
						if(fp2==NULL)
						{
							return -1;
						}
						
						fprintf(fp2,"A.Basic Operations : subtraction\n");
						fprintf(fp2,"Number 1:%d\tNumber 2:%d\n",*p,*q);
						fprintf(fp2,"Answer : %d\n",resultsub);
						fprintf(fp2,"(File name : %s)\n",fule);
						fclose(fp2);
						break;
					} 
					case 'C':
					case 'c':{
						FILE* fp3;
						int a;
						int b;
						int* p;
						int* q;
						char fule[200];
						int resultmul;
						
						printf("A.Basic Operations : multiplication\n");
						printf("New file:");
						scanf("%s",file);
						printf("\n");
						sprintf(fule,"%s.txt",file);
						printf("Number 1:");
						scanf("%d",&a);
						p=&a;
						printf("\n");
						printf("Number 2:");
						scanf("%d",&b);
						q=&b;
						printf("\n");
						
						resultmul=mul(&a,&b);
						printf("Answer : %d \n",resultmul);
						
						fp3=fopen(fule,"w");
						if(fp3==NULL)
						{
							return -1;
						}
						
						fprintf(fp3,"A.Basic Operations : multiplication\n");
						fprintf(fp3,"Number 1:%d\tNumber 2:%d\n",*p,*q);
						fprintf(fp3,"Answer : %d\n",resultmul);
						fprintf(fp3,"(File name : %s)\n",fule);
						fclose(fp3);
						break;
					}
					case 'D':
					case 'd':{
						FILE* fp4;
						double a;
						double b;
						double* p;
						double* q;
						char fule[200];
						double resultdiv;
						
						printf("A.Basic Operations : division\n");
						printf("New file:");
						scanf("%s",file);
						printf("\n");
						sprintf(fule,"%s.txt",file);
						printf("Number 1:");
						scanf("%lf",&a);
						p=&a;
						printf("\n");
						printf("Number 2:");
						scanf("%lf",&b);
						q=&b;
						if(*q==0)
						{
							printf("The divisor is zero,so division cannot be performed.\n");
							
							fp4=fopen(fule,"w");
							if(fp4==NULL)
							{
								return -1;	
							} 
							
							fprintf(fp4,"A.Basic Operations : division\n");
							fprintf(fp4,"The divisor is zero,so division cannot be performed.\n");
							fprintf(fp4,"(File name : %s)\n",fule);
							fclose(fp4);
							break;
						}
						resultdiv=divs(&a,&b);
						printf("Answer : %.4lf\n",resultdiv);
						
						fp4=fopen(fule,"w");
						if(fp4==NULL)
						{
							return -1;
						}
						
						fprintf(fp4,"A.Basic Operations : division\n");
						fprintf(fp4,"Number 1:%lf\tNumber 2:%lf\n",*p,*q);
						fprintf(fp4,"Answer : %.4lf\n",resultdiv);
						fprintf(fp4,"(File name : %s)\n",fule);
						fclose(fp4);
						break;
					} 
					default:{
						printf("Invalid selection.\n"); 
						break;
					}
				}
				break;
			}
			case 'B':
			case 'b':{
				char cant2;
				
				printf("B.Student Performance asatatistics Table\n");
				printf("Menu:A.Limited to three subject (txt and csv) B.Limited to eight subject (txt and csv) \n");
				printf("Select:");
				scanf(" %c",&cant2);
				printf("\n");
				
				switch(cant2)
				{
					case 'A':
					case 'a':{
						FILE* fp5;
						int i;
						int num;
						char subject1[500];
						char subject2[500];
						char subject3[500];
						char fule[200];
						char cant2A;
						
						printf("A.Limited to three subject (txt and csv)\n");
						printf("File type:");
						printf("a.txt\tb.csv\n");
						scanf(" %c",&cant2A);
						printf("\n");
						printf("Count the number of people:");
						scanf("%d",&num);
						printf("\n");
						
						STS an[num];
						
						if(cant2A=='A'||cant2A=='a')
						{
							printf("New file:");
							scanf("%s",file);
							sprintf(fule,"%s.txt",file);
							printf("\n");
							
							printf("subject 1:");
							scanf("%s",subject1);
							printf("\n");
							printf("subject 2:");
							scanf("%s",subject2);
							printf("\n");
							printf("subject 3:");
							scanf("%s",subject3);
							printf("\n");
							
							printf("Statistical elements:\n");
							printf("id  name  sex  subject:%s  subject:%s  subject:%s\n",subject1,subject2,subject3);
							for(i=0;i<num;i++)
							{
								scanf("%lld%s%s%d%d%d",&an[i].id,an[i].name,an[i].sex,&an[i].mark1,&an[i].mark2,&an[i].mark3);
								an[i].result1=an[i].mark1+an[i].mark2+an[i].mark3;
								an[i].result2=(an[i].mark1+an[i].mark2+an[i].mark3)/3.0; 
							} 
							printf("\n");
							printf("Table:\n");
							printf("order num\t  id\t  name\t  sex\t  %s\t  %s\t  %s\t  total\t  average\n",subject1,subject2,subject3);
							printf("\n");
							BobbleSortresult1(an,num);
							for(i=0;i<num;i++)
							{
								printf("%d\t  ",i+1);
								printf("%lld\t  ",an[i].id);
								printf("%s\t  ",an[i].name);
								printf("%s\t  ",an[i].sex);
								printf("%d\t  ",an[i].mark1);
								printf("%d\t  ",an[i].mark2);
								printf("%d\t  ",an[i].mark3);
								printf("%d\t  ",an[i].result1);
								printf("%.4lf\n",an[i].result2);
								printf("\n");
							}
							fp5=fopen(fule,"w");
							if(fp5==NULL)
							{
								return -1;
							}
							
							fprintf(fp5,"order num\t  id\t  name\t  sex\t  %s\t  %s\t  %s\t  total\t  average\n",subject1,subject2,subject3);
							fprintf(fp5,"\n");
							BobbleSortresult1(an,num);
							for(i=0;i<num;i++)
							{
								fprintf(fp5,"%d\t  ",i+1);
								fprintf(fp5,"%lld\t  ",an[i].id);
								fprintf(fp5,"%s\t  ",an[i].name);
								fprintf(fp5,"%s\t  ",an[i].sex);
								fprintf(fp5,"%d\t  ",an[i].mark1);
								fprintf(fp5,"%d\t  ",an[i].mark2);
								fprintf(fp5,"%d\t  ",an[i].mark3);
								fprintf(fp5,"%d\t  ",an[i].result1);
								fprintf(fp5,"%.4lf\n",an[i].result2);
								fprintf(fp5,"\n");
							}
							fprintf(fp5,"(File name : %s)\n",fule);
							
							fclose(fp5);
						}
						
						else if(cant2A=='B'||cant2A=='b')
						{
							printf("New file:");
							scanf("%s",file);
							sprintf(fule,"%s.csv",file);
							printf("\n");
							
							printf("subject 1:");
							scanf("%s",subject1);
							printf("\n");
							printf("subject 2:");
							scanf("%s",subject2);
							printf("\n");
							printf("subject 3:");
							scanf("%s",subject3);
							printf("\n");
							
							printf("Statistical elements:\n");
							printf("id  name  sex  subject:%s  subject:%s  subject:%s\n",subject1,subject2,subject3);
							for(i=0;i<num;i++)
							{
								scanf("%lld%s%s%d%d%d",&an[i].id,an[i].name,an[i].sex,&an[i].mark1,&an[i].mark2,&an[i].mark3);
								an[i].result1=an[i].mark1+an[i].mark2+an[i].mark3;
								an[i].result2=(an[i].mark1+an[i].mark2+an[i].mark3)/3.0; 
							} 
							printf("\n");
							printf("Table:\n");
							printf("order num\t  id\t  name\t  sex\t  %s\t  %s\t  %s\t  total\t  average\n",subject1,subject2,subject3);
							printf("\n");
							BobbleSortresult1(an,num);
							for(i=0;i<num;i++)
							{
								printf("%d\t  ",i+1);
								printf("%lld\t  ",an[i].id);
								printf("%s\t  ",an[i].name);
								printf("%s\t  ",an[i].sex);
								printf("%d\t  ",an[i].mark1);
								printf("%d\t  ",an[i].mark2);
								printf("%d\t  ",an[i].mark3);
								printf("%d\t  ",an[i].result1);
								printf("%.4lf\n",an[i].result2);
								printf("\n");
							}
							fp5=fopen(fule,"w");
							if(fp5==NULL)
							{
								return -1;
							}
							
							fprintf(fp5,"order num,id,name,sex,%s,%s,%s,total,average\n",subject1,subject2,subject3);
							fprintf(fp5,"\n");
							BobbleSortresult1(an,num);
							for(i=0;i<num;i++)
							{
								/*
								fprintf(fp5,"%d\t  ",i+1);
								fprintf(fp5,"%lld\t  ",an[i].id);
								fprintf(fp5,"%s\t  ",an[i].name);
								fprintf(fp5,"%s\t  ",an[i].sex);
								fprintf(fp5,"%d\t  ",an[i].mark1);
								fprintf(fp5,"%d\t  ",an[i].mark2);
								fprintf(fp5,"%d\t  ",an[i].mark3);
								fprintf(fp5,"%d\t  ",an[i].result1);
								fprintf(fp5,"%.4lf\n",an[i].result2);
								fprintf(fp5,"\n");
								*/
								fprintf(fp5,"%d,%lld,%s,%s,%d,%d,%d,%d,%.4lf\n",i+1,an[i].id,an[i].name,an[i].sex,an[i].mark1,an[i].mark2,an[i].mark3,an[i].result1,an[i].result2);
							}
							fclose(fp5);
						}
						break;
					}
					case 'B':
					case 'b':{
						FILE* fp6;
						int i;
						int num;
						char subject1[500];
						char subject2[500];
						char subject3[500];
						char subject4[500];
						char subject5[500];
						char subject6[500];
						char subject7[500];
						char subject8[500];
						char fule[200];
						char cant2B;
						
						printf("A.Limited to eight subject (txt and csv)\n");
						printf("File type:");
						printf("a.txt\tb.csv\n");
						scanf(" %c",&cant2B);
						printf("\n");
						printf("Count the number of people:");
						scanf("%d",&num);
						printf("\n");
						
						if(cant2B=='A'||cant2B=='a')
						{
							printf("New file:");
							scanf("%s",file);
							sprintf(fule,"%s.txt",file);
							printf("\n");
							
							printf("subject 1:");
							scanf("%s",subject1);
							printf("\n");
							printf("subject 2:");
							scanf("%s",subject2);
							printf("\n");
							printf("subject 3:");
							scanf("%s",subject3);
							printf("\n");
							printf("subject 4:");
							scanf("%s",subject4);
							printf("\n");
							printf("subject 5:");
							scanf("%s",subject5);
							printf("\n");
							printf("subject 6:");
							scanf("%s",subject6);
							printf("\n");
							printf("subject 7:");
							scanf("%s",subject7);
							printf("\n");
							printf("subject 8:");
							scanf("%s",subject8);
							printf("\n");
							
							/*
							typedef struct StudentEightSubject
							{
								long long int id;
								char name[500];
								char sex[500];
								int mark1;
								int mark2;
								int mark3;
								int mark4;
								int mark5;
								int mark6;
								int mark7;
								int mark8;
								int result1;//总分 
								double result2;//平均分 
							}SES;

							*/
							SES arr[num];
							
							printf("Statistical elements:\n");
							printf("id  name  sex  subject:%s  subject:%s  subject:%s  subject:%s  subject:%s  subject:%s  subject:%s  subject:%s\n",subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8);
							for(i=0;i<num;i++)
							{
								scanf("%lld%s%s%d%d%d%d%d%d%d%d",&arr[i].id,arr[i].name,&arr[i].sex,&arr[i].mark1,&arr[i].mark2,&arr[i].mark3,&arr[i].mark4,&arr[i].mark5,&arr[i].mark6,&arr[i].mark7,&arr[i].mark8);
								arr[i].result1=arr[i].mark1+arr[i].mark2+arr[i].mark3+arr[i].mark4+arr[i].mark5+arr[i].mark6+arr[i].mark7+arr[i].mark8;
								arr[i].result2=(arr[i].mark1+arr[i].mark2+arr[i].mark3+arr[i].mark4+arr[i].mark5+arr[i].mark6+arr[i].mark7+arr[i].mark8)/8.0;
							} 
							printf("Table:\n");
							printf("order num\t  id\t  name\t  sex\t  %s\t  %s\t  %s\t  %s\t  %s\t  %s\t  %s\t  %s\ttotal\t  average\n",subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8);
							printf("\n");
							BobbleSortresult2(arr,num);
							for(i=0;i<num;i++)
							{
								printf("%d\t  ",i+1);
								printf("%lld\t  ",arr[i].id);
								printf("%s\t  ",arr[i].name);
								printf("%s\t  ",arr[i].sex);
								printf("%d\t  ",arr[i].mark1);
								printf("%d\t  ",arr[i].mark2);
								printf("%d\t  ",arr[i].mark3);
								printf("%d\t  ",arr[i].mark4);
								printf("%d\t  ",arr[i].mark5);
								printf("%d\t  ",arr[i].mark6);
								printf("%d\t  ",arr[i].mark7);
								printf("%d\t  ",arr[i].mark8);
								printf("%d\t  ",arr[i].result1);
								printf("%.4lf\n",arr[i].result2);
							}
							fp6=fopen(fule,"w");
							if(fp6==NULL)
							{
								return -1;
							}
							printf("\n");
							fprintf(fp6,"order num\t  id\t  name\t  sex\t  %s\t  %s\t  %s\t  %s\t  %s\t  %s\t  %s\t  %s\t total\t  average\n",subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8);
							fprintf(fp6,"\n");
							BobbleSortresult2(arr,num);
							for(i=0;i<num;i++)
							{
								fprintf(fp6,"%d\t  ",i+1);
								fprintf(fp6,"%lld\t  ",arr[i].id);
								fprintf(fp6,"%s\t  ",arr[i].name);
								fprintf(fp6,"%s\t  ",arr[i].sex);
								fprintf(fp6,"%d\t  ",arr[i].mark1);
								fprintf(fp6,"%d\t  ",arr[i].mark2);
								fprintf(fp6,"%d\t  ",arr[i].mark3);
								fprintf(fp6,"%d\t  ",arr[i].mark4);
								fprintf(fp6,"%d\t  ",arr[i].mark5);
								fprintf(fp6,"%d\t  ",arr[i].mark6);
								fprintf(fp6,"%d\t  ",arr[i].mark7);
								fprintf(fp6,"%d\t  ",arr[i].mark8);
								fprintf(fp6,"%d\t  ",arr[i].result1);
								fprintf(fp6,"%.4lf\n",arr[i].result2);
							}
							fprintf(fp6,"(File name : %s)\n",fule);
							
							fclose(fp6);
						}
						else if(cant2B=='B'||cant2B=='b')
						{
							printf("New file:");
							scanf("%s",file);
							sprintf(fule,"%s.csv",file);
							printf("\n");
							
							printf("subject 1:");
							scanf("%s",subject1);
							printf("\n");
							printf("subject 2:");
							scanf("%s",subject2);
							printf("\n");
							printf("subject 3:");
							scanf("%s",subject3);
							printf("\n");
							printf("subject 4:");
							scanf("%s",subject4);
							printf("\n");
							printf("subject 5:");
							scanf("%s",subject5);
							printf("\n");
							printf("subject 6:");
							scanf("%s",subject6);
							printf("\n");
							printf("subject 7:");
							scanf("%s",subject7);
							printf("\n");
							printf("subject 8:");
							scanf("%s",subject8);
							printf("\n");
							
							/*
							typedef struct StudentEightSubject
							{
								long long int id;
								char name[500];
								char sex[500];
								int mark1;
								int mark2;
								int mark3;
								int mark4;
								int mark5;
								int mark6;
								int mark7;
								int mark8;
								int result1;//总分 
								double result2;//平均分 
							}SES;

							*/
							SES arr[num];
							
							printf("Statistical elements:\n");
							printf("id  name  sex  subject:%s  subject:%s  subject:%s  subject:%s  subject:%s  subject:%s  subject:%s  subject:%s\n",subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8);
							for(i=0;i<num;i++)
							{
								scanf("%lld%s%s%d%d%d%d%d%d%d%d",&arr[i].id,arr[i].name,&arr[i].sex,&arr[i].mark1,&arr[i].mark2,&arr[i].mark3,&arr[i].mark4,&arr[i].mark5,&arr[i].mark6,&arr[i].mark7,&arr[i].mark8);
								arr[i].result1=arr[i].mark1+arr[i].mark2+arr[i].mark3+arr[i].mark4+arr[i].mark5+arr[i].mark6+arr[i].mark7+arr[i].mark8;
								arr[i].result2=(arr[i].mark1+arr[i].mark2+arr[i].mark3+arr[i].mark4+arr[i].mark5+arr[i].mark6+arr[i].mark7+arr[i].mark8)/8.0;
							} 
							printf("Table:\n");
							printf("order num\t  id\t  name\t  sex\t  %s\t  %s\t  %s\t  %s\t  %s\t  %s\t  %s\t  %s\ttotal\t  average\n",subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8);
							printf("\n");
							BobbleSortresult2(arr,num);
							for(i=0;i<num;i++)
							{
								printf("%d\t  ",i+1);
								printf("%lld\t  ",arr[i].id);
								printf("%s\t  ",arr[i].name);
								printf("%s\t  ",arr[i].sex);
								printf("%d\t  ",arr[i].mark1);
								printf("%d\t  ",arr[i].mark2);
								printf("%d\t  ",arr[i].mark3);
								printf("%d\t  ",arr[i].mark4);
								printf("%d\t  ",arr[i].mark5);
								printf("%d\t  ",arr[i].mark6);
								printf("%d\t  ",arr[i].mark7);
								printf("%d\t  ",arr[i].mark8);
								printf("%d\t  ",arr[i].result1);
								printf("%.4lf\n",arr[i].result2);
							}
							fp6=fopen(fule,"w");
							if(fp6==NULL)
							{
								return -1;
							}
							
							fprintf(fp6,"order num,id,name,sex,%s,%s,%s,%s,%s,%s,%s,%s,total,average\n",subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8);
							fprintf(fp6,"\n");
							BobbleSortresult2(arr,num);
							for(i=0;i<num;i++)
							{
								/*
								fprintf(fp6,"%d\t  ",i+1);
								fprintf(fp6,"%lld\t  ",arr[i].id);
								fprintf(fp6,"%s\t  ",arr[i].name);
								fprintf(fp6,"%s\t  ",arr[i].sex);
								fprintf(fp6,"%d\t  ",arr[i].mark1);
								fprintf(fp6,"%d\t  ",arr[i].mark2);
								fprintf(fp6,"%d\t  ",arr[i].mark3);
								fprintf(fp6,"%d\t  ",arr[i].mark4);
								fprintf(fp6,"%d\t  ",arr[i].mark5);
								fprintf(fp6,"%d\t  ",arr[i].mark6);
								fprintf(fp6,"%d\t  ",arr[i].mark7);
								fprintf(fp6,"%d\t  ",arr[i].mark8);
								fprintf(fp6,"%d\t  ",arr[i].result1);
								fprintf(fp6,"%.4lf\n",arr[i].result2);
								*/
								fprintf(fp6,"%d,%lld,%s,%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%.4lf\n",i+1,arr[i].id,arr[i].name,arr[i].sex,arr[i].mark1,arr[i].mark2,arr[i].mark3,arr[i].mark4,arr[i].mark5,arr[i].mark6,arr[i].mark7,arr[i].mark8,arr[i].result1,arr[i].result2);
							}
							fprintf(fp6,"(File name : %s)\n",fule);
							
							fclose(fp6);
						} 
						break;
					} 
					default:{
						printf("Invalid selection.\n");
						break;
					}
				}
				break;
			}
			case 'C':
			case 'c':{
				char cho3;
				
				printf("C.File search(compatible with HW3 ICS2,other txt file are also usable)\n");
				
				do
				{
					FILE* fps;
					char cant3;
					char fule[200];
					
					printf("File search type:");
					printf("a.txt\tb.csv\n");
					scanf(" %c",&cant3);
					printf("\n");
					 
					if(cant3=='A'||cant3=='a')
					{
						printf("★ Search for the document you need(txt)\n");
						scanf("%s",file);
						sprintf(fule,"%s.txt",file);
						printf("\n");
					}
					else if(cant3=='B'||cant3=='b')
					{
						printf("★ Search for the document you need(csv)\n");
						scanf("%s",file);
						sprintf(fule,"%s.csv",file);
						printf("\n");
					}
					
					printf("Display box:");
					printf("\n");
					
					fps=fopen(fule,"r");
					if(fps==NULL)
					{
						printf("The file does not exist.\n");
						break;
					}
					else 
					{
						printf("\n");
						while(fgets(fule,sizeof(fule),fps)!=NULL)
						{
							Sleep(3000);
							printf("%s",fule);
						}
						fclose(fps); 
						printf("\n");
						printf("Import complete\n");
					}
					
					printf("Do you need to re-import?(n y)\n");
					scanf(" %c",&choice);
				}while(choice=='Y'||choice=='y');
				break;
			} 
			default:{
				printf("Invalid selection.\n");
				break;
			}
		}
		printf("----------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("Do you want to recalculate(y/n)\n");
		scanf(" %c",&choice);
	}while(choice=='y'||choice=='Y');
	return 0; 
} 
