set_off = int(input())
password = input()

for i in password:
    print(chr((ord(i) - set_off - 65) % 26 + 65), end='')