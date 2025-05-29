import random

x = 1
y = 2.8
z = 1j

a = float(x)
b = int(y)
c = complex(x)
#d = int(z)

print(a,"\n",b,"\n",c,sep='')
print(type(c))

print(random.randrange(1,20))


abc = """What can I
do at this 
moment"""

print(abc)

abc = '''What can I
do at this 
moment'''

print(abc)

a = "Hello , World"
print(a[1])

for x in a:
    print(x,end="")

print("\n",len(a),sep='')

print("What" in abc)

if "at" in abc:
    print("Yes,'at' is present")