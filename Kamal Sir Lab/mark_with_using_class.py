class Student:
    def __init__(self, student_roll, python_mark=0, python_lab_mark=0):
        self.student_roll = student_roll
        self.python_mark = python_mark
        self.python_lab_mark = python_lab_mark

    def input_marks(self):
        print(f'For student {self.student_roll}:')
        self.python_mark = int(input("Python mark:"))
        self.python_lab_mark = int(input("Python lab mark:"))
        print('\n')

    def calculate_total_mark(self):
        return self.python_mark + self.python_lab_mark


n = int(input("Enter student number:"))
result = []

for i in range(n):
    student_roll = i + 1
    student = Student(student_roll)
    student.input_marks()
    total_mark = student.calculate_total_mark()
    result.append(total_mark)

for i in range(n):
    total_mark = result[i]
    print(f'Student {i+1} total mark is {total_mark}')
