n,m=input().split()
n=int(n)
m=int(m)
a=[int(x) for x in input().split()]
on=[]
off=[]
presumon=[]
presumoff=[]
for i in range (0,n+10):
	presumon.append(0)
	presumoff.append(0)
maxi=-1
tot=0
for i in range(0,n):
	if(i==0):
		off.append(0)
		on.append(a[i])
	elif(i%2==0):
		off.append(0)
		on.append(a[i]-a[i-1])
	elif(i%2==1):
		on.append(0)
		off.append(a[i]-a[i-1])
if(n%2==0):
	a.append(m)
	off.append(0)
	on.append(m-a[n-1])
else:
	a.append(m)
	on.append(0)
	off.append(m-a[n-1])
for i in range(0,n+1):
	tot+=on[i]
maxi=tot
for i in range(0,n+1):
	if(i==0):
		presumon[i]=on[i]
		presumoff[i]=off[i]
	else:
		presumon[i]=presumon[i-1]+on[i]
		presumoff[i]=presumoff[i-1]+off[i]
# for i in range(0,n+1):
# 	print(on[i],end=" ")
# print("")
# for i in range(0,n+1):
# 	print(off[i],end=" ")
# print("")
# for i in range(0,n+1):
# 	print(presumon[i],end=" ")
# print("")
# for i in range(0,n+1):
# 	print(presumoff[i],end=" ")
for i in range(0,n+1):
	tot=0
	if(i==0):
		if(a[i]>1):
			tot+=presumon[i]-1
			tot+=presumoff[n]-presumoff[i-1]
	elif(i%2==0):
		if(a[i]-a[i-1]>1):
			tot+=presumon[i]-1
			tot+=presumoff[n]-presumoff[i-1]
	else:
		if(a[i]-a[i-1]>1):
			tot+=a[i]-a[i-1]-1
			tot+=presumon[i-1]
			tot+=presumoff[n]-presumoff[i]
	# print(tot)
	if(maxi<tot):
		maxi=tot
print(maxi)






