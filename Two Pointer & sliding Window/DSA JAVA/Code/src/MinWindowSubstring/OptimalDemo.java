package MinWindowSubstring;

import java.util.HashMap;
import java.util.Map;

class Optimal{
    String str1;
    String str2;
    public Optimal(String st1,String st2){
        str1=st1;
        str2=st2;
    }
    public int min_len(){
        int minlen=Integer.MAX_VALUE;
        int count=0;
        int l=0;
        int r=0;
        Map<Character,Integer>mp=new HashMap<>();
        for(int i=0;i<str2.length();i++){
            mp.put(str2.charAt(i),mp.getOrDefault(str2.charAt(i),0)+1);
        }

        while(r<str1.length()){
            if(mp.getOrDefault(str1.charAt(r), 0)>0){
                count+=1;
            }
            mp.put(str1.charAt(r), mp.getOrDefault(str1.charAt(r),0)-1);
            while(count==str2.length()){
                minlen=Math.min(minlen,r-l+1);
                mp.put(str1.charAt(l),mp.getOrDefault(str1.charAt(l), 0)+1);

                if(mp.getOrDefault(str1.charAt(l),0)>0){
                    count=count-1;
                }
                l=l+1;
            }
            r=r+1;
        }
        return minlen;
    }
}


public class OptimalDemo {
    public static void main(String[] args) {
        String str1=new String("ddaaabbca");
        String str2="abc";
        Optimal o=new Optimal(str1,str2);
        System.out.println(o.min_len());
    }
}
