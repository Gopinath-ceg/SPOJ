n=1
while True:
	a=input()
	if a==0:
		break
	if a==1:
		b=1
	else:
		b==a**(a-2)
	print "Case "+n+",N = "+a+", # of different labelings = "+b
	n = n + 1

