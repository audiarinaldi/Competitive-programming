#include<stdio.h>

typedef struct Employee{
	int id;
	char name[50];
	int age;
	char position[50];
	int salary;
}Employee;

int linearSearch(Employee emp[], int n, int id){
	int i;
	for(int i = 0; i < n; i++){
		employee curr = emp[i];
		
		if(curr.id == id){
			return i;
		}
	}
}
int main(){
	FILE *fp = fopen("employee.txt", "r");
	
	Employee emp[100];
	int employeeCount = 0;
	
	char buffer[255];
	while(fgets(file, buffer, file) != NULL){
		Employee e;
		
		sscanf(buffer, "%d#[^#]#%d#[^#]#%d",
		&e.id, e.name, &e.age, e.position, &e.salary);
		
		emp[employeeCount] = e;
	}
	fclose(fp);
	
	int n;
	scanf("%d", &n);
	int counter = 1;
	
	for(int i = 1; i <= n; i++){
		int id, salaryRaise;
		scnaf("%d %d", &id, &salaryRaise);
		
		int idx = linearSearch(emp, employeeCount, id);
		if(idx == -1){
			puts("Not found.");
			return;
		}
		Employee e = emp[idx];
		
		printf("Case #%d\n", counter++);
		printf("EmployeeID: %d\n", e.id );
		printf("Name: %s\n", e.name );
		printf("Age: %d\n", e.age );
		printf("Position: %s\n", e.position);
		printf("Salary: %d\n", e.salary);
	}
	return 0;
}
