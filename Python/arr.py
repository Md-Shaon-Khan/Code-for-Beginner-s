names = ["Shaon","Raunaq","Kuasha"]

x = names[0]
names[0] = "Nahid"

print(len(names))

for i in names:
    print(i,end=" ")

names.append("Tuhin")
print("\n",names,sep='')


names.pop(0)
print(names)

names.remove("Tuhin")
print(names)