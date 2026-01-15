package LongestRepeatingCharacterReplacement;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

class Better{
    String st;
    int l=0;
    int r=0;
    public Better(String s){
        st=s;
    }
    public int substring_count(int k){
        Map<Character,Integer> m=new HashMap<>();
        int maxfreq=0;
        int maxlen=0;
        while(r<st.length()){
            m.put(st.charAt(r), m.getOrDefault(st.charAt(r), 0) + 1);

            maxfreq= Collections.max(m.values());
            int change=(r-l+1)-maxfreq;

            if(change<=k){
                maxlen=Math.max(maxlen,r-l+1);
            }

            while(change>k){
                m.put(st.charAt(l),(Integer)m.get(st.charAt(l))-1);
                l++;
                maxfreq= Collections.max(m.values());
                change=(r-l+1)-maxfreq;
            }
            r++;
        }
        return maxlen;
    }
}

public class BetterDemo {
    public static void main(String[] args) {
        String st=new String("ABAB");
        Better b=new Better(st);
        System.out.println(b.substring_count(1));
    }
}
