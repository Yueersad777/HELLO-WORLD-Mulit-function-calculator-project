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
#include <math.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <conio.h> 

int main(void){
		
	printf("<Hello-world-vision 1.00> Multifunction Calculator system\n");
	printf("(make in 2026 7 10 - 2026 7 11 - 2026 7 12 - 2026 7 13 - 2026 7 14 - 2026 7 31)\n");
	printf("F-P-91-1 F-P-91-2 F-P-91-3 F-P-92-1\n"); 
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("1.Basic Calculation  2.Solving a quadratic equation  3.Complex number calculation  4.Integer converter(Only for octal conversion and hexadecimal conversion)\n");
	printf("5.Linear function formula solution  6.Solving the area of various shapes  7.Solving the perimeter of various shapes  8.Mid point search\n");
	printf("9.BMI calculator  10.Change Calculator  11.The chord length problem of straight lines and circles  12.Open the assistant with a small software\n");
	printf("13.Calculation issues needed for the preliminary preparation of cosplay  14.Timekeeping  15.Current Time\n"); 
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	char choice;
	do{
		int e;
		printf("<Option>:");
		scanf("%d",&e);
		if(e==1){
			int x;
			double a,b;
			double sum,sub,mul,div;
			printf("<Basic Calculation> Calculation Options:\n");
			printf("1.Addition  2.Subtraction  3.Multiplication  4.Division\n");
			printf("<Option_1>:");
			scanf("%d",&x);
			if(x==1){
				printf("Number 1:");
				scanf("%lf",&a);
				printf("Number 2:");
				scanf("%lf",&b);
				sum=a+b;
				printf("<answer:%.4f>\n",sum); 
			}
			else if(x==2){
				printf("Number 1:");
				scanf("%lf",&a);
				printf("Number 2:");
				scanf("%lf",&b);
				sub=a-b;
				printf("<answer:%.4f>\n",sub);
			}
			else if(x==3){
				printf("Number 1:");
				scanf("%lf",&a);
				printf("Number 2:");
				scanf("%lf",&b);
				mul=a*b;
				printf("<answer:%.4f>\n",mul);
			}
			else if(x==4){
				printf("Number 1:");
				scanf("%lf",&a);
				printf("Number 2:");
				scanf("%lf",&b);
				div=a/b;
				if(b==0){
					printf("not calcultion number.\n");
				} 
				printf("<answer:%.4f>\n",div); 
			}
		}
		else if(e==2){
			double a,b,c;
			double formula_1,formula_2;
			double x1,x2;
			printf("<Solving a quadratic equation> Calculation Options:\n");
			printf("Number a:");
			scanf("%lf",&a);
			printf("Number b:");
			scanf("%lf",&b);
			printf("Number c:");
			scanf("%lf",&c);
			formula_1=b*b-4.0*a*c;
			formula_2=sqrt(formula_1);
			x1=(-b+formula_2)/(2.0*a);
			x2=(-b-formula_2)/(2.0*a);
			if(formula_1>0){
				printf("<answer:x1=%.4f x2=%.4f>\n",x1,x2);
			}
			else if(formula_1==0){
				printf("<answer:x1=x2=%.4f>\n",x1);
			}
			else if(formula_1<0){
				printf("<answer:The equation is no real number.>\n "); 
			} 
		}  
		else if(e==3){
			int v;
			printf("<Complex number calculation>  Calculation Options:\n");
			printf("1.Addition complex number  2.Subtraction complex number  3.Multiplication complex number  4.Division complex number\n"); 
			printf("<Option_3>:");
			scanf("%d",&v);
			if(v==1){
				double a,b,c,d;
				double real_sum,imag_sum;
				printf("Number a:");
				scanf("%lf",&a);
				printf("Number b:");
				scanf("%lf",&b);
				printf("Number c:");
				scanf("%lf",&c);
				printf("Number d:");
				scanf("%lf",&d);
				real_sum=a+c;
				imag_sum=b+d;
				printf("<answer:%.4f+%.4fi>\n",real_sum,imag_sum);
			}
			else if(v==2){
				double a,b,c,d;
				double real_sub,imag_sub;
				printf("Number a:");
				scanf("%lf",&a);
				printf("Number b:");
				scanf("%lf",&b);
				printf("Number c:");
				scanf("%lf",&c);
				printf("Number d:");
				scanf("%lf",&d);
				real_sub=a-c;
				imag_sub=b-d;
				printf("<answer:%.4f+%.4fi>\n",real_sub,imag_sub);
			}
			else if(v==3){
				double a,b,c,d;
				double real_mul,imag_mul;
				printf("Number a:");
				scanf("%lf",&a);
				printf("Number b:");
				scanf("%lf",&b);
				printf("Number c:");
				scanf("%lf",&c);
				printf("Number d:");
				scanf("%lf",&d);
				real_mul=a*c-b*d;
				imag_mul=a*d+b*c;
				printf("<answer:%.4f+%.4fi>\n",real_mul,imag_mul);
			} 
			else if(v==4){
				double a,b,c,d;
				double real_div,imag_div;
				printf("Number a:");
				scanf("%lf",&a);
				printf("Number b:");
				scanf("%lf",&b);
				printf("Number c:");
				scanf("%lf",&c);
				printf("Number d:");
				scanf("%lf",&d);
				real_div=(a*c+b*d)/(c*c+d*d);
				imag_div=(b*c-a*d)/(c*c+d*d);
				printf("<answer:%.4f+%.4fi>\n",real_div,imag_div);
			}
		}
		else if(e==4){
			char cho;
			auto int a;
			printf("Enter a decimal number:\n");
			scanf("%d",&a);
			
			printf("Choose output format:\n");
			printf("<A - Decimal>\n");
			printf("<B - Octal>\n");
			printf("<C - Hexadecimal(small write or big write)>\n");
			scanf(" %c",&cho);
			
			switch(cho){
				case 'A':printf("<Result: %d>\n", a);break;
				case 'B':printf("<Result: %o>\n", a);break;
				case 'C':printf("<Result: %x or %X>\n",a,a);break;
				default:{
					printf("not choice\n");
					break;
				}
			}
		}
		else if(e==6){
			int cho;
			printf("<Solving the area of various shapes> Calculation Options:\n");
			printf("1.Square area  2.Rectangular area  3.Circular area  4.Elliptical area  5.Triangular area  6.Angular area\n"); 
			printf("Option_6:");
			scanf("%d",&cho);
			
			switch(cho){
				case 1:{
					double a;
					double formula_a;
					printf("Number a:");
					scanf("%lf",&a);
					formula_a = a * a;
					printf("<answer:%.4f>\n",formula_a);
					break;
				}
				case 2:{
					double b,c;
					double formula_b;
					printf("Number a(short):");
					scanf("%lf",&b);
					printf("Number b(long):");
					scanf("%lf",&c);
					formula_b = b * c;
					printf("<answer:%.4f>\n",formula_b);
					break;
				}	
				case 3:{
					const double pi = 3.1415926;
					double radius;
					double formula_c;
					printf("radius:");
					scanf("%lf",&radius);
					formula_c = pi * radius * radius;
					printf("<answer:%.4f>\n",formula_c);
					break;
				}
				case 4:{
					const double pi = 3.1415926;
					double short_radius;
					double long_radius;
					double formula_d;
					printf("short radius:");
					scanf("%lf",&short_radius);
					printf("long radius:");
					scanf("%lf",&long_radius);
					formula_d = pi * short_radius * long_radius;
					printf("<answer:%.4f>\n",formula_d);
					break;
				}
				case 5:{
					int g;
					printf("<Choice> 1.Known low and high  2.Known three point  3.Helen's formula calculation\n");
					scanf("%d",&g);
					switch(g){
						case 1:{
							auto double a,h;
							double formula_e;
							printf("Bottom length:");
							scanf("%lf",&a);
							printf("high number:");
							scanf("%lf",&h);
							formula_e = (a * h) / 2.0;
							printf("<answer:%.4f>\n",formula_e);
							break;
						} 
						case 2:{
							auto double a_x1,a_y1;
							auto double b_x2,b_y2;
							auto double c_x3,c_y3;
							auto double formula_f;
							auto double formula_g;
							printf("point a:");
							scanf("%lf %lf",&a_x1,&a_y1);
							printf("point b:");
							scanf("%lf %lf",&b_x2,&b_y2);
							printf("point c:");
							scanf("%lf %lf",&c_x3,&c_y3);
							formula_f = a_x1 * (b_y2 - c_y3) + b_x2 * (c_y3 - a_y1) + c_x3 * (a_y1 - b_y2);
							formula_g = 1.0/2.0 * fabs(formula_f);
							printf("<answer:%.4f>\n",formula_g);
							break;
						} 
						case 3:{
							auto double a,b,c;
							double formula_h;
							double formula_I;
							double formula_J;
							printf("side a:");
							scanf("%lf",&a);
							printf("side b:");
							scanf("%lf",&b);
							printf("side c:");
							scanf("%lf",&c);
							formula_h = (a + b + c) * 1.0 / 2.0;
							formula_I = formula_h * (formula_h - a) * (formula_h - b) * (formula_h - c);
							formula_J = sqrt(formula_I);
							printf("<answer:%.4f>\n",formula_J);
							break;
						}
						default:{
							printf("not choice.\n");
							break;
						}
					}
					break;
				}
				case 6:{
					int h;
					printf("<choice> 1.Known diagonal length (most commonly used) 2.Given the base and height (analogous to a parallelogram)\n");
					scanf("%d",&h); 
					switch(h){
						case 1:{
							auto double d_1,d_2;
							auto double formula_k;
							printf("opposite side 1:");
							scanf("%lf",&d_1);
							printf("opposite side 2:");
							scanf("%lf",&d_2);
							formula_k = (d_1 * d_2) / 2.0;
							printf("<answer:%.4f>\n",formula_k);
							break;
						}
						case 2:{
							auto double a,h;
							double formula_l;
							printf("Bottom length:");
							scanf("%lf",&a);
							printf("High number:");
							scanf("%lf",&h);
							formula_l = a * h;
							printf("<answer:%.4f>\n",formula_l);
							break;
						}
					}
					break;
				}
				default:{
					printf("not choice.\n"); 
					break;
				}	
			}
		} 
		else if(e==5){
			auto double A_x1, A_y1;
		    auto double B_x2, B_y2;
		    auto double formula_1;
		    auto double formula_2;
		    auto double k;
		    auto double b;
		    
		    printf("Point a:\n");
		    scanf("%lf %lf", &A_x1, &A_y1);
		    printf("Point b:\n");
		    scanf("%lf %lf", &B_x2, &B_y2);
		    
		    formula_1 = B_y2 - A_y1;  
		    formula_2 = B_x2 - A_x1;  
		    
		    if(formula_2 == 0) {
		        printf("<answer: x = %.2f (vertical line)>\n", A_x1);
		    } 
			else {
		        k = formula_1 / formula_2;
		        b = A_y1 - k * A_x1;
		        if(b >= 0) {
		            printf("<answer: y = %.2fx + %.2f>\n", k, b);
		        } 
				else {
		            printf("<answer: y = %.2fx - %.2f>\n", k, -b);
		        }
		    }
		}
		else if(e==8){
			auto float X1,Y1;
			auto float X2,Y2;
			auto float formula_1;
			auto float formula_2;
			printf("<Mid point search> Calculation Options:\n");
			printf("Point a:\n");
			scanf("%f %f",&X1,&Y1);
			printf("Point b:\n");
			scanf("%f %f",&X2,&Y2);
			formula_1 = (X1 + X2) / 2.0;
			formula_2 = (Y1 + Y2) / 2.0;
			printf("<answer:(%f , %f)>\n",formula_1,formula_2);
		} 
		else if(e==7){
			int a;
			printf("<Solving the perimeter of various shapes>  Calculation Options:\n");
			printf("1.Square perimeter  2.Rectangular perimeter  3.Circular perimeter  5.Triangular perimeter\n");
			scanf("%d",&a);
			switch(a){
				case 1:{
					auto double a;
					double C;
					printf("Number a:");
					scanf("%lf",&a);
					C = 4.0 * a;
					printf("<answer:%.4f>\n",C);
					break;
				}
				case 2:{
					auto double a,b;
					double C;
					printf("Number a(short):");
					scanf("%lf",&a);
					printf("Number b(long):");
					scanf("%lf",&b);
					C = 2.0 * (a + b);
					printf("<answer:%.4f>\n",C);
					break;
				}
				case 3:{
					const double pi = 3.1415926;
					double radius;
					double C;
					printf("radius:");
					scanf("%lf",&radius);
					C = 2.0 * pi * radius;
					printf("<answer:%.4f>\n",C);
					break;
				}
				case 4:{
					auto double a,b,c;
					auto double C;
					printf("Side a:");
					scanf("%lf",&a);
					printf("Side b:");
					scanf("%lf",&b);
					printf("Side c:");
					scanf("%lf",&c);
					C = a + b + c;
					printf("<answer:%.4f>\n",C);
					break;
				}
				default:{
					printf("not choice.\n");
					break;
				}
			}
		}
		else if(e==12){
			int n;
			printf("<Open the assistant with a small software>  Calculation Options:\n");
			printf("1.calculator 2.notebook 3.Picture book 4.On-screen keyboard 5.System manager 6.Control panel 7.Task manager\n");
			printf("8.File esplorer 9.Registry compiler 10.Windows version information\n");
			scanf("%d",&n);
			switch(n){
				case 1:{
					system("calc");
					break;
				}
				case 2:{
					system("notepad");
					break;
				}
				case 3:{
					system("mspaint");
					break;
				}
				case 4:{
					system("osk");
					break;
				}
				case 5:{
					system("msconfig");
					break;
				}
				case 6:{
					system("control");
					break;
				} 
				case 7:{
					system("taskmgr");
					break;
				}
				case 8:{
					system("explorer");
					break;
				}
				case 9:{
					system("regedit");
					break;
				}
				case 10:{
					system("winver");
					break;
				}
				default:{
					printf("not choice.\n");
					break;
				}
			}
		}
		else if(e==11){
			int a;
			printf("<The chord length problem of straight lines and circles>  Calculation Options:\n");
			printf("1.The distance between a point and a straight line 2.Distance between straight lines\n");
			scanf("%d",&a);
			switch(a){
				case 1:{
					auto double a,b,c,x,y;
					auto double formula1;
					auto double formula2;
					auto double formula3;
					printf("Number a:");
					scanf("%lf",&a);
					printf("Number b:");
					scanf("%lf",&b);
					printf("Number c:");
					scanf("%lf",&c);
					printf("point (x,y):");
					scanf("%lf %lf",&x,&y);
					formula1 = a * a + b * b;
					formula2 = a * x + b * y + c;
					formula3 = fabs(formula2) / sqrt(formula1);
					if(formula1<0){
						printf("<There are no number in this situation,please recalculate>\n");
					} 
					else if(formula1>0){
						printf("<answer:%.4f>\n",formula3);
					}
					break;
				}
				case 2:{
					double d,e,c1,c2;
					double formula1,formula2,formula3;
					printf("Number a:");
					scanf("%lf",&d);
					printf("Number b:");
					scanf("%lf",&e);
					printf("Number c1:");
					scanf("%lf",&c1);
					printf("Number c2:");
					scanf("%lf",&c2);
					formula1 = c1 - c2;
					formula2 = d * d + e * e;
					formula3 = fabs(formula1) / sqrt(formula2);
					if(formula2<0){
						printf("<There are no numbers in this situation,please recalculate>\n");
					}
					else if(formula2>0){
						printf("<answer:%.4f>\n",formula3);
					}
					break;
				}
				default:{
					printf("not choice.\n");
					break;
				} 
			}
		}
		else if(e==9){
			double Height,Bodyweight;
			double BMI;
			printf("<BMI calculator>  Calculation Options:\n");
			printf("Height:");
			scanf("%lf",&Height);
			printf("Body weight:");
			scanf("%lf",&Bodyweight);
			BMI = Bodyweight / (Height * Height);
			printf("<answer:%.4f>\n",BMI);
		} 
		else if(e==10){
			double Totalproductprice,dueamount;
			double smallchange;
			printf("<Change Calculator>\n");
			printf("number 1(Total product price):");
			scanf("%lf",&Totalproductprice);
			printf("number 2(due amout):");
			scanf("%lf",&dueamount);
			smallchange=dueamount-Totalproductprice;
			printf("<Aswer(Small change):%.4f>\n",smallchange);
		}
		else if(e==13){
			int a;
			printf("<Calculation issues needed for the preliminary preparation of cosplay>  Calculation Options:\n");
			printf("1.Cost estimation 2.Fabric budget 3.Props and consumables (like EVA and other materials) 4.Height Scaling 5.Turn pictures into real objects\n");
			scanf("%d",&a);
			switch(a){
				case 1:{
					auto double b,c,d,e;
					double formula5;
					printf("1.Clothing Price:");
					scanf("%lf",&b);
					printf("2.Wig price:");
					scanf("%lf",&c);
					printf("3.Item Price:");
					scanf("%lf",&d);
					printf("4.Cosmetic prices:");
					scanf("%lf",&e);
					formula5 = (b + c + d + e) / 1.2;
					printf("<answer:%.4f>\n",formula5); 
					break;
				}
				case 2:{
					auto double a,b;
					double formula6;
					printf("1.Clothing length (cm):");
					scanf("%lf",&a);
					printf("2.Sleeve length (cm):");
					scanf("%lf",&b);
					formula6 = (a + b + 10.0) * 2.0;
					printf("<answer:%.4f>\n",formula6);
					break;
				}
				case 3:{
					auto double a,b;
					double formula7;
					printf("1.Unfolded area:");
					scanf("%lf",&a);
					printf("2.Single board area:");
					scanf("%lf",&b);
					formula7 = (a / b) * 1.5;
					printf("<answer:%.4f>\n",formula7);
					break;
				}
				case 4:{
					auto double a,b,c;
					double formula8;
					printf("1.Character design dimensions:");
					scanf("%lf",&a);
					printf("2.Your height:");
					scanf("%lf",&b);
					printf("3.Character set height:");
					scanf("%lf",&c);
					formula8 = a * (b / c);
					printf("<answer:%.4f>\n",formula8);
					break;
				}
				case 5:{
					auto double a,b,c;
					double formula9;
					printf("1.Image pixel length:");
					scanf("%lf",&a);
					printf("2.Reference for image pixels:");
					scanf("%lf",&b);
					printf("3.Length of the physical reference:");
					scanf("%lf",&c);
					formula9 = (a / b) * c;
					printf("<answer:%.4f>\n",formula9);
					break;
				}
				default:{
					printf("not choice.\n");
					break;
				}
			} 
		}
		else if(e==14){
			int ch;
			printf("<Timekeeping>  Calculation Options:\n");
			printf("1.postitive number  2.count backward\n");
			printf("Option_14:");
			scanf("%d",&ch);
			switch(ch){
				case 1:{
					int hour,mintue,second;
					unsigned int a,b;
					printf("Hour:");
					scanf("%u",&a);
					printf("Mintue:");
					scanf("%u",&b);
					for(hour=0;hour<=a;hour++){
						for(mintue=0;mintue<=b;mintue++){
							for(second=0;second<=60;second++){
								printf("\rTime: %02d : %02d : %02d",hour,mintue,second); 
								Sleep(1000); 
							}
						} 
					}
					printf("[over]\n");
					break;
				}
				case 2:{
					int hour2,mintue2,second2;
					unsigned int a2,b2;
					printf("Hour:");
					scanf("%u",&a2);
					printf("Mintue:");
					scanf("%u",&b2);
					for(hour2=a2;hour2>=0;hour2--){
						for(mintue2=b2;mintue2>=0;mintue2--){
							for(second2=60;second2>=0;second2--){
							printf("\rTime: %02d : %02d : %02d",hour2,mintue2,second2);  
							Sleep(1000); 	
							} 
						}
					}
					printf("[over]\n"); 
					break;
				} 
				default:{
					printf("not choice.\n");
					break;
				} 
			}
		}
		else if(e == 15) {
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
		}

	
		printf("Do you want to recalculate?(Y/N)\n");
		scanf(" %c",&choice);
	}while(choice=='Y'||choice=='y');
	return 0;
}
