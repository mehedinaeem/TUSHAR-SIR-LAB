""" 
    pass no paremetre but retuen value
    find power of number
"""


def power():
    n=int(input('Enetr base: '))
    x=int(input('Enter power: '))
    r=1
    
    for i in range(x):
        r*=n
    return r

result=power()
print(result)