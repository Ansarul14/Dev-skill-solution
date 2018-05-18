t=int(input())
for i in range(0,t):
    p=int(input())
    c=-1
    ans = "1"
    for j in range(0,p):


        n, m = input().split(" ")
        m = int(m)

        if m > c:
            ans = n
            c=m

    print("Winner: \\"+ans+"/")

