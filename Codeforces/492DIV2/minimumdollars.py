n=int(input())
count1=0
if(n>=100):
	x=n/100
	x=int(x)
	count1+=x
	n=n%100
if(n>=20):
	x=n/20
	x=int(x)
	count1+=x
	n=n%20
if(n>=10):
	x=n/10
	x=int(x)
	count1+=x
	n=n%10
if(n>=5):
	x=n/5
	x=int(x)
	count1+=x
	n=n%5
if(n>=1):
	x=n
	x=int(x)
	count1+=x
	n=n%1
print(count1)