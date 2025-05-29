b = "Hello, World"

# print(b[2:8])
# print(b[:8])
# print(b[2:])
# print(b[-7:-2])

# b = b.upper()
# print(b,"\n")

# b = b.lower()
# print(b,"\n")

# b = "   Hello , World!"
# print(b,"\n")

# b = b.strip()
# print(b,"\n")

# b = b.replace("H","S")
# print(b,"\n")

# print(b.split(","))
# print(b.split("Sello"))
# print(b.split("World"))
# print(b.split())


# aa = "Hello"
# bb = "World"
# cc = "!"

# print(aa+" "+bb+cc)

# age = 21
# #name = "my name is shaon and my age is " + age
# #cannot do this

# name = f"My name is Shaon, I am {age}"

# print(name)

# price = 69
# txt = f"The price is {price:.2f} dollars"
# print(txt)

# txt = f"The price is {20*39} dollars"
# print(txt)
# print("\n\n\n\n")
# # Using different escape sequences in Python
# print('Single Quote: \'')  # Single Quote
# print('Backslash: \\')     # Backslash
# print('New Line:\nThis is on a new line')  # New Line
# print('Carriage Return:\rOverwritten Line')  # Carriage Return (Effect varies)
# print('Tab:\tThis text is tabbed')  # Tab
# print('Backspace: ABC\bD')  # Backspace (Removes last character 'C')
# print('Form Feed:\fThis is a new page break (form feed)')  # Form Feed
# print('Octal Value: \110\145\154\154\157')  # Octal representation of 'Hello'
# print('Hex Value: \x48\x65\x6C\x6C\x6F')  # Hexadecimal representation of 'Hello'


# text = "  hello world! Python is amazing. Python is fun.  "

# # Capitalize first letter
# print("capitalize():", text.capitalize())

# # Casefold - Converts to lowercase (better than lower())
# print("casefold():", text.casefold())

# # Count occurrences of "Python"
# print("count('Python'):", text.count("Python"))

# # Find first occurrence of "Python"
# print("find('Python'):", text.find("Python"))

# # Replace "Python" with "Coding"
# print("replace('Python', 'Coding'):", text.replace("Python", "Coding"))

# # Check if the string starts with "hello"
# print("startswith('hello'):", text.lstrip().startswith("hello"))

# # Check if the string ends with "fun."
# print("endswith('fun.'):", text.rstrip().endswith("fun."))

# # Remove spaces from both sides
# print("strip():", text.strip())

# # Split text into a list of words
# words = text.split()
# print("split():", words)

# # Join words into a single string with commas
# print("join():", ", ".join(words))

# # Convert to uppercase
# print("upper():", text.upper())

# # Convert to lowercase
# print("lower():", text.lower())

# # Swap case (uppercase becomes lowercase and vice versa)
# print("swapcase():", text.swapcase())

# # Convert to title case
# print("title():", text.title())

# # Check if a string contains only digits
# num_str = "12345"
# print("isdigit():", num_str.isdigit())

# # Check if a string contains only alphabets
# alpha_str = "Hello"
# print("isalpha():", alpha_str.isalpha())

# # Check if a string contains only alphanumeric characters
# alnum_str = "Hello123"
# print("isalnum():", alnum_str.isalnum())

# # Format a string
# age = 25
# print("format():", "I am {} years old.".format(age))

# # Fill with leading zeros
# num = "42"
# print("zfill(5):", num.zfill(5))
# print(bool("Hello"))
# print(bool(15))

# # Demonstrating the use of range(2, 30, 3)
# print("Numbers from 2 to 30 with step 3:")
# for x in range(2, 30, 3):
#     print(x,end=" ")

# # Storing the values in a list
# numbers = [x for x in range(2, 30, 3)]
# print("\nList of generated numbers:", numbers)

# # Finding the sum of generated numbers
# sum_numbers = sum(numbers)
# print("\nSum of these numbers:", sum_numbers)

# # Checking if a specific number exists in the sequence
# check_number = 20
# if check_number in numbers:
#     print(f"\n{check_number} is present in the sequence.")
# else:
#     print(f"\n{check_number} is NOT present in the sequence.")


# for x in range (6):
#     print(x)
# else:
#     print("Finally finished!")



# for x in range(6):
#   if x == 3: break
#   print(x)
# else:
#   print("Finally finished!")

# adj = ["red", "big", "tasty"]
# fruits = ["apple", "banana", "cherry"]

# for x in adj:
#   for y in fruits:
#     print(x, y)

for x in [0,1,2]:
    pass