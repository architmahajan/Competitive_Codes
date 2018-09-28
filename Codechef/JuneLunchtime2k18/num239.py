t=int(input())
while(t>0):
	t-=1
	l,r=input().split()
	l=int(l)
	r=int(r)
	z=(r-l)/10
	z=int(z)
	x=l%10
	if(x==2 or x==3 or x==9):
		if(z==1):
			count1=4
		else:
			count1=(z*3)+1
	else:
		count1=z*3
	l=l+(10*z)
	for i in range (l+1,r+1):
		x=i%10
		if(x==2 or x==3 or x==9):
			count1+=1
	print(count1)
