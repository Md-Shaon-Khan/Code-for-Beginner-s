import datetime

x = datetime.datetime.now()

print(x.year)
print(x.strftime("%A"))

y = datetime.datetime(2004,11,12)
print(y.strftime("%a"))