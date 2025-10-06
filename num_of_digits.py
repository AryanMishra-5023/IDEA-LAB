def count(y):
    cnt = 0
    while y > 0:
        digit = y % 10
        cnt += 1
        y //= 10 
    print("Count of digits is %d" %cnt)
    return;
a = int(input("Enter a number: ")) #number entered is 234
count(a)