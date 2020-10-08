class Vechicle
{
    int wheels,headlights;
    
    String color,VechicleNum;
    
    Vechicle()
    {
        System.out.println("You can creat Object with different Class name also.");
    }
    
    Vechicle(int wheels) //as verible name 'wheels' is same as global verible name we have to use 'this' keyword
    {
        this.wheels=wheels;
    }
    Vechicle(String num)  //as verible name 'num' is not same as global verible name, 'this' keyword is not used.
    {
        VechicleNum=num;
    }
    Vechicle(int wheels,String color)
    {
        this.wheels=wheels;
        this.color=color;
    }
    
}

public class MyConstructor
{
    MyConstructor()
    {
        System.out.println("You can creat Object with same Class name also.");
    }
    public static void main(String args[])
    {
        MyConstructor obj=new MyConstructor();
        
        Vechicle myDefult=new Vechicle();
        
        Vechicle car=new Vechicle(4);
        Vechicle bike=new Vechicle(2,"red");
        Vechicle scooty=new Vechicle("JH 05W 8633");
        
        System.out.println("Car has "+ car.wheels+" wheels.");
        System.out.println("This "+ bike.color +" bike has "+bike.wheels+" wheels.");
        System.out.println("Vechicle Number of my scooty " +scooty.VechicleNum+".");
        
    }
    
    
    
    
    
}