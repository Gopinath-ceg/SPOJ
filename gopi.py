#!/usr/bin/python
import sys
def Zero(n):
	    result = 0
	    i = 1
	    while True:
	        b, c = divmod(n, i)
	        a, b = divmod(b, 10)	
	        if a == 0:
	            return result
	        if b == 0:
	            result += (a - 1) * i + c + 1
	        else:
	            result += a * i
	        i *= 10
t=input()
for i in range (0,t):	        
	a,b = map(int,sys.stdin.readline().split())
	print Zero(b)-Zero(a-1)
	
