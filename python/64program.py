
'''from Graphics import rectangle as r
import Graphics.circle
from Graphics.Dgraphics import Cuboid,Sphere'''

from Graphics import *

print("Rectangle")
a=int(input('Length\n'))
b=int(input('Breadth\n'))
print("Area of Rectangle :",r.area(a,b))
print("Perimeter of Rectangle :",r.perimeter(a,b))

print("\nCircle")
r=int(input('Radius\n'))
print("Area of Circle :",circle.area(r))
print("Perimeter of Circle :",circle.perimeter(r))

print("\nCuboid")
a=int(input('Length\n'))
print("Area of Cuboid :",Cuboid.area(a))
print("Volume of Cuboid :",Cuboid.volume(a))

print("\nSphere")
r=int(input('Radius\n'))
print("Area of Sphere :",Sphere.area(r))
print("Volume of Sphere :",Sphere.volume(r))
