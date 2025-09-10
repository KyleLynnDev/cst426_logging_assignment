# cst426
Repo for advanced Game Development Logging assignment in c++

My work partner was Freddie :> 
The way we made this was to first try to figure out how to read and write to files, that wasn't very difficult to learn because we found some resources online. 
Ok, so next we needed to figure out how to properly link the files together, and I struggled with this because we tried to throw the class declerations inside of one header file.
Then we realized it would be easier to give every class its own header file and that worked. Ok great, so we were able to get he log working with printing to the console, AND 
writing to the file. Wonderful. I wasn't sure how to handle initiialization but I asked and professor said we need to set the level of priority of messages as a sort of filter
so I implemented being able to set the level and then it only displays the correct messages, INFO by default, ERROR and INFO if ERROR is set, and everything if WARNING is set. 

I think that covers everything from the requirements as I understand it. 
