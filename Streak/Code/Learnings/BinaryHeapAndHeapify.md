# Construction of binary heap
## Binary heap is a data structure which is a complete tree left skewed
- min heap
- max heap

## To construct a max heap
- we need to satisfy 2 condition
	- it must be a complete binary tree
	- the root element is always greater then the child elements

### intution
- insert the elements from an array firstly on leaf nodes
- using formula ``` 2*index + 1 ``` for left part and ``` 2*index + 2``` for right part to ensure that every left part is odd and every right part consist of even index.
- check the 2nd property by ensuring that the maximum element from left right and root node will always be on top
- check the 2nd property untill the heap completly build up


### Algorithm

```ruby
buildHeap(int arr[], int size)
1. treeHeight <- size/2
2. for(levels from : treeHeight -> 0)
3. 		heapify(arr, levels, size)

heapify(int arr[], int levels, int size)
1. leftNode <- 2*levels + 1, rightNode <- 2*levels + 2
2. rootToBeMax <- levels
3. if leftNode < size and arr.at(leftNode) > arr.at(rootToBeMax)
4. 		rootToBeMax <- leftNode
5. if rightNode < size and arr.at(rightNode) > arr.at(rootToBeMax)
6. 		rootToBeMax <- rightNode
7. if rootToBeMax != levels
8. 		swap(rootToBeMax, levels)
9. 		heapify(arr, rootToBeMax, size)
```