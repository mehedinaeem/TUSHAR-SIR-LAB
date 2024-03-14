// A simple example of inheritance.
// Create a superclass.
class Superclass {
    int i, j;

    void showij() {
        System.out.println("i and j: " + i + " " + j);
    }
}

// Create a subclass by extending class Superclass.
class Subclass extends Superclass {
    int k;

    void showk() {
        System.out.println("k: " + k);
    }

    void sum() {
        System.out.println("i + j + k: " + (i + j + k));
    }
}

public class SimpleInheritance {
    public static void main(String args[]) {
        Superclass superOb = new Superclass();
        Subclass subOb = new Subclass();

        // Using the superclass by itself.
        superOb.i = 10;
        superOb.j = 20;
        System.out.println("Contents of superOb: ");
        superOb.showij();
        System.out.println();

        // Accessing superclass members through the subclass.
        subOb.i = 7;
        subOb.j = 8;
        subOb.k = 9;
        System.out.println("Contents of subOb: ");
        subOb.showij();
        subOb.showk();
        System.out.println();
        System.out.println("Sum of i, j, and k in subOb:");
        subOb.sum();
    }
}
