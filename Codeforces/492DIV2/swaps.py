n=int(input())
n1=2*n
a=[int(x) for x in input().split()]
count1=0
ind=0
while(n>0):
	n-=1
	pos=-1
	curr=a[ind]
	for i in range(ind+1,n1):
		if curr==a[i]:
			pos=i
			break
	for i in range(pos,ind+1,-1):
		x=a[i]
		a[i]=a[i-1]
		a[i-1]=x
		count1+=1
	ind+=2
print(count1)
