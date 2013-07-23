import sys
def GCD(x,y):
	if y==0:
		return x
	else:
		return GCD(y,x%y)
n=input()
for i in range(0,n):
	a,b = map(int,sys.stdin.readline().split())
	print GCD(a,b)
