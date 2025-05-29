// class parent_class{  
//     void print() {   /*method to print inside the parent class */
//        System.out.println("Inside parent class");  
//     }  
//  }  
//  class child_class extends parent_class {  
//     void print(){  
//        System.out.println("Inside child class");  
//     }  
//  }  
//  class upcasting_cn{  
//     public static void main(String args[]) {  
         
//        parent_class object_1 = new child_class();  
//        parent_class object_2 =  new child_class();  
//        parent_class object_3= new parent_class();
//        object_1.print();  
//        object_2.print();  
//        object_3.print();
//     }  
//  }  
//Parent class  
// 
class Parent {
    void show() { System.out.println("Parent's show()"); }
}

// Inherited class
class Child extends Parent {
    // This method overrides show() of Parent
    void display()
    {
        System.out.println("Child's show()");
    }
}

// Driver class
class Main {
    public static void main(String[] args)
    {
        // If a Parent type reference refers
        // to a Parent object, then Parent's
        // show is called
        Parent obj1 = new Parent();
        obj1.show();

        // If a Parent type reference refers
        // to a Child object Child's show()
        // is called. This is called RUN TIME
        // POLYMORPHISM.
        Parent obj2 = new Child();
        obj2.show();
        Child obj3 = new Child();
        obj3.display();
    }
}