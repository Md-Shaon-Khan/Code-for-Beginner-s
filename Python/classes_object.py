class MyClass:
    x = 5

class Person:
    def __init__(self,name,age):
        self.name = name
        self.age = age
    def __str__(self):
        return f"{self.name}({self.age})"
    def myFunc(self):
        print("Hello my name is "+self.name)
    def myBiodata(bioData):
        print("A students biodata :"+(bioData.name),(bioData.age))

p1 = MyClass()
print(p1.x)
p2 = Person("Shaon",21)
print(p2)
p2.myFunc()
p2.age = 20
p2.myBiodata()
del p2.age
p2.myFunc()
del p1
