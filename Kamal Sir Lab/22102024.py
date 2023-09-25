def student(n):
    mark=[]
    for i in range(n):
        print(f'For student {i+1}:')
        python=int(input("Python mark:"))
        python_lab=int(input("Python lab mark:"))
        print('\n')
        total_mark=python+python_lab
        mark.append(total_mark)
    
    for i in range(n):
        print(f'Student {i+1} total mark is {mark[i]}')
    

n=int(input("Enter student Number:"))
student(n)
