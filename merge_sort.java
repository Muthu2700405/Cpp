import java.util.Arrays;
import java.util.Scanner;

public class merge_sort{
    public static void main(String[] args) {
        Scanner jk= new Scanner(System.in);
        int num=jk.nextInt();

        int []arr = new int[num];

        for (int i=0;i<num;i++){
            arr[i]=jk.nextInt();
        }
         for (int i=0;i<num;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println("");
        System.out.println("Sorted Array : ");

        int []arrm=merge(arr);
         for (int i=0;i<num;i++){
            System.out.print(arrm[i]+" ");
        }
        
    }
    public static int [] merge(int arr[]){
        if (arr.length<=1){
            return arr;
        }
        int mid=arr.length/2;

        int [] left = merge(Arrays.copyOfRange(arr, 0, mid));
        int [] right = merge(Arrays.copyOfRange(arr, mid, arr.length));

        return merging(left,right);

    }

    public static  int [] merging(int first[], int second[]){
        int i=0,j=0,k=0;
        int []merged = new int[first.length+second.length];
        while (i<first.length && j< second.length){
            if (first[i]<second[j]){
                merged[k]=first[i];
                i++;
            }
            else {
                merged[k]=second[j];
                j++;
            }
            k++;
        }
        while (i<first.length){
            merged[k]=first[i];
            i++;
            k++;
        }
        while (j<second.length){
            merged[k]=second[j];
            j++;
            k++;
        }
        return merged;
    }





}