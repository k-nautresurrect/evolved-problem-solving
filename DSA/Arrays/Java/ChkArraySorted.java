import java.lang.*;
import java.io.*;
import java.util.*;

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

public class ChkArraySorted{
	public static Scanner in = new Scanner(System.in);
	
	public static void main(String[] args){
		Solution solve = new Solution();
		int[] arr = {3,4,5,1,8};

		System.out.println(solve.bruteForce(arr, arr.length));
		System.out.println(solve.Optimize(arr,arr.length));
	}
}