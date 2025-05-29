import java.util.Scanner;
public class Loop {
    public static void printMyName(String name)
    {
        //System.out.println(name);
         for(int i=1;i<=name.length();i++)
         {
             System.out.println(name);
         }
        return ;
    }

    public static void main(String[] args) {
       // Scanner inp = new Scanner(System.in);
        Scanner inp = new Scanner(System.in);

        String name = inp.nextLine();

        printMyName(name);

        
    }
    
}
