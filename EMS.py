import os

class Employee:
    def __init__(self, emp_id, name, position, salary):
        self.emp_id = emp_id
        self.name = name
        self.position = position
        self.salary = salary

class EmployeeManagementSystem:
    def __init__(self):
        self.employees = []

    def clear_screen(self):
        os.system('cls' if os.name == 'nt' else 'clear')

    def display_menu(self):
        print("Employee Management System")
        print("1. Add Employee")
        print("2. View Employees")
        print("3. Update Employee")
        print("4. Delete Employee")
        print("5. Exit")

    def validate_salary(self, salary):
        try:
            salary = float(salary)
            if salary < 0:
                raise ValueError("Salary must be a non-negative number.")
            return salary
        except ValueError:
            print("Invalid salary. Please enter a valid number.")
            return None

    def add_employee(self):
        emp_id = input("Enter Employee ID: ")
        name = input("Enter Employee Name: ")
        position = input("Enter Employee Position: ")
        salary = None
        while salary is None:
            salary = self.validate_salary(input("Enter Employee Salary: "))

        employee = Employee(emp_id, name, position, salary)
        self.employees.append(employee)
        print("Employee added successfully!")

    def view_employees(self):
        if not self.employees:
            print("No employees found.")
        else:
            for employee in self.employees:
                print(f"ID: {employee.emp_id}, Name: {employee.name}, Position: {employee.position}, Salary: {employee.salary}")

    def update_employee(self):
        emp_id = input("Enter Employee ID to update: ")
        for employee in self.employees:
            if employee.emp_id == emp_id:
                employee.name = input("Enter Updated Name: ")
                employee.position = input("Enter Updated Position: ")
                new_salary = None
                while new_salary is None:
                    new_salary = self.validate_salary(input("Enter Updated Salary: "))
                employee.salary = new_salary
                print("Employee updated successfully!")
                return
        print("Employee not found.")

    def delete_employee(self):
        emp_id = input("Enter Employee ID to delete: ")
        for employee in self.employees:
            if employee.emp_id == emp_id:
                self.employees.remove(employee)
                print("Employee deleted successfully!")
                return
        print("Employee not found.")

    def run(self):
        while True:
            self.clear_screen()
            self.display_menu()

            choice = input("Enter your choice: ")

            if choice == '1':
                self.add_employee()
            elif choice == '2':
                self.view_employees()
            elif choice == '3':
                self.update_employee()
            elif choice == '4':
                self.delete_employee()
            elif choice == '5':
                print("Exiting the program. Goodbye!")
                break
            else:
                input("Invalid choice. Press Enter to continue.")

if __name__ == "__main__":
    emp_sys = EmployeeManagementSystem()
    emp_sys.run()
