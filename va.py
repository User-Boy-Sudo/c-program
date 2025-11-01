from itertools import combinations
n=int(input())
l=list(map(int,input().split()))
res=list(combinations(l,2))
print(res)
