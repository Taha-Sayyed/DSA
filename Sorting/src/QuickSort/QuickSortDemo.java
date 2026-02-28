package QuickSort;
public class QuickSortDemo {
    int arr[];
    int arr_len;
    QuickSortDemo(int arr[]){
        this.arr=arr;
        this.arr_len=arr.length;
    }
    public void swap(int x,int y){
        int temp=x;
        x=y;
        y=temp;
    }
    public int partition(int l,int h){
        int pivot=arr[l];
        int i=l;
        int j=h;
        while(i<j){
            do{
                i++;
            }while(arr[i]<pivot);

            do{
                j--;
            }while(arr[j]>pivot);

            if(i<j){
                int temp1=arr[i];
                arr[i]=arr[j];
                arr[j]=temp1;
            }
        }
        int temp2=arr[l];
        arr[l]=arr[j];
        arr[j]=temp2;
        return j;
    }
    public void QuickSort(int l, int h){
       if(l<h){
           int j=partition(l,h);
           QuickSort(l,j);
           QuickSort(j+1,h);
       }
    }
    public void display(){
        for(int i=0;i<arr_len-1;i++){
            System.out.println(arr[i]);
        }
    }

    public static void main(String[] args) {
        int arr[]={50,70,60,90,40,80,10,20,30,323232};
        QuickSortDemo obj=new QuickSortDemo(arr);
        obj.QuickSort(0,9);
        obj.display();
    }
}

/*
*      ROUGH
*
* A=    [40,30,20,10,50,80,90,60,70]
*        p               i
*                     j
*
*
* public QuickSort(int A, int l, int h){
*       if(l<h){
    *       int j=partition(A,l,h);
    *       QuickSort(A,l,j);
    *       QuickSort(A,j+1,h);
*       }
* }
*

* public int partition(A, int l,int h){
*       int pivot=A[low];
*       int i=l;
*       int j=h;
*       while(i<j){
*           do{
*               i++;
*           }while(A[i]<pivot);
*
*           do{
*               j--;
*           }while(A[j]>pivot);
*
*           if(i<j){
*               swap(A[i],A[j]);
*           }
*       }
*       swap(A[l],A[j]);
*       return j;
* }
*
*
*
* */