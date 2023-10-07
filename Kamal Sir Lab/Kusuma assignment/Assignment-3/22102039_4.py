
s = input("Enter a String : ")
substr = input("Enter a sub String : ")
l = len(s)
lsub = len(substr)
start = count = 0
end = l
while True:
    position = s.find(substr, start, end)
    if position != -1:
        count += 1
        start = position+lsub
    else:
        break
    if start >= l:
        break
print(count)


'''
This Python program takes a main string and a substring as input.
It counts how many non-overlapping occurrences of the substring exist within the main string.
It iteratively searches for the substring, increments a count for each occurrence, and stops
when no more occurrences are found. The program then prints the count.'''