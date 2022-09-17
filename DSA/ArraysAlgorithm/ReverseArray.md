# Reverse an array
## question states that we are given an array and we have to reverse it 
- so for an array [1,2,3,4,5]
- the reversed array will be [5,4,3,2,1]

## intution accordingly
- we have to swap the first element with the last elment
- untill the array is reversed 
- to know wether it is reversed or not we can traverse backwards 
- and fill a new array with element then refill the orignal array
- or we can swap elements untill we know that the element should not be swapped
- from where swapping results in changing the reverse array

### Brute Force Approach
- make a new array of size equals to the given array
- traverse the array from right to left 
- fill the elment in the new array 
- update the orignal array with the element in the new array

### Optimize
- make 2 iterators one pointing to the start and another pointing to the last element
- swap both the iterators and simultaneously increase starting iterator and decrease the ending iterator
- untill both of them collides or pass through each other
- when both of them collides the whole array is reversed as all the elements are swaped till the middle element.

<div style="page-break-after: always;"></div>

## learnings
- we can reduce space complexity by changing in the array
- but that change should be in a pattern and it is complex
- we can use 2 pointers or sliding window for reducing the space
- sliding window as well as 2 pointer also can be used to elemenate a nested loop

### Pseudo code
```ruby
bruteForce(int[] arr, int n)
1. rev <- array(n), revPos <- 0
2. for(pos in arr : lastIdx -> 0)
3. 		rev[revPos] <- arr[pos], revPos++
4. revPos <- 0
5. for(num in rev)
6. 		arr[revPos] <- num, revPos++

Optimize(int[] arr, int n)
1. frontIdx <- 0, lastIdx <- n-1
2. while frontIdx < lastIdx
3. 		swap(arr, frontIdx, lastIdx)
4.		frontIdx++, lastIdx--

swap(int[] arr, idx1, idx2)
1. temp <- arr[idx1]
2. arr[idx1] <- arr[idx2]
3. arr[idx2] <- temp
```
<div style="page-break-after: always;"></div>

### implementation
```java
class Solution {
	public void bruteForce(int[] arr, int n){
		int[] rev = new int[n];
		int revPos = 0;
		for(int pos = n-1; pos >= 0; pos--){
			rev[revPos] = arr[pos];
			revPos++;
		}
		revPos = 0;
		for(int num : rev){
			arr[revPos] = num;
			revPos++;
		}
	}

	public void Optimize(int[] arr, int n){
		int frontIdx = 0;
		int lastIdx = n-1;
		while(frontIdx < lastIdx){
			swap(arr, frontIdx, lastIdx);
			frontIdx++;
			lastIdx--;
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
