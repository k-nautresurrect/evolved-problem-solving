# largest element in an array
## question states that we have to find the largest element in an array
- so for an array [1,2,3,4,5]
- the output should be 5

## intution accordingly
- i have to take one elment and check it with every element
- if it is greater then all the other element that will be the maximum element

### Brute Force Aprroach
- first traverse through the array
- while traversing the array
- traverse for every other element then the current and check if the current is maximum or not 
- if current is maximum update the maximum

### Optimize Approach
*maintain an maximum which is the maximum till any position in the array*
- first assign max to 0 value
- traverse the array
- for every elment check that element if it is greater than max update te max index 
- return the element on the max index

## learnings
- maintianing an variable according to certain condition
- elmination of loop by maintaining that variable

### pseudo code

```ruby
bruteForce(int[] arr, int n)
1. max <- -1
2. for(pos in arr : 0 -> n)
3. 		current <- arr[pos]
4. 		for(chk in arr: 0 -> n)
5. 			if current > arr[chk]
6. 				max = current
7. return max

Optimized(int[] arr, int n)
1. maxIdx <- 0
2. for(pos in arr : 0 -> n)
3. 		if arr[maxIdx] < arr[pos]
4. 			maxIdx = pos
5. return arr[maxIdx]
```

### implementation

```java
class Solution {
	public int bruteForce(int[] arr, int n){
		int max = -1;
		for(int pos = 0; pos < n; pos++){
			int current = arr[pos];
			for(int chk = 0; chk < n && chk != pos; chk++){
				if(current > arr[chk])
					max = current;
			}
		}
		return max;
	}

	public int Optimize(int[] arr, int n){
		int maxIndex = 0;
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] > arr[maxIndex])
				maxIndex = pos;
		}
		return arr[maxIndex];
	}
}
```

***