// Program By: Blake Douglas
// Encodes/Decrypt Morse code

#include <stdio.h>
void encode(void);
void decode(void);
char s[500];
int main(void) {
  int a;
  printf("Enter your sentence (if decoding, start with a space, use a space between each character, and end with a space.): ");
  //Holds string to encode or decode
  fgets(s, 500, stdin);

  printf("1 - Encode\n2 - Decode\nChoice: ");
  scanf("%d", &a);
  //Sees if they want to encode the sentence or decode it
  switch(a)
  {
    case 1:
      encode();
       break;

    case 2:
      decode();
      break;

    default:
    printf("Incorrect input");
  }
  return 0;
}


// Translates to morse code
void encode(void) {
  for(int i = 0; i < sizeof(s); i++) {
    if(s[i] == 'a' || s[i] == 'A')
      printf(".- ");

    if(s[i] == 'b' || s[i] == 'B')
     printf("-... ");

    if(s[i] == 'c' || s[i] == 'C')
     printf("-.-. ");

    if(s[i] == 'd' || s[i] == 'D')
     printf("-.. ");

    if(s[i] == 'e' || s[i] == 'E')
     printf(". ");

    if(s[i] == 'f' || s[i] == 'F')
     printf("..-. ");

    if(s[i] == 'g' || s[i] == 'G')
     printf("--. ");

    if(s[i] == 'h' || s[i] == 'H')
     printf(".... ");

    if(s[i] == 'i' || s[i] == 'I')
     printf(".. ");

    if(s[i] == 'j' || s[i] == 'J')
     printf(".--- ");

    if(s[i] == 'k' || s[i] == 'K')
     printf("-.- ");

    if(s[i] == 'l' || s[i] == 'L')
     printf(".-.. ");

    if(s[i] == 'm' || s[i] == 'M')
     printf("-- ");

    if(s[i] == 'n' || s[i] == 'N')
     printf("-. ");

    if(s[i] == 'o' || s[i] == 'O')
     printf("--- ");

    if(s[i] == 'p' || s[i] == 'P')
     printf(".--. ");

    if(s[i] == 'q' || s[i] == 'Q')
     printf("--.- ");

    if(s[i] == 'r' || s[i] == 'R')
     printf(".-. ");

    if(s[i] == 's' || s[i] == 'S')
     printf("... ");

    if(s[i] == 't' || s[i] == 'T')
     printf("- ");

    if(s[i] == 'u' || s[i] == 'U')
     printf("..- ");

    if(s[i] == 'v' || s[i] == 'V')
     printf("...- ");

    if(s[i] == 'w' || s[i] == 'W')
     printf(".-- ");

    if(s[i] == 'x' || s[i] == 'X')
     printf("-..- ");

    if(s[i] == 'y' || s[i] == 'Y')
     printf("-.-- ");

    if(s[i] == 'z' || s[i] == 'Z')
     printf("--.. ");

    if(s[i] == ' ')
     printf("  ");

    if(s[i] == '0')
     printf("----- ");

    if(s[i] == '1')
     printf(".---- ");

    if(s[i] == '2')
     printf("..--- ");

    if(s[i] == '3')
     printf("...-- ");

    if(s[i] == '4')
     printf("....- ");

    if(s[i] == '5')
     printf(".....");

    if(s[i] == '6')
     printf("-.... ");

    if(s[i] == '7')
     printf("--... ");

    if(s[i] == '8')
     printf("---.. ");

    if(s[i] == '9')
     printf("----. ");
 }
}

// Decodes morse code to english
void decode(void) {
  for(int i = 0; i < sizeof(s); i++) {
    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '-' && s[i + 2] == ' ')
      printf("a ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '.' && s[i + 2] == '.' && s[i + 3] == '.' && s[i + 4] == ' ')
      printf("b ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '.' && s[i + 2] == '-' && s[i + 3] == '.' && s[i + 4] == ' ')
      printf("c ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '.' && s[i + 2] == '.' && s[i + 3] == ' ')
      printf("d ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == ' ')
      printf("e ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '-' && s[i + 3] == '.' && s[i + 4] == ' ')
      printf("f ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '-' && s[i + 2] == '.' && s[i + 3] == ' ')
      printf("g ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.' && s[i + 3] == '.' && s[i + 4] == ' ')
      printf("h ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == ' ')
      printf("i ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '-' && s[i + 2] == '-' && s[i + 3] == '-' && s[i + 4] == ' ')
      printf("j ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '.' && s[i + 2] == '-' && s[i + 3] == ' ')
      printf("k ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '-' && s[i + 2] == '.' && s[i + 3] == '.' && s[i + 4] == ' ')
      printf("l ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '-' && s[i + 2] == ' ')
      printf("m ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '.' && s[i + 2] == ' ')
      printf("n ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '-' && s[i + 2] == '-' && s[i + 3] == ' ')
      printf("o ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '-' && s[i + 2] == '-' && s[i + 3] == '.' && s[i + 4] == ' ')
      printf("p ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '-' && s[i + 2] == '.' && s[i + 3] == '-' && s[i + 4] == ' ')
      printf("q ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '-' && s[i + 2] == '.' && s[i + 3] == ' ')
      printf("r ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.' && s[i + 3] == ' ')
      printf("s ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == ' ')
      printf("t ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '-' && s[i + 3] == ' ')
      printf("u ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.' && s[i + 3] == '-' && s[i + 4] == ' ')
      printf("v ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '-' && s[i + 2] == '-' && s[i + 3] == ' ')
      printf("w ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '.' && s[i + 2] == '.' && s[i + 3] == '-' && s[i + 4] == ' ')
      printf("x ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '.' && s[i + 2] == '-' && s[i + 3] == '-' && s[i + 4] == ' ')
      printf("y ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '-' && s[i + 2] == '.' && s[i + 3] == '.' && s[i + 4] == ' ')
      printf("z ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '-' && s[i + 2] == '-' && s[i + 3] == '-' && s[i + 4] == '-' && s[i + 5] == ' ')
      printf("1 ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '-' && s[i + 3] == '-' && s[i + 4] == '-' && s[i + 5] == ' ')
      printf("2 ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.' && s[i + 3] == '-' && s[i + 4] == '-' && s[i + 5] == ' ')
      printf("3 ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.' && s[i + 3] == '.' && s[i + 4] == '-' && s[i + 5] == ' ')
      printf("4 ");

    if(s[i - 1] == ' ' && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.' && s[i + 3] == '.' && s[i + 4] == '.' && s[i + 5] == ' ')
      printf("5 ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '.' && s[i + 2] == '.' && s[i + 3] == '.' && s[i + 4] == '.' && s[i + 5] == ' ')
      printf("6 ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '-' && s[i + 2] == '.' && s[i + 3] == '.' && s[i + 4] == '.' && s[i + 5] == ' ')
      printf("7 ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '-' && s[i + 2] == '-' && s[i + 3] == '.' && s[i + 4] == '.' && s[i + 5] == ' ')
      printf("8 ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '-' && s[i + 2] == '-' && s[i + 3] == '-' && s[i + 4] == '.' && s[i + 5] == ' ')
      printf("9 ");

    if(s[i - 1] == ' ' && s[i] == '-' && s[i + 1] == '-' && s[i + 2] == '-' && s[i + 3] == '-' && s[i + 4] == '-' && s[i + 5] == ' ')
      printf("0 ");

  }
}
