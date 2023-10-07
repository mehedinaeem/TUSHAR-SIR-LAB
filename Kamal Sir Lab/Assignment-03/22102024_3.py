""" 
    3. Write a program that prompts the user to enter their weight (in kilograms) and height (in meters). 
    The program should calculate the Body Mass Index (BMI) using the formula: BMI = weight / (height * height). 
    The program should then classify the BMI into one of the following categories:

    less than 18.5 - Underweight		
    BMI between 18.5 and 24.9 - Normal weight 	
    BMI between 25 and 29.9 - Overweight		
    BMI 30 or greater-Obesity
"""

#>>code goes here

def convert_meter(h):
    x=h*12*0.0254
    return x


def BMI(h,w):
    bmi=(w/(h*h))

    if bmi<18.5:
        print('Underweight')
        
    elif bmi>=18.5 and bmi<=24.9:
        print('Normal Weight')
        
    elif bmi>=25 and bmi<=29.9:
        print('Overweight')
    
    elif bmi>30:
        print('Greater-Obesity')
    
    

height=float(input("Enter Height: "))
weight=float(input("Enter weight: "))
BMI(convert_meter(height),weight)
    