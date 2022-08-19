# cook your dish here
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    
    c=max(a,b)
    d=min(a,b)
    
    if c%d==0 :
        m=d
        while m<=c:
            
            if m==c:
                print('yes')
                break
            m*=2    
        else:
            print('no')
    else:
        print("no")