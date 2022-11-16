#The computeFunction.py file is a python file to implement a function f(x)
#In which f(x) = x^2 + 2
#For the numbers from 0 + 9, print out values and those f(x)
def f(x):
   x = x**2 + 2
   return x
for x in range(10):
    print("Value of x:",x)
    print("Value of f(x):",f(x))
