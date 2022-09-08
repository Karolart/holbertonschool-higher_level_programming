# 0x0F. Python - Object-relational mapping
____________________________________________________

## Learning Objectives

### General

- Why Python programming is awesome  
- How to connect to a MySQL database from a Python script  
- How to SELECT rows in a MySQL table from a Python script  
- How to INSERT rows in a MySQL table from a Python script  
- What ORM means  
- How to map a Python Class to a MySQL table
_____________________________________________________
## tasks

**0. Get all states**
- Write a script that lists all states from the database hbtn_0e_0_usa
_____________________________________________________
**1. Filter states**
- Write a script that lists all states with a name starting with N (upper N) from the database hbtn_0e_0_usa
_____________________________________________________
**2. Filter states by user input**
- Write a script that takes in an argument and displays all values in the states table of hbtn_0e_0_usa where name matches the argument.
_____________________________________________________
**3. SQL Injection...**
- Wait, do you remember the previous task? Did you test "Arizona'; TRUNCATE TABLE states ; SELECT * FROM states WHERE name = '" as an input?
_____________________________________________________
**4. Cities by states**
- Write a script that lists all cities from the database hbtn_0e_4_usa
_____________________________________________________
**5. All cities by state**
- Write a script that takes in the name of a state as an argument and lists all cities of that state, using the database hbtn_0e_4_usa
_____________________________________________________
**6. First state model**
- Write a python file that contains the class definition of a State and an instance Base = declarative_base
_____________________________________________________
**7. All states via SQLAlchemy**
- Write a script that lists all State objects from the database hbtn_0e_6_usa
_____________________________________________________
**8. First state**
- Write a script that prints the first State object from the database hbtn_0e_6_usa
_____________________________________________________
**9. Contains `a`**
- Write a script that lists all State objects that contain the letter a from the database hbtn_0e_6_usa
_____________________________________________________
**10. Get a state**
- Write a script that prints the State object with the name passed as argument from the database hbtn_0e_6_usa
_____________________________________________________
**11. Add a new state**
- Write a script that adds the State object “Louisiana” to the database hbtn_0e_6_usa
_____________________________________________________
**12. Update a state**
- Write a script that changes the name of a State object from the database hbtn_0e_6_usa
_____________________________________________________
**13. Delete states**
- Write a script that deletes all State objects with a name containing the letter a from the database hbtn_0e_6_usa
_____________________________________________________
**14. Cities in state**
- Write a Python file similar to model_state.py named model_city.py that contains the class definition of a City.
