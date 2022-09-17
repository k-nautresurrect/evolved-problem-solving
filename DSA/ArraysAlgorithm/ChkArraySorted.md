# Check if the array is sorted or not in a order
## question statement states that we have to check wether the array is sorted or not in a given order (ascending order)
- so for an array [3,4,5,1,8]
- we have to return false.

## intution accordingly
- we can check if the array is sorted or not by checking a certain order
- to check an order we have to compare the current element either with its previous elment or either with the next element
- if the order follows we will continue the moment it is failed we have to return that the array is not sorted

### BruteForce Approach
- traverse through the array and for each element
- check wether the elements from 0 to that element are smaller than current element
- if any one of them is not smaller than return false on that moment
- after the checking return true 

### Optimize Approach
- traverse through the array and keep track of the previous element if the previous element is smaller than the current element we have to do nothing
- if the current element is smaller than the previous element we have to return false

## learnings
- if we have to check the certain order in array focus on removing the iterations as per need
- the nested for loop can be removed using comparisions and conditions
- to identify conditions observe the patterns in the array that is to be followed

### Pseudo code
```ruby
bruteForce(int arr[], int n)
1. for(pos in arr : 0 -> n)
2. 		currentElement <- arr[pos]
3.		for(chk in arr: pos -> 0)
4. 			if arr[chk] > currentElement
5. 				return false
6. return true

Optimize(int arr[], int n)
1. for(pos in arr : 1 -> n)
2. 		if arr[pos - 1] > arr[pos]
3. 			return false
4. return true
```

### implementation
```java
class Solution {
	public boolean bruteForce(int[] arr, int n){
		for(int pos = 0; pos < n; pos++){
			int chkElmnt = arr[pos];
			for(int chk = pos; chk >= 0; chk--){
				if(arr[chk] > chkElmnt)
					return false;
			}
		}
		return true;
	}

	public boolean Optimize(int[] arr, int n){
		for(int pos = 1; pos < n; pos++){
			if(arr[pos-1] > arr[pos])
				return false;
		}
		return true;
	}
}
```