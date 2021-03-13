# Project Documentation 
Java OOP Project\
Team 63

## Project Description:
* Shoot 'em up "Bullet Curtain" style game 
* 2 Players are required to use keyboard controls to navigate their player models to avoid the oncoming wave of bullets 
* The number of bullets spawned will increase at a set time interval 
* Each game will consist of  60 second round time 
* Players will have their respective health bars. Upon contact with a bullet, the health bar will deplete
* In the event Player 1 is out of health before the round is over, Player 2 will be victorious 
* In the event Player 2 is out of health before the round is over, Player 1 will be victorious 
* In the event both Players are still alive after the end of 60 seconds, the Player with the higher remaining health will be victorious
* Player's can reference their score by glancing at the remaining health bar which provides visual reference to current score

## Tool Name:
**Bullet Hell**

## MosCow Matrix:
_Features that are good to have and would include if time permits._
<img width="609" alt="MosCow Table" src="https://user-images.githubusercontent.com/26267783/109410617-127c5600-79d7-11eb-9fe2-8a49b5f3d703.png">

## Comprehensive Description:
The game follows the classic bullet hell game genre where the goal is to evade the oncoming waves of different enemy bullets. The winner is the player that survives the longest within 60 seconds. 

Players are represented by two player models, one blue and one yellow. Each player starts with a full health bar that progressively gets reduced whenever the player model collides with a bullet.

<img width="610" alt="In-game Screen" src="https://user-images.githubusercontent.com/26267783/109409992-1063c880-79d2-11eb-9e78-1af0bee118c0.png">

There are a total of three bullets in the game, fast bullet, normal bullet, and straight bullet. Fast bullets are bullets that bounce around at a faster speed than all other bullets. Normal bullets are bullets that move at normal speeds. Straight bullets are bullets that move back and forth along the X-axis. 

Players start on either side of the map, bullets then spawn in bouncing around trying to hit the players. As time goes on the difficulty of the game goes up increasing the number of bullets being spawn. It is now the player's job to dodge the bullets as long as they can with the winner being the last man standing after 60 seconds or whoever has the highest health bar after 60 seconds.

<img width="610" alt="Victory Screen" src="https://user-images.githubusercontent.com/26267783/109409995-1a85c700-79d2-11eb-93df-2d0eeb1edd92.png">

## Uml Diagram:
![UML Diagram](https://user-images.githubusercontent.com/26267783/109408773-ae05ca80-79c7-11eb-95b4-e354c707b1b5.png)
