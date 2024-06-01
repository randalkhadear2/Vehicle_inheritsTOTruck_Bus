# Vehicle_inheritsTOTruck_Bus

Q1:
Create class Vehicle which contains:
- Model ( string )
- Reg_number ( string )
- Speed (int)
- Fule_capacity (double)
- Fule_consumption (double)
- Default & parameterized constructors
- Setters & getters
- Double fuelNeeded(int dis) => method that will take distance then calculate
the amount of fuel that will be needed for that distance as follow :
(fuelNeeded = fuelConsumption * distance).
- double distanceCovered(int hours) => method that will take time (in hours)
as an argument and calculate the distance for the given number of hours as
follow : (distance = vehicleSpeed * hours)
- display method that will display vehicle information .

Create class Truck which inherits from Vehicle class and contains
following attributes :
- cargo_weight_limit ( int )
- Default & parameterized constructors
- Setters & getters
- A display() method which will call parent display() to print Truck
information , and it will print cago_weight_limit with other Truck
information's .

Create class Bus which inherits from Vehicle class and contains following
attributes
- Number_of_passengers ( int )
- Default & parameterized constructors
- Setters & getters
- A display() method which will call parent display() to print Bus information ,
and it will print Number_of_passengers with other Bus information's .

In main :
- Create 3 objects – object of each class , then print each object information .
