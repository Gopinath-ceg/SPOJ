n=1
while true
	a=gets().to_i
	if a==0
		break
	end
	b=a**(a-2)
	if a==1
		b=1
	end
	print "Case ",n,", N = ",a,", # of different labelings = ",b
	print "\n"
	n = n + 1
end
