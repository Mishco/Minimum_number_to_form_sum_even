# Python3
# Number of test
T = int(input())

i = 0
while i < T:

    # Number of elements
    n = input()

    # Read all line and create a sum
    suma = sum(map(int, input().strip().split(" ")))
    count = 0

    # Check if is suma even or not
    while True:
        suma += 1
        count += 1
        if (suma % 2 == 0):
            break
    # End of While True

    print(count)
    i = i+1
# End of while

# Code by Michal Slovik
