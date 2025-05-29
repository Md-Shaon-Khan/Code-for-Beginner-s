# x = 300

# def myfunc():
#   x = 200
#   global y
#   y = 400
#   print(x)
#   print(y)

# myfunc()

# print(x)
# print(y)

def myfunc1():
  x = "Jane"
  def myfunc2():
    nonlocal x
    x = "hello"
  myfunc2()
  return x

print(myfunc1())
