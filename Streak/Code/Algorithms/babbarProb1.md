# Reverse an array :
## question statement states that, we have to reverse the numbers in array
- so for an array [1,2,3,4,5]
- the reversed form is [5,4,3,2,1]

### intution accordingly 
- we have to take the last element and place it in front
- we have to take the front element and place it at last
- repeat this procedure untill we reach at mid

### Brute force Approach
- take an array of size simillar to the array to be reversed
- assign a position pos refring to the first element of the new array
- traverse the array in reverse order and fill the elements in the new array
- increment pos after each insertions
- return the new array

### Optimized
- take refrences to the first and last element start and end
- swap start and end and after each swap increment start by 1 and decrement end by 1
- swap numbers untill start and end will meet or cross each other
- return the array

### Using Inbuilt functionality
- in C++ ``` reverse() ``` function can be used 
- reverse will take 2 aruments starting index of the array and end + 1 index of the array

# learnins
- see how to consume the inner for loop 
- constraints is we have to assume instance of problem
- we have to do operations according to our need and perform the work which is to be done.
- we have a certain statement of keeping track of 
	- in this problem it states that we have to keep track of all the elements that are reversed and all that are not reversed