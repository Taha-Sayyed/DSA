let weights= [1,2,3,4,5,6,7,8,9,10];
let d=5;

class Solution{

    daysReqd(weights,capacity){
        let day=1;
        let load=0;
        for(let w of weights){
            if(load+w>capacity){
                day++;
                load=w;
            }
            else{
                load=load+w;
            }
        }
        return day;
    }

    leastCapacity(weights,d){
        let left=Math.min(...weights);
        let right=weights.reduce((a,b)=>{
            return a+b;
        },0);

        for(let cap=left;cap<=right;cap++){
            let daysRequire=this.daysReqd(weights,cap);
            if(daysRequire<=d){
                return cap;
            }
        }
        return right;
    }
}

const obj=new Solution();
console.log(obj.leastCapacity(weights,5));
