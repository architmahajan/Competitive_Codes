t=int(input())
while t>0:
	t--;
	n=int(input())
	arr=[int(x) for x in input().split()]
	a,b=input().split();
	for x in arr :
		co[x]++;
	xx=(co[a]*co[b])/(n*n)
	print(xx)