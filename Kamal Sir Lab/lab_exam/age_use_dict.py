def child(age):
    return age >= 0 and age <= 12

def teenager(age):
    return age >= 13 and age <= 19

def adult(age):
    return age >= 20 and age <= 59

def senior_citizen(age):
    return age >= 60

age_categories = {
    "Child": child,
    "Teenager": teenager,
    "Adult": adult,
    "Senior citizen": senior_citizen
}

def age_category(age):
    for category,check_func in age_categories.items():
        if check_func(age):
            return category
    return "Invalid age"

while True:
    print("1. Input age")
    print("2. Exit")
    option = input("Enter your option: ")
    if option == "1":
        age_input = int(input("Enter Age: "))
        result = age_category(age_input)
        print(result)
    else:
        break
