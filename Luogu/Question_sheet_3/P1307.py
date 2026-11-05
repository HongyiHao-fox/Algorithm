num = input().strip()

sign = ''
if num[0] == '-':
    sign = '-'
    num = num[1:]

num_rev = num[::-1]
while len(num_rev) > 1 and num_rev[0] == '0':
    num_rev = num_rev[1:]

print(sign + num_rev)
