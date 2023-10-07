""" 
    substring Occurance
    pass parametre and return Value
"""

#>>code goes here

def sub_occuer(s1,s2):
    count=0
    start=0
    end=len(s1)
    while(True):
        pos=s1.find(s2,start,end)
        if(pos != -1):
            count+=1
            start=pos+1
        else:
            break
    return count    
    
s1=input('Enter 1st string: ')
s2=input('Enter sub string: ')
result=sub_occuer(s1,s2)
print(result)