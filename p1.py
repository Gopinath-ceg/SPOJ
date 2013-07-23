#!/usr/bin/python
t=input()
for i in range (0,t):
	n=input()
	f=1
	for j in range(1,n+1):
		f*=j
	print f
