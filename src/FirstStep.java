public class FirstStep {
    public static void printStrings(String alpha, int num) {
        String result = "";
        for( int i = 0; i < num; i++){
            //alpha += alpha;
           result = result + alpha;

        }
        System.out.println(result);
    }
    //Simple Test Calculator
    public static void simpleCalc(){
        int sum, var1, var2;
        var1 = 7;
        var2 = 43;
        sum = var1 + var2;
        System.out.println(sum);
    }
    public static void main(String[] args){
        printStrings("hello", 5);
        simpleCalc();
    }

}