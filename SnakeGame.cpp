#include <iostream>


int width = 20;
int height = 20;



//initialiserer spelet
void Setup (/* arguments */) {
  /* code */
}

//Teikner kartet og slangen
void Draw (/* arguments */) {

    //teikner øvre kant av boksen
    for (int i = 0; i < width; i++) {
      std::cout << "#";
    }
    //teikner v h veggane
    for (int j = 0; j < height; j++) {
      /* code */
    }
}

//
void Logic (/* arguments */) {
  /* code */
}

//
void Input (/* arguments */) {
  /* code */
}

//
int main() {
  Draw();


  return 0;
}
