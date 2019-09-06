class Student{
  int roll;
  String name;
  Student(int a,String s){
       roll=a;
       name=s;
  }
  void display(){
       System.out.println("The roll of\t"+name+" is " + roll);
  }
}
class A{
  public static void main(String args[]){
      Student s1=new Student(111,"Rama");
      Student s2=new Student(222,"Shama");
      s1.display();
      s2.display();
}}
      