package NumberSubstringContaining3Characters;
import java.sql.Array;
import java.util.ArrayList;
import java.util.List;


class Optimal{
    String st;

    public Optimal(String s){
        st=s;
    }
    public int Min(int a, int b, int c) {
        return Math.min(a, Math.min(b, c));
    }

    public int substring_count(){
        ArrayList<Integer>lastseen=new ArrayList<Integer>(List.of(-1,-1,-1));
        int count=0;
        for(int i=0;i<st.length();i++){
            lastseen.set(st.charAt(i)-'a',i);
            if(lastseen.get(0)!=-1 && lastseen.get(1)!=-1 && lastseen.get(2)!=-1){
                count=count+(1+Min(lastseen.get(0),lastseen.get(1),lastseen.get(2)));
            }
        }
        return count;
    }
}

public class OptimalDemo {
    public static void main(String[] args) {
        String s=new String("bbacba");
        Optimal o=new Optimal(s);
        System.out.println(o.substring_count());


    }
}
