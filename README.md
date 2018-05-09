# ObjectOrientedDesign-project2

This project is developed in C++

In this project, 
I have developed a type table in this project based on which a dependency table is created.
This dependency table maps the dependent files to the input file and thus displays all the dependent files.
The type table is created using a tokeniser that tokenises the input file to find out the header files from it.
These header files are then looked for in the given document
If these header files are found, the dependency table displays this files as dependent on the all the included header files
