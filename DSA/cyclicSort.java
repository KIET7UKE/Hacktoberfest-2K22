// PROGRAM TO IMPLEMENT CYCLIC SORT

import java.util.Arrays;

public class cyclicSort {
    public static void main(String[] args) {
        int[] arr={3,5,2,1,4};
        cSort(arr);
        System.out.print(Arrays.toString(arr));
    }
    public static void cSort(int[] arr){
        int i=0;
        while(i<arr.length){

            // arr[i] if array value starts from 0 else arr[i] - 1
            int correct = arr[i]-1;
            if(arr[i]!=arr[correct]){
                int temp=arr[correct];
                arr[correct]=arr[i];
                arr[i]=temp;
            }
            else{
                i++;
            }
        }
    }
}
