# myTuple = ("Apple","Banana","Cherry")
# myit = iter(myTuple)


# print(next(myit))
# print(next(myit))
# print(next(myit))


# myStr = "IIT"

# myit = iter(myStr)

# print(next(myit))
# print(next(myit))
# print(next(myit))


class MyNumbers:
    def __iter__(self):
        self.a = 1
        return self
    
    def __next__(self):
      if self.a <= 20:
        x = self.a
        self.a += 1
        return x
    
      else:
         raise StopAsyncIteration
      
myclass = MyNumbers()
myiter = iter(myclass)

for x in myiter:
   print(x)
      