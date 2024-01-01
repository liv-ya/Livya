class Room:
    def __init__(self,area=0):
        self.area=area
   
class Flat(Room):
    def __init__(self,area,noOfRooms=0,location=0):
        super().__init__(area)
        self.__noOfRooms=noOfRooms
        self.location=location
        
    def farea(self):
        return self.__noOfRooms*self.area
    def __eq__(self,other):
        return   self.__noOfRooms*self.area== other.__noOfRooms*other.area

f=Flat(5,12)
r=Flat(4,15)
print("Area of flat1:",f.farea())
print("Area of flat2:",r.farea())
print("Areas are equal:",f==r)
