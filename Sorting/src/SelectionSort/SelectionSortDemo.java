package SelectionSort;

public class SelectionSortDemo {

    int arr_len;
    int arr[];

    SelectionSortDemo(int arr[]){
        this.arr_len=arr.length;
        this.arr=arr;
    }

    public void selectionSort(){
        int i,j,k;
        for(i=0;i<arr_len-1;i++){
            j=k=i;
            while(j<arr_len){
                if(arr[j]<arr[k]){
                    k=j;
                    j++;
                }
                else{
                    j++;
                }
            }
            int temp=arr[i];
            arr[i]=arr[k];
            arr[k]=temp;
        }
    }

    public void display(){
        for(int i=0;i<arr_len;i++){
            System.out.print(arr[i]+ " ");
        }
    }

    public static void main(String[] args) {
        int arr[]={8,6,3,2,5,4};
        SelectionSortDemo obj=new SelectionSortDemo(arr);
        obj.selectionSort();
        obj.display();
    }
}




/*
*           ROUGH
*  N=6
*  A [8,6,3,2,5,4]
*
*   8 <- i
*   6
*   3
*   2 <- k
*   5
*   4
*     <- j
*
*
* for(i=0;i<n-1;i++){
*     j=k=i;
    * while(j<n){
    *   if(A[j]<A[k]){
    *       k=j;
    *       j++;
    *   }
    *   else{
    *       j++;
    *   }
    * }
    * swap(A[i],A[k]);
    * }
*
* */