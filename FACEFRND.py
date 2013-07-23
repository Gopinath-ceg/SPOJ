from sets import Set
a = Set()
b = Set()
n = int(raw_input())
while n > 0 :
	c = int(raw_input())
	b.add(c)
	while c > 0 :
		d = int(raw_input())
		a.add(d)
		c = c - 1
	n = n - 1
while n > 0 :
	a.remove(b.pop())
print len(a)
