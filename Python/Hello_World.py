import sys
import os


print("Hello World!")

shaon = 3.74
raunaq = 3.68
kuasha = "Unknown" #we don't know her CGPA

"""
We acutally don't know many others CG 
in our classroom.
SO we need to focus on it.
"""

if shaon>raunaq:
    print("Shaon is greater than Raunaq")
else:
    print("Raunaq is greater than Shaon")

print(len(kuasha))

str_a = str(5)
int_b = int(3.9)
flt_c = float(3)

print(str_a ,"\n",int_b,"\n",flt_c ,sep='')
#print(str_a + "\n" + str(int_b) + "\n" + str(flt_c))

print(type(str_a) , "\n" , type(int_b) , "\n" , type(flt_c), sep='')

same_a = "NAYEM"
same_A = "NAYEM"

print(same_a==same_A)
print(same_a is not same_A)

a,b,c = shaon, raunaq, kuasha
print(a,b,c)

a=b=c=shaon
print(a,b,c)

fruits = ["apple","banana","cherry"]
x,y,z = fruits
print(x,y,z)

fruits_prize = ["apple",220]
x,y = fruits_prize
print(x,y)

x = "Python "
y = "is "
z = "awesome"
print(x,y,z)
print(x+y+z)

x = 10.0
y = 5
print(x+y) 

x = 5
y = "John"
print(x,y) #if i write print(x+y) then i will get a error.

sys.stdout = sys.__stdout__