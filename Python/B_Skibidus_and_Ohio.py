import sys

def min_length(s):
    if len(s) == 1:
        return 1  # A single character cannot be reduced further
    for i in range(len(s) - 1):
        if s[i] == s[i + 1]:
            return 1  # If consecutive duplicates exist, the minimum length is 1
    return len(s)  # Otherwise, the length remains unchanged

def main():
    input = sys.stdin.read
    data = input().splitlines()
    
    t = int(data[0])  # The number of test cases
    for i in range(1, t + 1):
        s = data[i]
        print(min_length(s))

if __name__ == "__main__":
    main()
