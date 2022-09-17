# Second Largest Element in an array
## the problem statement states that we have to find the second largest elment in an array
- so for an array [1,2,3,4,5]
- the second largest elment is 4

## intution accordingly
- when we have our first largest in an array
- we can find the second largest from the entire array while ignoring the first largest in the traversal

### BruteForce Approach
- first find first largest element by maintaining a maxIdx
- traverse the array and maintain the maximum till the point where we are curently
- repeat the process but skip the maxIdx and maintain the second maximum
- return the element at secondMaxIdx

### Optimize (1 traversal)
- we have to maintain a variable naming secondMaxIdx such that 
- it will satisfy condition as the previously found maximum is the second maximum to current maximum
- for initialization we can say that previously found maximum is on index -1 and current maximum is on index 0
- now we have to keep track of the previous maximum by assigning that to current maximum before finding the real current maximum element
- when we have the current maximum we have to check wether or not to update previous maximum
- while traversing the array keep in mind the fact that -1 is not in the array

## learnings
- for a condition
```java
if(condition1 == true){
	do = samething
}else if(condition2 == true){
	do = samething
}
// can be converted to
if(condition1 == true || condition2 == true){
	do = samething
}
```
- to maintain a second maximum we have done a trick and observe the pattern that is related to previous result.
- that is the second maximum is always the maximum of previous elements and smaller than the current maximum.
- this lead us to make certain assumption and condition that, if we are able to track we can work upon that and can keep track of the elements.

### pseudo code
```ruby
bruteForce(int[] arr, int n)
1. maxIdx <- 0, scndMaxIdx <- -1
2. for(pos in arr: 0 -> n)
3. 		if arr[pos] > arr[maxIdx]
4. 			maxIdx = pos
5. for(pos in arr: 0 -> n)
6. 		if arr[pos] != arr[maxIdx]
7.			if scndMaxIdx = -1 or arr[pos] > arr[scndMaxIdx]
8.  			scndMaxIdx = pos
9. return arr[scndMaxIdx]

Optimize(int[] arr, int n)
1. maxIdx <- 0, scndMaxIdx <- -1
2. for(pos in arr: 0 -> n)
3. 		if arr[pos] > arr[maxIdx]
4. 			scndMaxIdx = maxIdx
5. 			maxIdx = pos
6.		else if arr[pos] != arr[maxIdx]
7. 			if scndMaxIdx = -1 or arr[pos] > arr[scndMaxIdx]
8. 				scndMaxIdx = pos
9. return arr[scndMaxIdx]
```

### implementation

```java
class Solution {
	public int bruteForce(int[] arr, int n){
		int maxIdx = 0;
		int scndMaxIdx = -1;
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] > arr[maxIdx])
				maxIdx = pos;
		}
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] != arr[maxIdx]){
				if(scndMaxIdx == -1 || arr[pos] > arr[scndMaxIdx]){
					scndMaxIdx = pos;
				}
			}
		}
		return arr[scndMaxIdx];
	}

	public int Optimize(int[] arr, int n){
		int maxIdx = 0;
		int scndMaxIdx = -1;
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] > arr[maxIdx]){
				scndMaxIdx = maxIdx;
				maxIdx = pos;
			}else if(arr[pos] != arr[maxIdx]){
				if(scndMaxIdx == -1 || arr[pos] > arr[scndMaxIdx])
					scndMaxIdx = pos;
			}
		}
		return arr[scndMaxIdx];
	}
}
```