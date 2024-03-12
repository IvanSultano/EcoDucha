#include <Keypad.h> // BIBLIOTECA PARA O FUNCIONAMENTO DO TECLADO DE MEMBRANA 
#include ‹Servo.h> // BIBLIOTECA PARA O FUNCIONAMENTO DO SERVO
// #* Display LCD 16x2

#include <LiquidCrystal.h›

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 3, en = 4, d4 = A2, d5 = A3, d6 = A4, d7 - A5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const byte interruptPin = 2;
volatile byte state = LOW;

int pinopir = A0;
Servo servo _Motor; // OBJETO DO TIPO SERVO
char* password = "123"; //SENHA CORRETA PARA DESTRANCAR A FECHADURA
int position = 0; //VARIÁVEL PARA LEITURA DE POSIÇÃO DA TECLA PRESSIONADA
const byte ROWS = 4; //NUMERO DE LINHAS DO TECLADO
const byte COLS = 4; //NUMERO DE COLUNAS DO TECLADO
char keys [ROWS] [COLS] = { //DECLARAÇÃO DOS NUMEROS, LETRAS E CARACTERES DO TECLAD
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'},
};

byte rowPins[ROWS] = ( 11, 10, 9, 8 }; // PINOS DE CONEXAO DAS LINHAS DO TECLADO
byte colPins[COLS] = { 7, 6, 5, 13 }; //PINOS DE CONEXAO DAS COLUNAS DO TECLADO
Keypad keypad - Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setlocked(int locked) { //TRATANDO O ESTADO DA FECHADURA
if (locked){ //SE FECHADURA TRANCADA, FAZ
  servo_Motor write(0): //POSIÇÃO DO SERVO FICA EM 0º (PECHADURA TRANCADA)
}
else( //SENÃO, FAZ
  servo_Motor. write (82):// SERVO GIRA A 82º (FECHADURA DESTRANCADA)
}}

void setup() {

  pinMode (interruptPin, INPUT_PULLUP); 
  attachInterrupt (digitalPinToInterrupt (interruptPin), ensaboar, RISING);
  servo_Motor.attach (12); //PINO DE CONTROLE DO SERVO MOTOR 
  setLocked(true): //ESTADO INICIAL DA PECHADURA (TRANCADA)
  // set up start communications

  Serial.begin (9600);
  Serial.println("initializing setup...");
  
  lcd.begin (16, 2);
  lcd.clear ();
  lcd.setCursor (0, 0);
  lcd.print ("Inicializando");
  delay (1000);
  lcd.setCursor (8, 1);
  lcd.print ("SETUP...");
  delay (2000);
  lcd.clear ();
  
  Serial.println ("PROJECT" );
  lcd. setCursor (0, 0);
  lcd.print ("Projeto" );
  delay (1000);
  lcd.setCursor (4, 1);
  lcd. print ("ECO Ducha");
  delay (2000);
  lcd.clear ();
  
  Serial-println ("Carregando... ");
  
  // Iteração do display LCD inicial movendo as letras
  for (int i = 0; i <= 15; i++) {
  lcd.setCursor (0, 0);
  lcd.print ("Carregando...");
  lcd.setCursor (i, 1);
  lcd.print ("*");
  delay (200);
  lcd.clear();
  }

void ensaboar(){
  state = !state;
  }

void functionBanho(){
  lcd. setCursor (0, 1);
  lcd. print ("Preparando...");
  delay (1000);

  lcd.clear();

  setLocked (false);
  lcd.setCursor (0, 0);
  int i=0;
  while (digitalRead(pinopir)==HIGH){
    
    if (state== HIGH){
    lcd.clear ();
    lcd.setCursor(0, 0);
    lcd.print("Qtd. consumida:"); 
    lcd.setCursor (4, 1);
    lcd.print（"L");
    lcd.setCursor (0, 1);
    lcd.print(i); 
    delay (1500);
    i++;
      if（1==45）｛
        
    break;  }
    }

    else{
      lcd.clear();
      setLocked(true);
      lcd.setCursor(0, 1);
      lcd.print("Banho Pausado");
      delay(100);
    }}

lcd.clear();
setLocked (true);
lcd.setCursor(0, 0); 
lcd.print ("Encerrado"); 
delay (5000);

lcd.clear();

}

void loop() {

  lcd.setCursor(0, 0);
  lcd.print("aguardando Senha");
    char key = keypad.getKey(); //LEITURA DAS TECLAS PRESSIONADAS

  if (key == '*' || key == '#') { //SE A TECLA PRESSIONADA POR IGUAL A CARACTERE "*" ou "#", faz
      position = 0; //POSIÇÃO DE LEITURA DA TECLA PRESSIONADA INICIA EM 0
      
      setLocked(true);
  }
if (key == password [position]){ //SE A TECLA PRESSIONADA CORRESPONDER A SEQUÊNCIA DA SENHA, fAZ
      lcd.setCursor(position, 1);
      lcd.print("*");
      position ++; //PULA PARA A PRÓXIMA POSIÇÃO
}
if (position == 3){ //SE VARIÁVEL FOR IGUAL 3 FAZ (QUANDO AS TECLAS PRESSIONADAS CHEGAREM A 3 POSIÇÕES, SIGNIFICA QUE A SENHA ESTÁ CORRETA)
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print ("Senha Correta");
  functionBanho();
  position = 0;
}
delay(100); //INTERVALO DE 100 MILISSEGUNDOS
}

      
