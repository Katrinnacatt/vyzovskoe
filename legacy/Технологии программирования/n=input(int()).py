n=int(input())
s=1
for n in range(1,n):
    if n==0:
        print(n)
    else:
        s=s+1/n
print(s)
