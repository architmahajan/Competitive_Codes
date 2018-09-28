n=input()
n=int(n)
stri=[]
mp={}
for i in range (0,n):
	s=input()
	s=str(s)
	stri.append(s)
	mp.dict(make_pair(stri,i))
for i in range(0,n):
	print(mp.first,mp.second)
q=input()
q=int(q)
for i in range (0,q):
	count1=0
	flag=0
	r,s=input().split()
	r=int(r)
	s=str(s)
	l1=len(s)
	ss=""
	string=sorted(stri[:r])	
	for i in range(0,r):
		count1=0
		l2=len(string[i])
		for j in range(min(l1,l2)):
			if(string[i][j]==s[j]):
				 count1+=1
			else:	
				break;
		if(flag==0):
			ans=count1
			flag=1
			ss=string[i]
		elif(ans==count1):
			continue;
		else:
			if(count1>ans):
				ans=count1
				ss=string[i]
	if(ss==""):
		print(string[0])
	else:
		print(ss)

