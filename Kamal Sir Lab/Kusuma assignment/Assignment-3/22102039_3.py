""" 
    3. Write a program that prompts the user to enter their weight (in kilograms) and height (in meters). 
    The program should calculate the Body Mass Index (BMI) using the formula: BMI = weight / (height * height). 
    The program should then classify the BMI into one of the following categories:

    less than 18.5 - Underweight		
    BMI between 18.5 and 24.9 - Normal weight 	
    BMI between 25 and 29.9 - Overweight		
    BMI 30 or greater-Obesity
"""  
    

height=float(input("Enter Height: "))
w=float(input("Enter weight: "))

h=height*12*0.0254
bmi=float(w/(h*h))
print(f'The BMI is {bmi}')

if bmi<18.5:
    print('Underweight')
    
elif bmi>=18.5 and bmi<=24.9:
    print('Normal Weight')
    
elif bmi>=25 and bmi<=29.9:
    print('Overweight')

elif bmi>30:
    print('Greater-Obesity')