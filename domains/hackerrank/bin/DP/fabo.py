def fibo(a,b,n):
    if(n==0):
        return b;
    else:
        return fibo(b,b**2+a,n-1)
x=raw_input()
x=x.split()
print fibo(int(x[0]),int(x[1]),int(x[2])-2)

#def fibo(n, lookup):
#    if n == 0 or n == 1:
#        lookup[n] = n
#    if lookup[n] is None:
#        lookup[n] = fibo(n-1, lookup) + fibo(n-2, lookup)
#    return lookup[n]
#if __name__ == "__main__":
#    n = input().split()
#    lookup = [None]*(101)
#    print fibo(n,lookup)
