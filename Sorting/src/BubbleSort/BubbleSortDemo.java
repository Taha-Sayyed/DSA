package BubbleSort;

public class BubbleSortDemo {
    int arr_len;
    int arr[];

    BubbleSortDemo(int arr[]){
        this.arr=arr;
        this.arr_len=arr.length;
    }

    public void BubbleSort(){
        for(int i=0;i<arr_len-1;i++){
            for(int j=0;j<arr_len-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }

    public void display(){
        for(int i=0;i<arr_len;i++){
            System.out.print(arr[i]+" ");
        }
    }

    public static void main(String[] args) {
        int arr[]={8,5,7,3,2};

        BubbleSortDemo obj=new BubbleSortDemo(arr);
        obj.BubbleSort();
        obj.display();
    }

}
