package CodeIn;

public class House {

    int houseNumber;
    String City;
    String Owner;


    int getHouNum(){
        return houseNumber;
    }

    String getCity(){
        return City;
    }

    String getOwner(){
        return Owner;
    }

    House(int HN, String C){
        houseNumber = HN;
        City = C;
    }

    House(int HN, String C, String O){
        houseNumber = HN;
        City = C;
        Owner = O;
    }

}
