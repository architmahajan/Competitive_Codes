s=input()
flag=0
for i in range(1,len(s)-1):
	if(s[i]=='.'):
		continue
	elif (s[i]=='A' and ((s[i-1]=='B'and s[i+1]=='C') or (s[i-1]=='C' and s[i+1]=='B'))):
		flag=1
		break
	elif (s[i]=='B' and((s[i-1]=='A' and s[i+1]=='C') or (s[i-1]=='C' and s[i+1]=='A'))):
		flag=1
		break
	elif (s[i]=='C'and ((s[i-1]=='A'and s[i+1]=='B') or (s[i-1]=='B' and s[i+1]=='A'))):
		flag=1
		break
if(flag==1):
	print("Yes")
elif(len(s)<3):
	print("No")
elif(flag==0):
	print("No")