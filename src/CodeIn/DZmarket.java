package CodeIn;

public class DZmarket {

    public static void main(String[] args){
        Market DZ = new Market("Orange",12);
        DZ.calcTotal();
        System.out.println("The Calculated Total Value is " + DZ.calcTotal());
    }
}
