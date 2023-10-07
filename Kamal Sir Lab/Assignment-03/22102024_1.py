# check a number is even or odd

def check(n):
    if(n%2==0):
        print(f'{n} is a even number')
    else:
        print(f'{n} is a odd number')
        
n=int(input("Enter the number: "))
check(n)