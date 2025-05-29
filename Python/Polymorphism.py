# thisdict = {
#     "brand":"Ford",
#     "model":"Mustang",
#     "year":1964
# }

# print(len(thisdict))     output:3



class CAR:
    def __init__(self,brand,model):
        self.brand = brand
        self.model = model
    
    def move(self):
        print("Drive!")

class BOAT:
    def __init__(self,brand,model):
        self.brand = brand
        self.model = model

    def move(self):
        print("Sail!")

class PLANE:
    def __init__(self,brand,model):
        self.brand = brand
        self.model = model

    def move(self):
        print("Fly!")

car1 = CAR("Ford","Mustang")
boat1 = BOAT("Ibiza","Touring 20")
plane1 = PLANE("Boeing","747")

for x in (car1,boat1,plane1):
    x.move()

