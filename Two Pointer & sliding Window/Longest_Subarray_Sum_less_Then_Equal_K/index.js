/*
                            ROUGH
AIM: To find the longest subarray with sum less then equal to k

length=5
A       2   5   1   7   10
index   0   1   2   3   4
                l
                            r

k=14
sum=2+5->7+2->9+3->11+4->15-2->13
maxLen=0->1->2->3

*/


const arr=[2,5,1,7,10];
let k=14;

class LongestSubarray{
    constructor(input_arr,k){
        this.arr=input_arr;
        this.arr_len=input_arr.length;
        this.k=k;
    }
    findLongestSubarray(){
        let l=0;
        let r=0;
        let sum=0;
        let maxLen=-Infinity;

        while(r<this.arr_len){
            sum=sum+this.arr[r];
            while(sum>this.k){
                sum=sum-this.arr[l];
                l++;
            }
            if(sum<=this.k){
                maxLen=Math.max(maxLen,r-l+1);
            }
            r=r+1;
        }
        return maxLen;
    }
}

let obj=new LongestSubarray(arr,14);
console.log(obj.findLongestSubarray());

