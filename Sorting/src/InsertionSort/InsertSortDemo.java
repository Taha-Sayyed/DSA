package InsertionSort;

public class InsertSortDemo {
    int arr_len;
    int arr[];

    InsertSortDemo(int arr[]){
        this.arr=arr;
        this.arr_len=arr.length;
    }

    public void InsertSort(){
        for(int i=0;i<arr_len;i++){
            int j=i-1;
            int temp=arr[i];
            while(j>-1 && arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }
    }

    public void display(){
        for(int i=0;i<arr_len;i++){
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        int arr[]={8,5,7,3,2};
        InsertSortDemo obj=new InsertSortDemo(arr);
        obj.InsertSort();
        obj.display();
    }
}
