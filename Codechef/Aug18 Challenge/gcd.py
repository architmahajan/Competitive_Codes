mod=1000000007
def g(x, y):
	if (x == 0):
		return y
	return g(y%x, x)
def moexp(u,v,w):
	res=1
	while(v>0):
		if(v%2==1):
			res=(res%w)*(u%w)
			res%=w
		u=(u%w)*(u%w)
		u%=w
		v=v//2
	return int(res%w)
te=int(input())
while te>0:
    a,b,n=[int(x) for x in input().split()]
    x=a-b
    if(x==0):
       an=moexp(a,n,mod)+moexp(b,n,mod)
    else:
    	a%=x
    	an=(moexp(a,n,x)+moexp(b,n,x))%x
    	an=g(an,x)

    an%=mod
    print(an) 
    te-=1