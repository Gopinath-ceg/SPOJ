#!/bin/usr/python
t=input()
for i in range (1,t+1):
	n=input()
	i=1
	while True:
		if i%2!=0 and i%3 !=0 and i%5 != 0:
			n = n-1
		if n==0:
			print i
			break
		i = i+1
