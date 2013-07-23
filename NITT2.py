for i in range(int(input())):
	a=input()
	if a%252==0:
		flag=1
	else:
		flag=0
	if a%525==0:
		if flag==1:
			print "Yes Yes"
		else:
			print "No Yes"
	else:
		if flag==1:
			print "Yes No"
		else:
			print "No No"
