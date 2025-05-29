public class classObject {
    public static void main(String[] args) {
        Pen pen1 = new Pen();
        Pen pen2 = new Pen();
        pen1.color = "blue";
        pen1.type = "gel";
        
        pen2.color = "White";

        pen1.printColor();
        pen2.printColor();
        //pen1.write();

        Student stu1 = new Student();
        Student stu2 = new Student();

        stu1.name = "Nayem";
        stu2.name = "Shaon";

        stu1.age = 21;
        stu2.age = 20;

        stu1.printInfo();
        stu2.printInfo();
    }
    
}
class Pen{
    String color;
    String type;


    public void write(){
        System.out.println("writing something");
    }

    public void printColor(){
        System.out.println(this.color);
    }

}

class Student{
    String name;
    int age;

    public void printInfo(){
        System.out.println(this.name);
        System.out.println(this.age);
    }

}