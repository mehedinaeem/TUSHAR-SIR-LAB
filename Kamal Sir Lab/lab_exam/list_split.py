list1=[]
n=int(input("Enter list size:"))
for i in range(n):
    e=int(input(f"{i}th element of list:"))
    list1.append(e)

list2=[]
for i in range(int(n/2)):
    list2.append(list1[i])
    
list3=[]
for i in range(int(n/2),n):
    list3.append(list1[i])
    
print(list1,list2,list3)

list4=[]
for i in range(int(n/2)):
    list4.append(list2[i]*list3[i])
    
print(list4)