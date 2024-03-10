class calculator:
    def add(self,a,b):
        self.a=a
        self.b=b
        print(a+b)
        
    
    def sub(self,a,b):
        print(a-b)
    
    def multi(self,a,b):
        print(a*b)
    
    def div(self,a,b):
        print(a//b)
    
my_calculator=calculator()
a=int(input("Enter 1st Number: "))
b=int(input("Enter 2nd Number: "))
my_calculator.add(a,b)
my_calculator.sub(a,b)
my_calculator.multi(a,b)
my_calculator.div(a,b)
