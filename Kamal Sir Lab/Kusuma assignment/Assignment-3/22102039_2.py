''' 2. Write a program that prompts the user to enter their age and prints the corresponding age group. The program should use the following age groups:

      0-12: 		Child
      13-19: 		Teenager
      20-59: 		Adult
      60 and above:	Senior Citizen
'''


## >>here goes the code

n=int(input('Enter age: '))

if n>0 and n<=12:
        print('Child')
    
elif n>=13 and n<=19:
    print('Teenager')

elif n>=20 and n<=59:
    print('Adult')

elif n>=60:
    print('Senior Citizen')
    