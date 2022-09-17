import java.lang.*;
import java.io.*;
import java.util.*;

class Solution {
	public int bruteForce(int[] arr, int n){
		int max = -1;
		for(int pos = 0; pos < n; pos++){
			int current = arr[pos];
			for(int chk = 0; chk < n && chk != pos; chk++){
				if(current > arr[chk])
					max = current;
			}
		}
		return max;
	}

	public int Optimize(int[] arr, int n){
		int maxIndex = 0;
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] > arr[maxIndex])
				maxIndex = pos;
		}
		return arr[maxIndex];
	}
}

public class largestElement{
	public static void main(String[] args){
		int[] arr = {2,3,1,4,5};
		Solution solve = new Solution();
		System.out.println(solve.bruteForce(arr, arr.length));
		System.out.println(solve.Optimize(arr, arr.length));
	}
}