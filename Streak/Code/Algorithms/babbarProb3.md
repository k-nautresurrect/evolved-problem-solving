# Find the kth maximum and kth minimum elment in an array
## question statement states that we have to find the kth maximum and kth minimum element from the array
- so for an array [3,2,4,1,6,9] and k = 4
- the 4th max is 3 and the 4th min is 4

### intution accordingly
- we have to check every time for the max element from 1 to k-1th max 
- if the kth element is maximum in the array and maximum in among the elements from 1 to k-1th element

### BruteForce
- take an array of size k, and store the k in temp
- insert the first element max in the array
- untill temp is not zero we have to check 2 parameters
- first find the max and compare that max in the k array element 
- k array should be having the lowest max of all at the last index
- if there is any element which is max and not in k array
- add the max in k array
- repeat the same for minimum element

### Optimize1
- sort the array
- now find the index according to the array length and the value of k

## Optimize2
- use minHeap or maxHeap