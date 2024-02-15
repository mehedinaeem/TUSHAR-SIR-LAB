public class BoxDemo {

    public static void main(String args[]) {
        box mybox = new box();
        double vol;

        mybox.width = 10;
        mybox.height = 2;
        mybox.depth = 3;

        String methodOutput = mybox.myMethod();

        System.out.println(methodOutput);

        vol = mybox.depth * mybox.height * mybox.width;
        System.err.println(vol);
    }
}

class box {
    double width;
    double height;
    double depth;

    // Change return type from void to String
    static String myMethod() {
        return "Hello world!";
    }
}
