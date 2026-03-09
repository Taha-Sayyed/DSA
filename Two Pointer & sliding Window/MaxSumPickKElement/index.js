/*          ROUGH


Aim: To find the Maximum sum of the subarray by picking k elements

length=7

A   -1   2   3   3   4   5   -1
     0   1   2   3   4   5    6 
     l
                 r

k=4


for(int i=0;i<k;i++){
    sum=sum+A[i];
}

while(r<length){
    sum=sum-A[l];
    l++;
    r++;
    sum=sum+A[r];
    maxSum=Max(sum,maxSum);
}

*/


const arr=[-1,2,3,3,4,5,-1];
let k=4;

class MaxSum{
    constructor(input_arr,k){
        this.arr=input_arr;
        this.arr_length=input_arr.length;
        this.k=k;
    }
    findMaxSum(){
        let sum=0;
        let l=0;
        let r=this.k-1;
        let maxSum=0;
        for(let i=0;i<k;i++){
            sum=sum+this.arr[i];
        }
        maxSum=sum;
        while(r<this.arr_length-1){
            sum=sum-this.arr[l];
            l++;
            r++;
            sum=sum+this.arr[r];
            maxSum=Math.max(sum,maxSum);
        }
        return maxSum;
    }
}

let obj=new MaxSum(arr,k);
console.log(obj.findMaxSum());

