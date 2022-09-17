# Find the maximum and minimum element in an array
## question statement states that we have to find the maximum and the minimum element from given array
- so for an array [23,54,19,-3]
- max is 54 and min is -3

### intution accordingly
- traverse through the array
- check every element if it is the maximum or not
- check every element if it is the minimum or not

### Brute force approach
- take a variable for contianment of maximum element
- traverse the given array
- for each element again traverse the remaining element
- check from the current and remaining element which one is greater
- update the greater element whenever found
- repeat the process for minimum element

### Optimized
- take a variable for containment of max and min index of the array
- traverse the given array 
- for every element check wether it is maximum and minimum than the current
- if yes then assign the new index value to the minimum and maximum element
- return the value of max and min

# Learnins
- keepin track of current elements with respect to another elements
- keeping track using certain restrictions and conditions