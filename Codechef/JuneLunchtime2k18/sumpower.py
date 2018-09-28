t=int(input())
while t>0:
	t-=1
	n,k=input().split()
	n=int(n)
	k=int(k)
	s=input()
	steps=n-k
	x=k
	count1=0
	if(steps>=k):
		x=0
		for i in range (0,k-1):
			x+=1
			if(s[i]!=s[i+1]):
				count1+=x
		#print(count1)
		for i in range (k-1,n-k):
			if(s[i]!=s[i+1]):
				count1+=k
		#print(count1)
		x=k
		for i in range (n-k,n-1):
			x-=1
			if(s[i]!=s[i+1]):
				count1+=x
		#print(count1)
		
	else:
		x=0
		for i in range (0,k-1):
			x+=1
			if(s[i]!=s[i+1]):
				count1+=min(x,steps)
		#print(count1)
		x=steps
		for i in range (k-1,n-1):
			if(s[i]!=s[i+1]):
				count1+=x
			x-=1
		#print(count1)
	print(count1)