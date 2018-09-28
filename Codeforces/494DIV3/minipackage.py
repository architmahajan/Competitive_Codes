n=int(input())
a=[int(x) for x in input().split()]
b=[]
mini=0
for i in range (0,200):
	b.append(0)
for i in range (0,n):
	b[a[i]]+=1
for i in range(0,200):
	if b[i]>mini:
		mini=b[i]
print(mini)