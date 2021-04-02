#include <iostream>
#include <conio.h>

int width = 20;
int height = 20;
int slange_pos [2] [50];//vertikale pos [1][X], horisontale pos [2][Y]
int x, y, fruktx, frukty;
eDirection dir;
int score = 0;

void Draw (int x, int y, int fruktx, int frukty);


//initialiserer spelet
void Setup (/* arguments */) {
  slange_pos [1][1] = 10;
  slange_pos [2][1] = 10;
  Draw(slange_pos[1][1],slange_pos[2][1],0, 0);

}

//Teikner kartet og slangen
void Draw (int x, int y, int fruktx, int frukty) {

    for (int i = 0; i < height; i++) {
      //teikner øvre og nedre kant av boksen
      if ((i == 0) || (i == (height-1))) {
        for (int j = 0; j < width; j++) {
          std::cout << "#";
        }
        //teikner venstre og høgre kant
      } else {
        for (int j = 0; j < width; j++) {
          if (j == 0 || j == (width-1)) {
            std::cout << "#";
          } else if (x == i && y == j) {
              std::cout << "O";
          } else {
            std::cout << " ";

            }
          }
        }

      //resetter horisontaltelleren og hopper en rad nedover
      int j = 0;
      std::cout << "\n";

    }
    std::cout << "Score: " << score;
}

//sørger for bevegelse og sjekker kræsj, sender posisjonen til draw
void Logic (/* arguments */) {
  /* code */
}

//
void Input (/* arguments */) {
  /* code */
}

//
int main() {
    Setup();

  return 0;
}
