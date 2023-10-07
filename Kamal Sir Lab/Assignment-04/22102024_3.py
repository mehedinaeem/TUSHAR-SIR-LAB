"""
    pass paremetre and return no value
    Find factorial
"""

#>>code goes here
def fact(n):
    x=1
    for i in range(n):
        x=x*(i+1)
    print(f'The factorial is {x}')
    
n=int(input('Enter number:'))
fact(n)