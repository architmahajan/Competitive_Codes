n,p=input().split()
n=int(n)
p=int(p)
s=input()
ss=[]
flag=0
for i in range(0,len(s)):
	ss.append(s[i])
s=ss
for i in range(0,len(s)-p):
	if s[i+p]!='.' and s[i]!='.' :
		if(s[i]=='0' and s[i+p]=='0') or (s[i]=='1' and s[i+p]=='1'):
			continue
		else:
			flag=1
	elif s[i]=='.' and s[i+p]=='.' :
		s[i]='0'
		s[i+p]='1'
		flag=1
	elif s[i]=='.' :
		if s[i+p]=='0':
			s[i]='1'
			flag=1
		elif s[i+p]=='1':
			s[i]='0'
			flag=1
	elif s[i+p]=='.' :
		if s[i]=='0':
			s[i+p]='1'
			flag=1
		elif s[i]=='1':
			s[i+p]='0'
			flag=1
	
	if flag==1:
		for j in range(i,len(s)):
			if(j==i or j==i+p):
				continue
			elif s[j]=='.':
				s[j]='1'
		break
if(flag==1):
	print("".join(s))
else:
	print("No")


