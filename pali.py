 num = int(input("Enter a number: "))
#Convert the number to a string num_str = str(num)
#Check if the string is equal to its reverse if num_str=num_str[::-1]: print(num, "is a palindrome")
else:
print(num, "is not a palindrome")