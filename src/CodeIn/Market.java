package CodeIn;

public class Market {

    double Price = 5.5;
    String Product;
    int Quantity;

    Market(String Prod, int Quan){
        this.Product = Prod;
        this.Quantity = Quan;
    }

    double getPrice(){
        return Price;
    }

    String getProduct(){
        return Product;
    }

    int getQuantity(){
        return Quantity;
    }

    double calcTotal(){
        return (Price * Quantity);
    }
}
