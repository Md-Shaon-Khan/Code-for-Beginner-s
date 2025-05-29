import java.util.HashMap;

public class Map {
    public static void main(String[] args) {
        HashMap<String,String> haashMap = new HashMap<String ,String>();
        
        haashMap.put("Shaon","Ayan");
        haashMap.put("Ahad","Tuhin");
        haashMap.put("GU","Nayem");

        System.out.println(haashMap);
        System.out.println(haashMap.get("GU"));
        haashMap.remove("Ahad");
        System.out.println(haashMap.get("Ahad"));

        haashMap.put("Abbu","Ammu");
        System.out.println(haashMap.size());

        for(String i : haashMap.keySet())
        {
            System.out.println(i);
        }
        for(String i : haashMap.values())
        {
            System.out.println(i);
        }
    }
    
}
