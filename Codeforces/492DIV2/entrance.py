n=int(input())
a=[]
b=[]
a = [int(x) for x in input().split()]
for i in range(0,n):
	x=a[i]
	if(x>=i):
	    x-=i
	else:
		x=0
	y=x/n
	y=int(y)
	x%=n
	if(x==0):
		b.append(y+1)
	else:
		b.append(y+2)

mini=10000000000000000000
for i in range(0,n):
	if(mini>b[i]):
		mini=b[i]
		ind=i+1
print(ind)


