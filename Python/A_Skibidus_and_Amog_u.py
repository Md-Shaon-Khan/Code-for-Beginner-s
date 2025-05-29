# def main():
#     import sys
#     input = sys.stdin.read
#     data = input().split()
    
#     t = int(data[0])  # Number of test cases
#     for i in range(1, t + 1):  # Loop through each test case
#         word = data[i]  # Get the singular noun
#         if word.endswith("us"):  # Check if it ends with "us"
#             plural = word[:-2] + "i"  # Replace "us" with "i"
#             print(plural)
#         else:
#             print(word)  # If it doesn't end with "us", print as is (though the problem guarantees it will)

# if __name__ == "__main__":
#     main()


import sys

t = int(sys.stdin.readline().strip())

for _ in range(t):
    w = sys.stdin.readline().strip()
    if len(w) >= 2 and w.endswith("us"):
        print(w[:-2] + "i")
