t=int(input())
while(t>0):
	t-=1
	a,b,n=input().split()
	a=int(a)
	b=int(b)
	n=int(n)
	if(a==b):
		print("0")
	elif(a>=0 and b>=0):
		if(abs(a)>abs(b)):
			print("1")
		elif abs(b)>abs(a):
			print("2")
		else:
			print("0")
	elif(a<0 and b<0):
		if(n%2==0):
			if(abs(a)>abs(b)):
				print("1")
			elif abs(b)>abs(a):
				print("2")
			else:
				print("0")
		else:
			if(abs(a)>abs(b)):
				print("2")
			elif abs(b)>abs(a):
				print("1")
			else:
				print("0")
	elif(a<0):
		if(n%2==0):
			if(abs(a)>abs(b)):
				print("1")
			elif abs(b)>abs(a):
				print("2")
			else:
				print("0")
		else:
			print("2")
	elif(b<0):
		if(n%2==0):
			if(abs(a)>abs(b)):
				print("1")
			elif abs(b)>abs(a):
				print("2")
			else:
				print("0")
		else:
			print("1")


