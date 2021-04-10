/*class Department implements Cloneable{
	int departmentId;
	String departmentName;
	
	public Department(int id, String name)
	{
		this.departmentId = id;
		this.departmentName = name;
	}
	
	
	protected Object clone() throws CloneNotSupportedException{
		
        return super.clone();
	}
}*/

class Department {
	int departmentId;
	String departmentName;
	
	public Department(int id, String name)
	{
		this.departmentId = id;
		this.departmentName = name;
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
	
	/*public int getEmpoyeeId() {
        return employeeId;
    }
 
    public void setEmpoyeeId(int empoyeeId) {
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
    }*/
	
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
	
	Department dept = new Department(1,"human resources");
	Employee original = new Employee(1,"Admin",dept);
	Employee cloned = (Employee) original.clone();
	
	
	
	cloned.department.departmentName = "Finance";
	//System.out.println(original!=cloned);
	//System.out.println(original.getClass()==cloned.getClass());
	System.out.print(original.equals(cloned)+" ");
	System.out.print(cloned.department.departmentName+" ");
	System.out.print(original.department.departmentName);
	}
}

