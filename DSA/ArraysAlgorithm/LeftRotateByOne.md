# Left Rotate By One
## the question states that given an array we have to left rotate it by 1 element
- so for the array [1,2,3,4,5]
- the resultant array is [2,3,4,5,1]

## intution accordingly
- it is pretty easy to rotate by one 
- we can shhift the array to the left hand side
- but the trick is a certain element is lost while doing this
- to prevent it we need to maintain a temp variable

### Brute Force Approach
- maintain a variable temp to store the first value of array
- traverse the array after the first element to the last element
- put the value of the current index in prev index
- now insert the temp element at the last in array

### Optimize
- there is no furter optimiztion can be done
- as array does not follow a specific order
- and the previous implementation has O(n) as time complexity and O(1) space

<div style="page-break-after: always;"></div>

## learnings
- to shift an array always remember it will take O(n) time complexity
- it is important to keep in mind that what would happen if certain operations are done on the array to keep track of the elements after every operations
- keep in mind the indexing of the array and take action accordingly

### Pseudo code
```ruby
bruteForce(int[] arr, int n)
1. temp <- arr[0]
2. for(pos in arr : 1 -> n)
3. 		arr[pos-1] <- arr[pos]
4. arr[n-1] <- temp
```
<div style="page-break-after: always;"></div>

### implementation
```java
class Solution {
	public void bruteForce(int arr[], int n){
		int temp = arr[0];
		for(int pos = 1; pos < n; pos++){
			arr[pos-1] = arr[pos];
		}
		arr[n-1] = temp;
	}
}
```

***
<div style="page-break-after: always;"></div>
