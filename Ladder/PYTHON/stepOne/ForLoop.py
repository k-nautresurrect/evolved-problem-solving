'''
	1-> initializing 
	2-> updation
	3-> stoppage criteria
'''
# itr = 0 to 10 with +1 updation
from math import sqrt
from math import floor
for itr in range(0,10):
	print(itr, end=" ")

def isPrime(num):
	if num < 1:
		return False
	if num == 2 or num == 3:
		return True
	if num%2 == 0 or num%3 == 0:
		return False
	for chk in range(5, floor(sqrt(num)), 6):
		if num%chk == 0 or num%chk+2 ==0:
			return False
	return True

print(isPrime(11))