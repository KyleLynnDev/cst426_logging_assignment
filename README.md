# cst426
Repo for advanced Game Development Logging assignment in c++

My work partner was Freddie :> 

I am not super comofortable working with cpp so we looked at a few different sources. I have a few books that are helping me understand topics, I like the website Learn X in Y Minutes
to show the syntax for a a lot of common features I've seen before in other languages. Another one is Geeks for Geeks, their tutorials are pretty enlightening. 
The way we made this was to first try to figure out how to read and write to files, that wasn't very difficult to learn because we found some resources online. 
Ok, so next we needed to figure out how to properly link the files together, and I struggled with this because we tried to throw the class declerations inside of one header file.
Then we realized it would be easier to give every class its own header file and that worked. Ok great, so we were able to get he log working with printing to the console, AND 
writing to the file. Wonderful. I wasn't sure how to handle initiialization but I asked and professor said we need to set the level of priority of messages as a sort of filter
so I implemented being able to set the level and then it only displays the correct messages, INFO by default, ERROR and INFO if ERROR is set, and everything if WARNING is set. 

I think that covers everything from the requirements as I understand it. 
