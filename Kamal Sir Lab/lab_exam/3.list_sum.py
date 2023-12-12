n=int(input("Enter list size:"))
list1=[]
sum=0
for i in range(n):
    e=int(input(f"{i+1}th element of list: ") )
    list1.append(e)
    if e%2!=0:
        sum+=e
    
print(list1)
print(sum)