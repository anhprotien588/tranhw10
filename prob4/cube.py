#The cube.py file is the cube function
#Even numbers are not getting cubed 
#Odd numbers are getting cubed
def cb(x):
    x = x**3
    return x

for x in range(20):
    if (x % 2) == 0:
        print(x)
    else:
        print(cb(x))
