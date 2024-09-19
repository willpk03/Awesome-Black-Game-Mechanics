- Dialogue
		<br> Markup Reader
		<br> Dialogue Customization
		<br> Dialogue Events
- Interaction
		<br> Different Types of Interaction
		<br> Using Interfaces
- Puzzle Menu
		<br> Puzzle Pieces



### Dialogue
Dialogue System handled everything that occured the second the Dialogue showed on screen to the moment it disappeared. 

##### Storing Each line
> Note: Due to the prototype stage it is in I couldn't go onto my next step of moving structures into datatables using the structures formed.

Using Structures it was easy enough to store all possible information for each seperate line. An array of these structures would be what consists a character dialogue. 

Not all variables in the structure needed to be filled in but determined by the Dialogue Type selected certain parts of the Structure would need to be filled in. 

###### Dialogue Types
> Note: With further time I would of liked to explore the ability to only have certain parts of the Structure show up determined by which structure you selected.

Dialogue Types was a Enumarator created to store a collection of options that would changed what occured for that line. 
IE this can be moving an NPC, giving the ability to choose dialogue, printing out dialogue if you meet a certain logic.

Inside the system, the nextLine function would use a switch statement of the enumerator to determine what would occur next. As you can with this image, that showcases the Switch Statement, the plain text output and part of what the dialogue option dsiplay option.

#### Dialogue TextHandler
Dialogue TextHandler is the function that handles all the stuff that is centered with the dialogue text in the event graph. In the nextLine Fuction it is called whenever needed for a Dialogue Type. Below is an example of this for a just a plain printing of text.

// Image here //

Inside the TextHanler there are three main areas of the system. The beginnning saves and resets of Variables and style of the Text box, The per loop changes, and the Mark Up reader.

The **Save and Reset** is where different variables are set back to their default settings and modified for the function. There is nothing to highlight here.

The **Per Loop Changes** is where there are checks for any Markup appearing, checks if it needs to speed up dialogue printing, and runs any changes per character.

The **Markup Reader** is a section that breaks off from the flow of the loop, if there appears a '<' in the next character to be printed. The Markup Reader area grabs the full text inside the markup `<happy>` and then another function handles verifying that the markup actually exists. 

//Add image here//

A Markup is an identifier for a style or an effect change that wants to be occured. This was usually used to either highlight specific words or to emphasize the emotions of the player at that time.

##### Dialogue Customization
With the game being a narratively driven game a focus on bringing to life the characters the players interacted with. This done through the use of creating personality through the text that represented them. From basic things like the color that is used to display their name to the picture that represents them to more specific things like how differently we show their emotions or how fast or slow they may speak (through speed of printing out the text). All of this to create indiviuality through the dialogue. 

###Interaction System

### Puzzle Menu
