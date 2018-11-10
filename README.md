# Paint
This program is a simple paint tool which is similar to the Paint of Microsoft. It is written in the language C++ with OpenGL/GLUT.

## Installation
Download.

## Usage
Under the folder of all sources, run the program: `make paint` or `make`.

###Mouse event:
Right click -> show menu.
Left click -> choose option.

###Menu:
1. **Colour** -> You can choose Red, Green, Blue, Yellow or Random, the default color is Red.
2. **Shapes** -> The default shape is Point.
  - Point -> draw a dot at the point clicked with the mouse. Clicking and dragging will draw points constantly like free-form drawing.
  - Line -> draw a linebetween two subseauently clicked points. (Bresenham's algorithm is used here.)
  - Rectangle -> draw a rectangle with top-left corner specified by the first click and the bottom-right corner specified by a second click. If the second click is bottom-left, top-right or top-left comparing to the first click, a warning will show in the console.
  - Circle -> draw a circle centered at the position of the first click, with its radius set by a second click.
  - Airbrush -> draw multiple points as brush around the clicked point. There are four options of size.
3. **Radical Paint Brush** -> draw multiple points as brush around the centre point of the document. You can choose True or False. Only useful when shape is point. The default option is false. After choosing point in shape, it becomes False.
4. **Eraser** -> erase the points by clicking and dragging.
5. **Undo** -> undo, the history can keep maximum 20 records.
6. **Redo** -> redo, the history can keep maximum 20 records.
7. **Clear** -> clear all the points and clear the history.
8. **Quit** -> close the window.

###Keyboard events:
1. **q** or **esc** -> close the window.
2. **c** -> clear all the points and clear the history.
3. **+** -> larger size of eraser or brush.
4. **-** -> smaller size of eraser or brush.
5. **u** -> undo, the history can keep maximum 20 records.
6. **r** -> redo, the history can keep maximum 20 records.