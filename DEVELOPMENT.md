# Development

---
 - **4/14/20** Came up with project proposal of a beat maker  application

 - **4/23/20** Added the libraries into the Code, Was unable to do much this week because I was busy with other classes. 
 have to do a lot more next week.
 
 - **4/27/20** Have not committed anything because of fear of ruining the original file and have to deal with that 
 problem. I have decided that I took on more than I can chew and I am changing my app to a piano. Things to Do:
   -[x] Add ImGui Window
   -[ ] Setup UI
   -[ ] Add Music Files
   
 - **4/28/20** Added the the ImGui window to the code, however there was problems with the imgui not displaying 
    and kept running into exit code 11, this was solved by debugging and seeing the message within the code comments.
    The problem was it was not initializing correctly. I discovered the missing function was because there are two forms
    of ImGui, the one I added externally and the one built into Cinder. However I think they are both working together 
    now. I was able to display one of the windows, but it was incredibly bugging and was leaving a trail behind it when 
    I moved it. Things to do:
    -[ ] Fix Bugs with the ImGui Window
    -[ ] Set up other components of the UI
    
 - **4/29/20** I fixed the problem with the trailing windows in the imgui window. I established the initial classes that
    I will use for the piano and its notes. I need to think of a way to use the UI to make the piano appear and animated.
    I might as a window that lets you adjust the octave, but that causes a lot of problems. I added the keyboard playing 
    functionality though. It's very choppy but it's there. 