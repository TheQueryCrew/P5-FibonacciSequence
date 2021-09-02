N = int(input("Enter number of elements required :"))
print("Fibonacci Sequence for", N, "elements is :", end=" ")
a = 0
b = 1
if (N < 0):
    print("Invalid Input")
elif (N == 0):
    print(a)
elif (N == 1):
    print(b)
else:
    print(a, end=", ")
    print(b, end=", ")
    for i in range(2,N):
        c = a + b
        print(c, end=", ")
        a = b
        b = c
