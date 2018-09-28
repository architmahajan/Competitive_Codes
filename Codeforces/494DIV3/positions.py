a,b,x=input().split()
a=int(a)
b=int(b)
x=int(x)
if(a>=b):
	s="0"
	a-=1
	prev=0
else:
	s="1"
	b-=1
	prev=1
xx=a+b
for i in range(0,xx):
	if(x>1):
		if(prev==0):
			prev=1
			b-=1
			s+="1"
		else:
			prev=0
			a-=1
			s+="0"
		x-=1
	else:
		break
if prev==1:
	while(b>0):
		s+="1"
		b-=1
	while(a>0):
		s+="0"
		a-=1

else:
	while(a>0):
		s+="0"
		a-=1
	while(b>0):
		s+="1"
		b-=1
print(s)


