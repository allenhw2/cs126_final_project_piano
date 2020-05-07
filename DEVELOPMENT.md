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
    
 - **4/30/20** I looked around the code trying to figure out a way so that you can hold a note down to have it continue 
 playing, but the cinder audio library is too limited and you cannot do that. So Instead I just have the note stop 
 playing and then start playing again so it repeats. In the past however you could play chords, now that is no longer 
 case. I personally chose the option of having it repeat and have sustained notes vs chords. 
 
 - **5/1/20** I tried seeing if there was a library I could use to manipulate the sound files to change pitch, and I 
 think there is a complex option in the Cinder Audio Library, but its not compatible with the object type I am currently
 using and I am unsure how tot use the other option. My solution was to create an option to change the pitch in the gui
 and just use different sound files for the different octaves of sound. 

 - **5/3/20** oh yeah I forgot to state that I got the ImGui window working and I added an option to select either high 
 pitch or low pitch option for the keyboard.
 
 - **5/4/20** I found a way to animate the keys so that you can see when you have pressed them visually, but in order to
 make it clean I need to make another class for the piano note itself. 
 
 - **5/5/20** I tried adding the Note class and Engine class to clean the code up but my libraries got all messed up and
 I can no longer use STD in the classes so I decided to give up on that option for it is a problem that I have no idea 
 how to fix in my oen power. All that's left is to clean things up and add the readme.
 
 - **5/6/20** cleaned up code, added comments, added volume control, and finally finished the docs. 