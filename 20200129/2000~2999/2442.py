n = int(input())
for i in range(1,n+1):
    print(str.rstrip(("*"*(2*i-1)).center(n*2)))