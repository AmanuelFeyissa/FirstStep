public class FirstStep {
    public static void printStrings(String alpha, int num) {
        String result = "";
        for( int i = 0; i < num; i++){
            //alpha += alpha;
           result = result + alpha;

        }
        System.out.println(result);
    }
    public static void main(String[] args){
        printStrings("hello", 5);
        
    }

}