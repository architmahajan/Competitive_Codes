import math
te=int(input())
while(te>0):
	te=te-1
	x1,y1,z1,x2,y2,z2,d1,d2,d3,x0,y0,z0,r=input().split()
	x1=int(x1)
	y1=int(y1)
	z1=int(z1)
	x2=int(x2)
	y2=int(y2)
	z2=int(z2)
	d1=int(d1)
	d2=int(d2)
	d3=int(d3)
	x0=int(x0)
	y0=int(y0)
	z0=int(z0)
	r=int(r)
	A=(x1-x0)*(x1-x0)+(y1-y0)*(y1-y0)+(z1-z0)*(z1-z0)
	C=A-r*r
	# print(A,C)
	a=(x1-x0)
	b=(y1-y0)
	c=(z1-z0)
	# print(a,b,c)
	# print(d1,d2,d3)
	AA=(C-a*a)*(d1*d1)+(C-b*b)*(d2*d2)+(C-c*c)*(d3*d3)-2*a*b*d1*d2-2*b*c*d2*d3-2*a*c*d1*d3
	BB=(C-a*a)*d1*(x2-x1)+(C-b*b)*d2*(y2-y1)+(C-c*c)*d3*(z2-z1)-a*b*(d1*(y2-y1)+d2*(x2-x1))-b*c*(d2*(z2-z1)+d3*(y2-y1))-a*c*(d1*(z2-z1)+d3*(x2-x1))
	CC=(C-a*a)*(x2-x1)*(x2-x1)+(C-b*b)*(y2-y1)*(y2-y1)+(C-c*c)*(z2-z1)*(z2-z1)-2*a*b*(x2-x1)*(y2-y1)-2*b*c*(y2-y1)*(z2-z1)-2*a*c*(x2-x1)*(z2-z1)
	BB*=2
	
	if(AA==0):
		t1=-CC/BB
		print(t1)
	else:
		cal=math.sqrt(BB*BB-4*AA*CC)
		t1=(-BB+cal)/(2*AA)
		t2=(-BB-cal)/(2*AA)
		if t2<0:
			print(t1)
		else:
			print(t2)
	