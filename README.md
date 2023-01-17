<h1 align = "center">DoomCaster</h1>

<h3 align = "center">An exploration of 3D rendering</h3>

<p align = "center">
  <img src = https://user-images.githubusercontent.com/38381290/211689275-7d02cc0c-1e8c-4878-843b-039323d413a3.png width = "500px" align = "center">
</p>

### What?
DoomCaster is a project that renders a pseudo-3D map using a raycasting algorithm. It has the following features:
- Map editor.
- Top-down raycast algorithm visualizer.
- 3D map, which can be explored with the WASD keys.

### Why?
I wanted to practice, and strengthen my C/C++ programming skills to become a more competitive programmer in the Game Development industry, as well as learn more about 3D graphics, 3D mathematics, and rendering algorithms as much as possible.

Doom is one of the most disruptive videogames ever created, as it set a new standard for the games industry, and was the stepping stone in the transition to 3D graphics in games. It began development in 1992, and was released in 1993 by John Carmack, John Romero, Adrian Carmack, Kevin Cloud, and Tom Hall selling more than one million copies!

I have nothing but respect for the developers of id software, since they are some of the game changers that moved the industry forward and a huge inspiration to me. It blows me away what they were able to achieve with the limited technologies they had during their time, so I wanted to learn how they did it firsthand!

<p align = "center">
  <img src = https://user-images.githubusercontent.com/38381290/211686234-05585deb-82ef-4e1c-8829-e7bb69e1722a.jpg width = "500px" align = "center">
</p>

>*The team at id software in 1993 from left to right: John Carmack, Kevin Cloud, Adrian Carmack, John Romero, Tom Hall, and Jay Wilbur*

### How?

> In progress ...

#### Rays:<br>

The aforementioned games build upon one of the foundations of 3D rendering, which is Ray Casting. To begin, we can define a ray in its parametrized form as a point $(X_0, Y_0, Z_0)$ with a direction vector $(D_x, D_y, D_z)$, where points in the line are accessed with a parameter $t$ which all lead to the following equations:
$$X = X_0 + (t * D_x)$$
$$Y = Y_0 + (t * D_y)$$
$$Z = Z_0 + (t * D_z)$$

These rays can be casted in multiple ways from a "camera," which is a perspective. The most popular ones are:<br>

#### ***Isometric***<br>
The projection lines are completely orthogonal to the screen, meaning completely "Straight." This perspective is used commonly in city building games such as Age of Empires, or StarCraft.
<p align = "center">
  <img height="300" src="https://user-images.githubusercontent.com/38381290/212803113-7ee86e60-cbad-49ba-a6ff-c13f5fa647e0.png">
  <img height = "300"  src = "https://user-images.githubusercontent.com/38381290/212802817-4befeda8-da38-47b1-9385-48e523917127.jpg">
</p>

#### Perspective
The projection lines all funnel out from a single point, in a similar way to how light and depth are perceived by the human eye or a pinhole camera. This is the most used form of rendering in modern games, as it is the most realistic (to humans, I wonder how aliens see the world 👽).
<p align="center">
  <img height = 300 src="https://user-images.githubusercontent.com/38381290/212804706-502141b0-37ee-4b27-bd9a-b4830fc95dbd.png">
  <img height = 300 src="https://user-images.githubusercontent.com/38381290/212804836-a7e1ca33-79c7-4915-83c2-65fddae25112.png">
>
</p>

#### The Ray Casting algorithm
We will be using one of the early forms of ray casting, which casts rays in a 2D map which translates to a 3D environment.<br>
- In order to render the screen at any given point, the following steps are taken:
1. Given geometric definitions of game surfaces (i.e. walls) $n$ rays are projected at regular angle intervals, so that each ray can intersect with a different map element to be rendered on the screen. 
2. We store the $t$ parameters from these rays in an array we call t[n], this gives us the distance in $x,y,z$ coordinates to a wall hit or wall exit.
3. We store the $S$ surface which was hit. This surface may have information such as material, transparency, and color and is stored in an array S[n].
<p align="center">
  <img width="600" src="https://user-images.githubusercontent.com/38381290/212807160-137bf0a2-f147-4a34-9b2a-b97ff5e87901.gif">
  <p align="center"><i>Vieira L., Own Work, 2012</p>
</p>


### Run it!
> In progress ...

### Resources used:
- OpenGL: https://www.opengl.org
- Learning OpenGL: https://learnopengl.com/Getting-started/OpenGL
- Wikipedia, ray casting: https://en.wikipedia.org/wiki/Ray_casting
- Wikipedia, id software: https://en.wikipedia.org/wiki/Id_Software
- Doom Fan Wiki, Logo: https://doom.fandom.com/wiki/Logo
- w3cschools, c++: https://www.w3schools.com/cpp/default.asp
- Video that helped me a ton: https://www.youtube.com/watch?v=eOCQfxRQ2pY





