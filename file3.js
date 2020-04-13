package manager;


public class Manager {

    public static void main(String[] args) {
        
        employee k=new employee();
        k.setname("Robert");
        k.setyear(1994);
        k.setaddress("64C-WallsStreet");
        System.out.println("Name          Year of joining          Address");
        System.out.println(k.getname()+"        "+k.getyear()+"                 "+k.getaddress());
        k.setname("Sam");
        k.setyear(2000);
        k.setaddress("68D-WallsStreet");
        System.out.println(k.getname()+"           "+k.getyear()+"                 "+k.getaddress());
        k.setname("John");
        k.setyear(1999);
        k.setaddress("26B-WallsStreet");
        System.out.println(k.getname()+"          "+k.getyear()+"                 "+k.getaddress());
   
    }
    
}



 class employee {
    
     private String name="John cena";
     private int year=000;
     private String ad1="Banglore street";
     public void setname(String n){
         name=n;
     }
     public String getname(){
         
         return name;
        
    }
     public void setyear(int years){
         
         
     year=years;
     }
     public int getyear(){
         return year;
     }
     public void setaddress(String n2){
         ad1=n2;
     }
     public String getaddress(){
         return ad1;
     }
}


