n = int(input())
for i in range(1,n+1):
    print(str.rstrip(("*"*(2*i-1)).center(n*2)))
for i in range(n-1,0,-1):
    print(str.rstrip(("*"*(2*i-1)).center(n*2)))