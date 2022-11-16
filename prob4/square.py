#The square.py is the python file to execute the square function
#For the range of 0 to 19, every number is getting squared up
def sq(x):
    x = x**2
    return x

for x in range(20):
    print(sq(x))
