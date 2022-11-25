char input;
int pinA = 13;
int pinB = 12;
int pinC = 11;
int pinD = 10;
int pinE = 9;
int pinF = 8;
int pinG = 7;
int D1 = 6;
int D2 = 5;
int i = 0;
int k = 0;
int j = 0;
int Arduino_Pins[7] = {pinA, pinB, pinC, pinD, pinE, pinF, pinG};
int Segment_Pins[16][7] = {{1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}, // 9
  {1, 1, 1, 0, 1, 1, 1}, // A
  {0, 0, 1, 1, 1, 1, 1}, // B
  {1, 0, 0, 1, 1, 1, 0}, // C
  {0, 1, 1, 1, 1, 0, 1}, // D
  {1, 0, 0, 1, 1, 1, 1}, // E
  {1, 0, 0, 0, 1, 1, 1}, // F

};

void setup() {
  // put your setup code here, to run once:
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(4, 0, 200);
  if(Serial.available())
  {
    input = Serial.read();
  }
//Para0
  if (input == '0'){
    for (int n = 0; n < 500; n++)
    {
      tone(4, 0, 200);
      for (j = 0; j < 7; j++)
      {
        digitalWrite(Arduino_Pins[j], Segment_Pins[0][j]);
      }
      digitalWrite(D1, 1);
      digitalWrite(D2, 0);
      delay(1);

      for (j = 0; j < 7; j++)
      {
        digitalWrite(Arduino_Pins[j], Segment_Pins[0][j]);
      }
      digitalWrite(D1, 0);
      digitalWrite(D2, 1);
      delay(1);

    }    
  }
  else if(input == '1')
  {
  for (int n = 0; n < 5000; n++)
  {
    tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[10][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[0][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);

  }    
  }
  else if(input == '2')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[11][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[0][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == '3')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[12][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[0][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == '4')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[13][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[0][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == '5')
  {tone(4, 392, 200);
  for (int n = 0; n < 5000; n++)
  {
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[14][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[0][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == '6')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[15][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[0][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
//Para1
  if(input == '7')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[10][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[1][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }    
  }
  else if(input == '8')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[11][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[1][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == '9')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[12][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[1][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'A')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[13][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[1][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'B')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[14][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[1][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'C')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[15][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[1][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
//Para2
  if(input == 'D')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[10][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[2][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }    
  }
  else if(input == 'E')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[11][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[2][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'F')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[12][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[2][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'G')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[13][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[2][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'H')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[14][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[2][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'I')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[15][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[2][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
//Para3
  if(input == 'J')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[10][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[3][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }    
  }
  else if(input == 'K')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[11][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[3][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'L')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[12][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[3][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'M')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[13][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[3][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'N')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[14][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[3][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'O')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[15][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[3][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
//Para4
  if(input == 'P')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[10][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[4][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }    
  }
  else if(input == 'Q')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[11][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[4][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'R')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[12][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[4][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'S')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[13][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[4][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'T')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[14][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[4][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'U')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[15][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[4][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
//Para5
  if(input == 'V')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[10][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[5][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }    
  }
  else if(input == 'W')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[11][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[5][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'X')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[12][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[5][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'Y')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[13][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[5][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'Z')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[14][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[5][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'a')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[15][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[5][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
//Para6
  if(input == 'b')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[10][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[6][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }    
  }
  else if(input == 'c')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[11][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[6][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'd')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[12][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[6][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'e')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[13][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[6][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'f')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[14][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[6][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'g')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[15][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[6][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
//Para7
  if(input == 'h')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[10][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[7][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }    
  }
  else if(input == 'i')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[11][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[7][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'j')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[12][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[7][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'k')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[13][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[7][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'l')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[14][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[7][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'm')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[15][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[7][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
//Para8
  if(input == 'n')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[10][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[8][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }    
  }
  else if(input == 'o')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[11][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[8][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'p')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[12][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[8][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'q')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[13][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[8][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'r')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[14][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[8][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 's')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[15][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[8][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
//Para9
  if(input == 't')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[10][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[9][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }    
  }
  else if(input == 'u')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[11][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[9][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'v')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[12][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[9][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'w')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[13][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[9][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'x')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[14][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[9][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  else if(input == 'y')
  {
  for (int n = 0; n < 5000; n++)
  {tone(4, 392, 200);
    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[15][j]);
    }
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    delay(1);

    for (j = 0; j < 7; j++)
    {
      digitalWrite(Arduino_Pins[j], Segment_Pins[9][j]);
    }
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    delay(1);
  }     
  }
  
}
