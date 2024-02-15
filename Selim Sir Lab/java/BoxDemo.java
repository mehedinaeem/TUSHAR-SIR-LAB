
class Box {
    double width;
    double height;
    double depth;

    static String myMethod() {
        return "Hello world!";
    }
    static String myMethod() {
        return "Hello world!";
    }
    static String myMethod() {
        return "Hello world!";
    }
}



class BoxDemo {
    public static void main(String args[]) {
        Box mybox = new Box();
        double vol;
        // assign values to mybox's instance variables
        mybox.width = 10;
        mybox.height = 20;
        mybox.depth = 15;

        Box obj=new Box();
        obj.depth=2;
        obj.height=3;
        obj.width=5;

        double vol2;
        vol2=obj.depth*obj.height*obj.width;


        // compute volume of box
        vol = mybox.width * mybox.height * mybox.depth;
        System.out.println("Volume is " + vol);
        System.out.println("Volume is " + vol2);

        String return_method=mybox.myMethod();
        System.out.println(return_method);
        
    }
}