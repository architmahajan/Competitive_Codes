t=int(input())
while t>0:
	t-=1
	n,a,b=input().split();
	n,a,b = [int(x) for x in [n, a,b]]
	arr=[int(x) for x in input().split()]
	co=[]
	for i in range (0,n+1):
		co.append(0)
	for x in arr :
		co[x]+=1
	xx=(co[a]*co[b])/(n*n)
	print(xx)