package NumberSubstringContaining3Characters;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;


class Brute1{
    ArrayList<Character>ch;
    public Brute1(ArrayList<Character>c){
        ch=c;
    }
    public int substring_count(){
        int count=0;
        for(int i=0;i<ch.size();i++){
            ArrayList<Integer>hasharr=new ArrayList<>(List.of(0,0,0));
            for(int j=i;j<ch.size();j++){
                hasharr.set(ch.get(j)-'a',1);
                if(hasharr.get(0)+hasharr.get(1)+hasharr.get(2)==3){
                    count=count+1;
                }
            }
        }
        return count;
    }
}

class Brute2{
    ArrayList<Character>ch;
    public Brute2(ArrayList<Character>c){
        ch=c;
    }
    public int  substring_count(){
        int count=0;
        for(int i=0;i<ch.size();i++){
            ArrayList<Integer>hasharr=new ArrayList<>(List.of(-1,-1,-1));
            for(int j=i;j<ch.size();j++){
                hasharr.set(ch.get(j)-'a',1);
                if(hasharr.get(0)+hasharr.get(1)+hasharr.get(2)==3){
                    count=count+(ch.size()-j);
                    break;
                }
            }
        }
        return count;
    }
}

class Brute3{
    ArrayList<Character>ch;
    public Brute3(ArrayList<Character>c){
        ch=c;
    }
    public int substring_count(){
        int count=0;
        for(int i=0;i<ch.size();i++){
            Set<Character> s=new HashSet<Character>();
            for(int j=i;j<ch.size();j++){
                s.add(ch.get(j));
                if(s.size()==3){
                    count=count+1;
                }
            }
        }
        return count;
    }
}

class Brute4{
    ArrayList<Character>ch;
    public Brute4(ArrayList<Character>c){
        ch=c;
    }
    public int substring_count(){
        int count=0;
        for(int i=0;i<ch.size();i++){
            Set<Character> s=new HashSet<Character>();
            for(int j=i;j<ch.size();j++){
                s.add(ch.get(j));
                if(s.size()==3){
                    count=count+(ch.size()-j);
                    break;
                }
            }
        }
        return count;
    }
}

public class BruteDemo {
    public static void main(String[] args) {
        ArrayList<Character>arr=new ArrayList<>(List.of('b','b','a','c','b','a'));
        //ArrayList<Character>arr=new ArrayList<>(List.of('a', 'b', 'c', 'a'));
        Brute1 b1=new Brute1(arr);
        Brute2 b2=new Brute2(arr);
        Brute3 b3=new Brute3(arr);
        Brute4 b4=new Brute4(arr);
        System.out.println(b1.substring_count());
        System.out.println(b2.substring_count());
        System.out.println(b3.substring_count());
        System.out.println(b4.substring_count());
    }
}
