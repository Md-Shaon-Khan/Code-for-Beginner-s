import java.util.Scanner;

public class Input_Output {
    public static void main(String[] args) {
        
        System.out.println("Hello World");
        
        String name = "Shaon Khan";
        int age = 21;
        double a = 12.89;
        
        a = 14;

        System.out.println(name);
        System.out.println(age);
        

        //Input

        Scanner inp = new Scanner(System.in);

       

        String name2 = inp.nextLine();//Take full Line
        System.out.println(name2);

        int num1 = inp.nextInt();
        float num2 = inp.nextFloat();

        System.out.println(num1+num2);

    }
    
}
