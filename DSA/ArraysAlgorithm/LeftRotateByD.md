# Left Rotate by D
## question states that we are given an array and we need to left rotate it by d times here d can be greater than the lenth of the array
- so for an array [1,0,1] and D 5
- the resultant array should be [1,1,0]

## intution accordingly
- we can approach this problem by left shifting by 1 place till d times
- and for every time we need to take care of the first element in the array

### Brute Force Approach
- while d is not zero 
- we will keep traversing the array by keeping the first element in temp
- each time we will shift the whole array this will lead to the fact that
- after d is zero we have our desired rotated array

### Optimize1
*we need to know modulous operation and the fact that the rotated array always have the element of current array in a certain order*

- first we will initialize an extra array of size same as the current array
- now as we know that ```a%b = a //if a < b``` and ```a%b = remaider //if a > b```
- through these property it is to be ensured that we will never be going out of bound of the array 
- that means we obtained a cycle in the array now we have to just insert the right index elment in the new array
- and copy all the element of new array in the given array

### Optimize2
*using reverse function or reversing, it is a pattern and can be observed if analysed carefully*

- as there is a cycle in the array so the arangment also repeats and this will lead us to have a certain amount of arangments that are re-ocurring
- if the amount is not infinite then there is a pattern
- the pattern is noticed as we will reverse the cycle elements and the rest elements
- after that if we reverse the whole array it will results in the desired array

<div style="page-break-after: always;"></div>

## learnings
- observe the patterns and try to imply it using programming language
- the patterns should be true for every test cases, check edge case and check cases with constraints
- use common sense and try to search on how to imply things and observe patterns in the problems

### Pseudo code
```ruby
bruteForce(int[] arr, int n, int d)
1. while d != 0
2. 		temp <- arr[0]
3. 		for(pos in arr: 1 -> n)
4. 			arr[pos-1] <- arr[pos]
5. 		arr[n-1] <- temp
6. 		d--

Optimize1(int[] arr, int n, int d)
1. start <- d%n, int temp <- array(n)
2. for(pos in temp : 0 -> n)
3. 		temp[pos] = arr[start%n], start++
4. for(pos in arr : 0 -> n)
5. 		arr[pos] = temp[pos]

Optimize2(int[] arr, int n, int d)
1. start <- d%n
2. reverse(arr, 0, start-1)
3. reverse(arr, start, n-1)
4. reverse(arr, 0, n-1)

reverse(int[] arr, int strt, int endMinOne)
1. while strt < endMinOne
2.  	swap(arr, strt, endMinOne)
3. 		strt++, endMinOne--

swap(int[] arr, idx1, idx2)
1. temp <- arr[idx1]
2. arr[idx1] <- arr[idx2]
3. arr[idx2] <- temp
```
<div style="page-break-after: always;"></div>

### implementation
```java
class Solution {
	public void bruteForce(int[] arr, int n, int d){
		while(d != 0){
			int temp = arr[0];
			for(int pos = 1; pos < n; pos++){
				arr[pos-1] = arr[pos];
			}
			arr[n-1] = temp;
			d--;
		}
	}

	public void Optimize1(int[] arr, int n, int d){
		int start = d%n;
		int[] temp = new int[n];
		for(int pos = 0; pos < n; pos++){
			temp[pos] = arr[start%n];
			start++;
		}
		for(int pos = 0; pos < n; pos++){
			arr[pos] = temp[pos];
		}
	}

	public void Optimize2(int[] arr, int n, int d){
		int start = d%n;
		reverse(arr, 0, start-1);
		reverse(arr, start, n-1);
		reverse(arr, 0, n-1);
	}

	public void reverse(int[] arr, int start, int end){
		while(start < end){
			swap(arr, start, end);
			start++;
			end--;
		}
	}

	public void swap(int[] arr, int idx1, int idx2){
		int temp = arr[idx1];
		arr[idx1] = arr[idx2];
		arr[idx2] = temp;
	}
}
```

***
<div style="page-break-after: always;"></div>
