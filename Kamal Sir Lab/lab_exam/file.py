# # f=open("D:\TUSHAR SIR LAB\Kamal Sir Lab\lab_exam\document.txt","r")
# # print(f.read())

# f1=open("D:\TUSHAR SIR LAB\Kamal Sir Lab\lab_exam\document.txt","w")
# f1.write(input("Enter context:"))

# f2=open("D:\TUSHAR SIR LAB\Kamal Sir Lab\lab_exam\document.txt","r")
# print(f2.read())

file_path = r"D:\TUSHAR SIR LAB\Kamal Sir Lab\lab_exam\document.txt"

# Writing input to the file
with open(file_path, "a") as f1:
    input_text = input("Enter context: ")
    f1.append(input_text)

# Reopening the file in read mode and printing its content
with open(file_path, "r") as f1:
    print(f1.read())


