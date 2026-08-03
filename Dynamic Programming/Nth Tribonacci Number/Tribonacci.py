def nth_tribonacci_number(n:int) -> int:
    if n==0:
        return 0
    if n<=2:
        return 1

    t0,t1,t2=0,1,1

    for _ in range(3,n+1):
        t0,t1,t2=t1,t2,t0+t1+t2   #for fibonnacci just have t2= t1+t2 same code
    return t2

if __name__=="__main__":
    n=int(input())
    res=nth_tribonacci_number(n)
    print(res)

   
