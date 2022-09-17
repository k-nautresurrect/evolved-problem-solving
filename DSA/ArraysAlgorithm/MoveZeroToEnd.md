# Move all zeroes to end
## question states that we are given an array and we have to move every zero to the end of the array 
- so for an array [1,0,3,4,0,0,0,-2,90,1,87]
- the result should be [1,3,4,-2,90,1,87,0,0,0,0]

## intution accordingly
- we have to keep track of the zeroes occurred untill now
- and we need to shift the element after zeroes to the left side of zeroes
- as we know from the question we need to move the zeroes to end 
- we can also maintain a pointer at the end and decrease it by swapping zeroes

### Brute Force Approach
- traverse th array for each element check if it is zero
- if the element is zero then we need to count the repeated zeroes after that zero
- after the count we can easily swap the number after zero window with the first occured zero in the counting space 

### Optimize
- maintain start and end for initiating the window 
- intitilay there is no zero window so, start is -1 and end points to zero
- whenever element at the end index is zero just increase the end
- the moment we confronts the element which is not equal to zero
- we will swap the first occured zero and the element on which end pointer is

<div style="page-break-after: always;"></div>

## learnings
- this problems follows an pattern that every time zero apears we need to take the element after that zero and push that zero backwards by inserting that element
- the above statement refers in more general way of swapping the first zero of any window to the element after the zero window in the array
- this conclusion leads to the fact that we can remove nested loop by 2 pointer approch
- as there follows a rule which holds true to swap elments
- and this rule can be handled with 2 pointer approach

### Pseudo code
```ruby
BruteForce(int[] arr, int n)
1. for(pos in arr : 0 -> n)
2. 		if arr[pos] = 0
3. 			zeroesChk = pos
4. 			while arr[zeroesChk] == 0 and zeroesChk < n-1
5. 				zeroesChk++
6.			swap(arr, pos, zeroesChk)

Optimize(intp[] arr, int n)
1. strt0Window <- -1, end0Window <- 0
2. while end0Window < n
3. 		if arr[end0Window] != 0
4. 			swap(arr, strt0Window + 1, end0Window)
5. 			strt0Window++
6. 		end0Window++

swap(int[] arr, idx1, idx2)
1. temp <- arr[idx1]
2. arr[idx1] <- arr[idx2]
3. arr[idx2] <- temp
```
<div style="page-break-after: always;"></div>

### implementation
```java
class Solution {
	public void bruteForce(int arr[], int n){
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] == 0){
				int zeroCount = pos;
				while(arr[zeroCount] == 0 && zeroCount < n-1){
					zeroCount++;
				}
				swap(arr, pos, zeroCount);
			}
		}
	}

	public void Optimize(int[] arr, int n){
		int startWindow = -1;
		int endWindow = 0;
		while(endWindow < n){
			if(arr[endWindow] != 0){
				swap(arr, startWindow+1, endWindow);
				startWindow++;
			}
			endWindow++;
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
