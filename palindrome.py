def palindrome(num):
    b = num
    dig = 0
    while num > 0:
        rem = num % 10
        dig = (dig * 10) + rem
        num //= 10
    if(b == dig):
        print("Palindrome")
    else:
        print("Not a palindrome")
    return;

a = int(input("Enter a number: ")) #1221
palindrome(a)