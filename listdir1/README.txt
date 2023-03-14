READ ME
In order to run the code you will need to open the CMD and get to the directory where your executable file named listdir1(.exe) is at. 
Once you are in the directory, you will need to execute it in the CMD and click enter. In the following line enter the 

For the code I print a message asking you to enter the directoy you want to use.Then after you enter the directory, this directory is assigned to a string variable called "dir_name".
Then just to make sure you are in the directory you want I printed the directory entered in the console. 
After that, i created a json object called files.
This object will contain all of our database information for every file found in the directory. 
Then I added a for that will iterate every file found in the directory so that the information for each file is saved in the json file named "file".
Inside the for I used an attribute from the silesystem library called "file_name" to obtain the name of the files that I am analyzing.
Similarly, I used another attribute from the silesystem library called "file_size", to obtain the size of every file I am analyzing.
After obtaining both values (the name of the file and the size of the file), I created a json object named "file_obj".
Then to this json object called "file_obj" I added the names "name" and "size" and assigned the corresponding values using "file_name" and "file_size" consecutively.
I added the json object since we were required to have the json file with a apecific sintaxis and order which was as follows:
{ "files": [
     {"name":"texto1.txt","size":450},
     {"name":"texto2.txt","size":950}]}
Then before ending the "for" i added the object called "file_obj" to our file named "files".
After the "for", we create a add the root of the files that we have created, to the json object called "root".
Finally, we create the json file and name it "file.json". This file will be the one that contains the names and sizes of every file within our directory.
