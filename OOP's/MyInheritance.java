class MyInheritance
{
    public static void main(String args[])
    {
        Teacher t=new Teacher();
        
        t.name="Mr. Khan";
        t.eat();
        t.walk();
        t.teach();
        
        Singer s =new Singer();
        
        s.name="Mrs. Das";
        s.eat();
        s.walk();
        s.sing();
        
        System.out.println( t instanceof Teacher); //true
        System.out.println( t instanceof Person);  //true
        System.out.println( s instanceof Singer);  //true
        
        //Upcasting
        
        Teacher t1 =new Teacher();
        Person p1=t1;
        
        System.out.println( p1 instanceof Teacher);  //true
        System.out.println( p1 instanceof Singer);   //false
        
        //Downcasting
        
        Singer s2 =new Singer();
        Person p2 =s2;
        Singer s3=(Singer)p2;
        
        System.out.println( p2 instanceof Person);  //true
        System.out.println( p2 instanceof Singer);   //true
        
        System.out.println( s3 instanceof Person);  //true
        System.out.println( s3 instanceof Singer);   //true
    }
    
}
class Person
{
    protected String name;
    
    public void walk()
    {
        System.out.println(name +" is walking");
    }
    public void eat()
    {
        System.out.println(name +" is eating");
    }
}
class Teacher extends Person
{
    public void teach()
    {
        System.out.println(name +" is teaching");
    }
}
class Singer extends Person
{
    public void sing()
    {
        System.out.println(name +" is singing");
    }
}