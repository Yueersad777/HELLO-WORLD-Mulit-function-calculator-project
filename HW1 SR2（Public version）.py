"""
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
"""


import os
#import就是像C语言的include，os是头文件
import math

def Abb(a,b):
    return a+b

def Sub(a,b):
    return a-b

def Mul(a,b):
    return a*b

def Div(a,b):
    return a/b

def Abb_complex_real(a,c):
    return a+c
def Abb_complex_imag(b,d):
    return b+d

def Sub_complex_real(a,c):
    return a-c
def Sub_complex_imag(b,d):
    return b-d

def Mul_complex_real(a,b,c,d):
    return a * c - b * d
def Mul_complex_imag(a,b,c,d):
    return a * d + b * c

def Div_complex_divsor(c,d):
    return c * c + d * d
def Div_complex_real(a,b,c,d):
    return a * c + b * d
def Div_complex_imag(a,b,c,d):
    return b * c - a * d

def Quadratic_Discriminant(a,b,c):
    return b * b - 4 * a * c
def Quadratic_x1(a,b,result):
    return (-b + math.sqrt(result))/(2*a)
def Quadratic_x2(a,b,result):
    return (-b - math.sqrt(result))/(2*a)

while True:
    os.system("cls")#用system和sqrt时，后面要加上 头文件.
    print("HELLO WORLD 1.0 SR2 Python ver\n")
    print("Coder name:Hello world studio\tDate:2026.10.5")
    print("---------------------------------------------------------------------------------------------------\n")
    print("1.Basic Calculation\n")
    print("2.Complex number calculation\n")
    print("3.Solving a quadratic equation\n")
    print("\n")
    print("---------------------------------------------------------------------------------------------------\n")



    cho = input("Enter your choice: ")
    cho = int(cho)

    print("\n")

    if cho == 1:
        print("1.Basic Calculation:\n")
        print("Menu:1.Addition  2.Subtraction  3.Multiplication  4.Division\n")
        cho_1 = input("Enter your choice: ")
        cho_1 = int(cho_1)
        print("\n")
        if cho_1 == 1:
            print("1.Basic Calculation:Addition\n")
            a = input("Number a: ")
            a = int(a)
            print("\t")
            b = input("Number b: ")
            b = int(b)
            result = Abb(a,b)
            print("\n")

            print(f"Answer: {result}")

        elif cho_1 == 2:
            print("1.Basic Calculation:Subtraction\n")
            a = input("Number a: ")
            a = int(a)
            print("\t")
            b = input("Number b: ")
            b = int(b)
            result = Sub(a,b)
            print("\n")

            print(f"Answer: {result}")

        elif cho_1 == 3:
            print("1.Basic Calculation:Multiplication\n")
            a = input("Number a: ")
            a = int(a)
            print("\t")
            b = input("Number b: ")
            b = int(b)
            result = Mul(a,b)
            print("\n")

            print(f"Answer: {result}")

        elif cho_1 == 4:
            print("1.Basic Calculation:Division\n")
            a = input("Number a: ")
            a = float(a)
            print("\t")
            b = input("Number b: ")
            b = float(b)
            if b == 0:
                print("The division by zero is not possible.\n")
            else:
                result = Div(a, b)
                print("\n")

                print(f"Answer: {result}")

    elif cho == 2:
        print("2.Complex number calculation\n")
        print("Menu:1.Addition_complex  2.Subtraction_complex  3.Multiplication_complex  4.Division_complex\n")
        cho_2 = input("Enter your choice: ")
        cho_2 = int(cho_2)
        print("\n")

        if cho_2 == 1:
            print("1.Complex number calculation:Addition_complex\n")
            a = input("complex number 1 real part: ")
            a = int(a)
            print("\t")
            b = input("Complex number 1 imaginary part: ")
            b = int(b)
            print("\n")
            c = input("Complex number 2 real part: ")
            c = int(c)
            print("\t")
            d = input("Complex number 2 imaginary part: ")
            d = int(d)

            result1 = Abb_complex_real(a,c)
            result2 = Abb_complex_imag(b,d)
            print("\n")

            if result2 < 0:
                result3 = result2 * -1
                print(f"Answer: {result1} - {result3} i\n")
            else:
                print(f"Answer: {result1} + {result2} i \n")

        elif cho_2  == 2:
            print("2.Complex number calculation:Subtraction_complex\n")
            a = input("Complex number 1 real part: ")
            a = int(a)
            print("\t")
            b = input("Complex number 1 imaginary part: ")
            b = int(b)
            print("\n")
            c = input("Complex number 2 real part: ")
            c = int(c)
            print("\t")
            d = input("Complex number 2 imaginary part: ")
            d = int(d)

            result1 = Sub_complex_real(a,c)
            result2 = Sub_complex_imag(b,d)
            print("\n")

            if result2 < 0:
                result3 = result2 * -1
                print(f"Answer: {result1} - {result3} i\n")
            else:
                print(f"Answer: {result1} + {result2} i \n")

        elif cho_2 == 3:
            print("2.Complex number calculation:Multiplication_complex\n")
            a = input("Complex number 1 real part: ")
            a = int(a)
            print("\t")
            b = input("Complex number 1 imaginary part: ")
            b = int(b)
            print("\n")
            c = input("Complex number 2 real part: ")
            c = int(c)
            print("\t")
            d = input("Complex number 2 imaginary part: ")
            d = int(d)

            result1 = Mul_complex_real(a,b,c,d)
            result2 = Mul_complex_imag(a,b,c,d)
            print("\n")

            if result2 < 0:
                result3 = result2 * -1
                print(f"Answer: {result1} - {result3} i\n")
            else:
                print(f"Answer: {result1} + {result2} i\n")

        elif cho_2 == 4:
            print("2.Complex number calculation:Division\n")
            a = input("Complex number 1 real part: ")
            a = float(a)#表示浮点数
            print("\t")
            b = input("Complex number 1 imaginary part: ")
            b = float(b)
            print("\n")
            c = input("Complex number 2 real part: ")
            c = float(c)
            print("\t")
            d = input("Complex number 2 imaginary part: ")
            d = float(d)

            result = Div_complex_divsor(c,d)
            if result == 0:
                print("The division by zero is not possible.\n")
            else:
                result1 = Div_complex_real(a,b,c,d)
                resultA = result1 / result
                result2 = Div_complex_imag(a,b,c,d)
                resultB = result2 / result
                if resultB < 0:
                    resultC = resultB * -1
                    print(f"Answer: {resultA} - {resultC} i\n")
                else:
                    print(f"Answer: {resultA} + {resultB} i\n")

    elif cho == 3:
        print("3.Solving a quadratic equation\n")
        a = input("Number a: ")
        a = float(a)
        print("\t")
        b = input("Number b: ")
        b = float(b)
        print("\t")
        c = input("Number c: ")
        c = float(c)
        print("\n")

        result = Quadratic_Discriminant(a,b,c)

        if result < 0:
            print("No real roots.\n")
        elif result == 0:
            x1 = Quadratic_x1(a,b,result)
            print(f"Answer: x1 = x2 = {x1}\n")
        elif result > 0:
            x1 = Quadratic_x1(a,b,result)
            x2 = Quadratic_x2(a,b,result)
            print(f"Answer: \n")
            print(f"x1 = {x1} ， x2 = {x2}\n")

    print("---------------------------------------------------------------------------------------------------\n")

    choice = input("Do you want to recalculate(y n): ")
    if choice == "n":
        break

