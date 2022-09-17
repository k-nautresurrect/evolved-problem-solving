# Remove Duplicate
## question states that we are given a sorted array and we have to remove every duplicate and we need to keep distinct element in the same order and we need to return index in the array untill which there is uniue elements
- so for an array [1,2,2,2,10,10,30,40,40,40]
- the output should be 5 as there are 5 distinct elment
- note that we can also just count and return the distinct elmenet but we also have to modify the current array.

## intution accordingly
- as the array is sorted so we can check the unique element in array
- and maintain the count of the unique element in the array also maintain a new array of unique elements
- after the full traversal of the array we need to fill the orignal array with the elements in the new array
- now we get the array which itself is the required array and the count can be returned now
- as array is sorted if we are able to keep track of the window of repeated element
- and swap elements in such a manner that the repeated element window is skipped and only unique counts remain
- then we can eliminate the space

### Brute Force Approach
- make a new array of size same as the given array
- create a new variable name as count
- traverse through the array
- now we can check with either the previous element or the next element 
- if the element is not equal to the previous element increase count and insert in new array using count as an index
- insert the previous element in the array
- now at last check the last and second last element if they are not equal put increase count and put in the new array 
- return count + 1

### Optimize
- we can maintain a window which is to be skipped
- and swap the first number in the window and the number just after the number
- initiate start and end indicating start and end of the window from 0
- increase end if the next element is same 
- and if the next element is different then just swap first element of the window and the element where end is 
- after swapping increase start and end

<div style="page-break-after: always;"></div>

## learnings
- the space can be reduced in this scenario as the elements are forming an order
- due to this property we can try to apply 2 pointer method and treat the problem as a problem related with windows in array
- now how to apply the 2 pointer method should be intutive
- to apply it we have to know how to do a certain thing in the array for example how to maintain some variable that will healp in further condition
- how to convert the procedures into operations of arrays applying on certain condtions

### Pseudo code
```ruby
bruteForce(int[] arr, int n)
1. unique <- int[n], countUnique <- 1
2. unique[0] <- arr[0]
3. for(pos in arr: 1 -> n)
4. 		if arr[pos-1] != arr[pos]
5. 			unique[countUnique] <- arr[pos]
6. 			countUnique++
7. temp <- countUnique, arrFill <- 0
8. while temp != 0
9. 		arr[arrFill] = unique[arrFill]
10. 	arrFill++
11. 	temp--
12. return countUnique

Optimize(int[] arr, int n)
1. windowStart <- 0, windowEnd <- 0
2. while windowEnd < n
3. 		if arr[windowStart] != arr[windowEnd]
4. 			swap(arr, windowStart+1, windowEnd)
5. 			windowStart++
6.		windowEnd++

swap(int[] arr, idx1, idx2)
1. temp <- arr[idx1]
2. arr[idx1] <- arr[idx2]
3. arr[idx2] <- temp
```
<div style="page-break-after: always;"></div>

### implementation
```java
class Solution {
	public int bruteForce(int arr[], int n){
		int[] unique = new int[n];
		int countUnique = 1;
		unique[0] = arr[0];
		for(int pos = 1; pos < n; pos++){
			if(arr[pos-1] != arr[pos]){
				unique[countUnique] = arr[pos];
				countUnique++;
			}
		}
		int arrFill = 0;
		int temp = countUnique;
		while(temp != 0){
			arr[arrFill] = unique[arrFill];
			arrFill++;
			temp--;
		}
		return countUnique;
	}

	public int Optimize(int[] arr, int n){
		int start = 0;
		int end = 0;
		while(end < n){
			if(arr[start] != arr[end]){
				swap(arr, start+1, end);
				start++;
			}
			end++;
		}
		return start+1;
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
