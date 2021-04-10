// class Department{
// 	int departmentId;
// 	String departmentName;
// 	public Department(int id, String name){
// 		this.departmentId = id;
// 		this.departmentName = name;
// 	}
// }

class Department implements Cloneable{
	int departmentId;
	String departmentName;
	public Department(int id, String name){
		this.departmentId = id;
		this.departmentName = name;
	}
	@Override
	protected Object clone() throws CloneNotSupportedException{
	    return super.clone();
	}
}

class Employee implements Cloneable{
	private int employeeId;
	private String employeeName;
	Department department;
	
	public Employee(int id, String name,Department dept)
	{
		this.employeeId = id;
		this.employeeName = name;
		this.department = dept;
	}
	
	// Getter and setter method 
	public int getEmployeeId() {
        return employeeId;
    }
    public void setEmployeeId(int empoyeeId) {
        this.employeeId = empoyeeId;
    }
    public String getemployeeName() {
        return employeeName;
    }
    public void setemployeeName(String employeeName) {
        this.employeeName = employeeName;
    }
    public Department getDepartment() {
        return department;
    }
    public void setDepartment(Department department) {
        this.department = department;
    }
    @Override
	protected Object clone() throws CloneNotSupportedException{
		//Employee empClone = (Employee) super.clone();
		//empClone.setDepartment((Department)empClone.getDepartment().clone());    
		return super.clone();
        //return empClone;
	}
	
	
	//@Override
    /*public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (!(o instanceof Employee)) {
            return false;
        }
        Employee e = (Employee)o;
        return employeeName.equals(e.employeeName)
                && employeeId == employeeId && department.departmentName.equals(e.department.departmentName)
                && department.departmentId == e.department.departmentId;
                
    }*/
}


public class TestCloning  {
	public static void main(String args[])throws CloneNotSupportedException{
	
	Department department = new Department(1,"human resources");
	Employee original = new Employee(2,"Admin",department);
	// Create clone of original object 
	Employee cloned = (Employee) original.clone();
	//Test employee original 
	System.out.println(original.getEmployeeId());
	// Verify using emloyer id, if cloning actually worked  
	System.out.println(cloned.getEmployeeId());
	
	cloned.department.departmentName = "Finance";
	//Must be true and objects must have different memory address 
	System.out.println(original!=cloned);
	//As returning same class; so it should also be true
	System.out.println(original.getClass()==cloned.getClass());

	//Testing lines 
	System.out.println(original.getDepartment());
	System.out.println(cloned.getDepartment());

	//Default equals method checks for references so it should be false. 
	//If we want to make it true, we need to override equals method in employee class. 
	// System.out.print("Check if original equals clone: " + original.equals(cloned));
	// System.out.print(cloned.department.departmentName+" ");
	// System.out.print(original.department.departmentName);
	}
}

