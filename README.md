# Enemy

This game was made during my internship for OOP self-learning purposes.

## Prerequisites

- terminal
- g++ with c++11 support.

## How to run it?

Use makefile to compile a binary output.

```bash
cd <repository_root_dir>
make all
```

Then run game using below command.

```cpp
./enemy
```

## About Game

### Classes


Create a your own hero class to fight with enemies. You can select one from the following classes:

- Warrior
- Rogue
- Mage

---

### Stats

Each class has different statistics and attributes:

- Strength
- Agility
- Intelligence

There is a sneak peak of fresh mage character.

```
 [    name    ]: Mage
 [   level    ]: 1
 [    exp     ]: 0
 [level points]: 0

 [   health   ]: 100/100
 [  strength  ]: 5
 [  agility   ]: 10
 [intelligence]: 15

 [   weapon   ]:  (+0)
 [    gold    ]: 100

Mage killed 0 enemies
And lost 0 times
      _
     (0)*
     /|\|
      | |
     / \|

(10/10) Fast attack
(10/10) Heal
(10/10) Throw firebolt
(10/10) Cast frost nova
```

---

### Skills

To check all available skills in game select **Skills** from menu.

Each skill has individual parameters such as:

- Damage value
- Attribute modificator
- Accuracy
- Chance to critical hit

```
 (ID)	(DMG)	(TYPE)	(ACCU)	(CRIT)	(NAME)
 [1]	[ 20]	[STRE]	[ 90%]	[ 10%]	Fast attack
 [2]	[ 50]	[INTE]	[100%]	[ 20%]	Heal
 [5]	[ 40]	[STRE]	[ 70%]	[ 25%]	Powerful swing
 [6]	[ 30]	[STRE]	[ 50%]	[ 30%]	Shield bash
 [3]	[ 30]	[AGIL]	[ 85%]	[ 75%]	Throw knife
 [4]	[ 40]	[AGIL]	[ 75%]	[ 40%]	Spread poison
 [7]	[100]	[INTE]	[ 65%]	[  5%]	Throw firebolt
 [8]	[ 50]	[INTE]	[ 75%]	[ 50%]	Cast frost nova
```

Each individual skill can be used only 10 times, so be careful with too much usage of it.

---

### Shop

Shop offers a various options of character recovery and pumpung up stats for a gold.

```
[S] Shop Atrributes 100
---
[1] (  0 gp) Heal yourself
[2] (100 gp) Revive character
[3] (  0 gp) Recover all skills
[4] ( 75 gp) +10 hitpoints
[5] ( 50 gp) + 2 strength
[6] ( 50 gp) + 2 agility
[7] ( 50 gp) + 2 intelligence
```

---

### Training

After level up you can spend free attributes points to pump up your character.

```
[T] Training Center
---
[1] +2 Health
[2] +1 Strength
[3] +1 Agility
[4] +1 Intelligence
```

---

### Items

To use a new weapon visit Item Shop and spend money on a bright new equipment.

```
[I] Item Shop
---
[1] ( 50 gp) + 5 dagger
[2] (120 gp) +10 short sword
[3] (299 gp) +19 great axe
[4] (420 gp) +35 heavy hammer
```

## License

[MIT](LICENSE)

## Note

Enjoy the game :)
