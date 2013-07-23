import math
while 1 :
	n=input()
	if n==-1:
		break
	n=n-1
	if n%3!=0:
		print "N"
	else:
		n=n/3
		i=math.sqrt(n)
		if n==i*(i+1):
			print "Y"
		else:
			print "N"
