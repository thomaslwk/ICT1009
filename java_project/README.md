
# Bullet Hell Project - Team 63

ICT1009 OOP Game Project in Java.\
[Project Documentation](https://github.com/sgtechICT1009/ict1009-team63-2021/blob/main/docs/Projectdes.md)

## Game Description: 
The game follows the classic bullet hell game genre where the goal is to evade the oncoming waves of different enemy bullets. The winner is the player that survives the longest within 60 seconds. 

Players are represented by two player models, one blue and one yellow. Each player starts with a full health bar that progressively gets reduced whenever the player model collides with a bullet.

There are a total of three bullets in the game, fast bullet, normal bullet, and straight bullet. Fast bullets are bullets that bounce around at a faster speed than all other bullets. Normal bullets are bullets that move at normal speeds. Straight bullets are bullets that move back and forth along the X-axis. 

Players start on either side of the map, bullets then spawn in bouncing around trying to hit the players. As time goes on the difficulty of the game goes up increasing the number of bullets being spawn. It is now the player's job to dodge the bullets as long as they can with the winner being the last man standing after 60 seconds or whoever has the highest health bar after 60 seconds.



## UML Diagram:
![UML Diagram](https://user-images.githubusercontent.com/26267783/109408773-ae05ca80-79c7-11eb-95b4-e354c707b1b5.png)


## How to run: 
Project compiled on openjdk 15.0.1

```
git clone https://github.com/sgtechICT1009/ict1009-team63-2021.git

cd ict1009-team63-2021

java -jar bullet_hell.jar
```

## Members 
* Thomas Lee Wai Kwong - 2000545
* Nadzimushsyahar Bin Mohd Halel - 2001466 
* Zuriel Nicholas Ching Fei - 2001555
* Crystal Choo Jia Xian - 2002342
* Aloysius Yeo Wei Jie - 2002452
* Ng Jing Yong - 2002478
