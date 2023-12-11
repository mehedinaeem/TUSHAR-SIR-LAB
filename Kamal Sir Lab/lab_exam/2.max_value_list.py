list1=[1,2,3,4,5,100,10,2,3]
max_val=list1[0]
print(len(list1))
for i in range(len(list1)):
    if max_val<list1[i]:
        max_val=list1[i]
print(max_val)
