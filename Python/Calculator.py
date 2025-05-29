import math

def display_menu():
    print("\nCalculator Menu:")
    print("+ : Addition")
    print("- : Subtraction")
    print("* : Multipication")
    print("/ : Division")
    print("^ : Power")
    print("r : Root")
    print("% : Modulus")
    print("l : Logarithm")

    print("s : Sine")
    print("c : Cosine")
    print("q : Quit")

def calculator():
    while True:
        display_menu()
        try:
            expr = input("Enter an expression (e.g., 5 + 3 or 4 r for square root): ").split()
            if len(expr) == 2:
                num1, op = float(expr[0]),expr[1]
                num2 = None
            elif len(expr) == 3:
                num1,op,num2 = float(expr[0]),expr[1],float(expr[2])
            else:
                print("Invalid input format. Try again.")
                continue

            if op == '+':
                result = num1 + num2
            elif op == '-':
                result = num1 - num2
            elif op == '*':
                result = num1 * num2
            elif op == '/':
                if num2!=0:
                    result = num1 / num2
                else:
                    result = "Error: Division by zero"
            elif op == '^':
                result = math.pow(num1,num2)
            elif op == 'r':
                if num1 >= 0:
                    result = math.sqrt(num1)
                else:
                    result = "Error: Cannot compute"
            elif op == '%':
                if num2 != 0:
                    result = num1 % num2
                else:
                    result = "Error: Cannot compute"
            elif op == 'l':
                if num1 > 0:
                    result = math.log10(num1)
                else:
                    result = "Error: cannot compute"
            elif op == "s":
                result = math.sin(num1)
            elif op == 'c':
                result = math.cos(num1)
            elif op == 'q':
                break
            else: 
                result = "Error: Invalis operator"

            print(f"Result:{result}")
        except ValueError:
            print("Error")

            choice = input("Do you want to perform another calculation? (y/n): ").strip().lower()
            if choice != 'y':
                break


calculator()