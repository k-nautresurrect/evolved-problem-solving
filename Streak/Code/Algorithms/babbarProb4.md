# sort an array of 0's 1's & 2's
## question statement is to sort the array of 0's, 1's, 2's without using any sorting algorithm and in O(1) space and linear time complexity
- so for an array [1,1,0,1,2,0,1,0,2]
- the sorted array should be [0,0,0,1,1,1,1,2,2]

### intution accordingly
- as the array only consist of 3 elments we can maintain an count of all the three elements
- traverse the array and increase count by 1 whenever any particular element is considered
- now update the current array using the count and update the 0's 1's 2's in the array
- the fact that there are only 3 elements 0,1,2 can be taken into great consideration while optimizing this approach
- as we have to do inplace changes to ensure the order of elements

### BruteForce
- make 3 count variable : countZero, countOne, countTwo
- traverse the array and increase the element count whenever the significant count apears
- now re-traverse the array and insert the 0's, 1's, 2's in the array according to their count

### Optimized
- initiate 3 pointers zeroWindow, oneWindow, twoWindow : to first, first, and last index of the array respectively
- now we have to maintain the window of zeros in between the first and the zeroWindow index simillarly to maintain oneWindow, twoWindow
- traverse the array using oneWindow as 1's are in between and traverse the array using twoWindow as 2's are the last and we have to maintain the inbetween from 1's to 2's as all 1's
- untill oneWindow crosses twoWindow we will traverse
- lets assume that currentIndex is the same as the oneWindow
- if the element at currentIndex is 0 than we have to swap the oneWindow element to zeroWindow element and increase the oneWindow as these index are to be assumed at the last of every window and we have to maintain this fact only
- if the element at currentIndex is 1 than we have to just increase the one Window to include that element in the window
- if the element at currentIndex is 2 than we have to swap it with the twoWindow and move twoWindow in front direction for including the 2 in the current twoWindow
