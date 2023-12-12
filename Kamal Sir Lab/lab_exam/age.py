def age(n):
    if n>=0 and n<=12:
        print("child")
    elif n>=13 and n<=19:
        print("Teenegar")
    elif n>=20 and n<=59:
        print("Adult")
    elif n>=60:
        print("Senior citizen")
    
    
    
while True:
    print("1.input age: ")
    print("2.Exit:")
    op=input("Enter your option: ")
    if(op=="1"):
        n=int(input("Enter Age:"))
        age(n)
    else:
        break
    