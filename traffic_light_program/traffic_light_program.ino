/*
 * Definindo alias para os leds, seguindo o seguinte padrão:
 * <cor_pedestre ou carro_lado>
 * onde "c" é para carro e "p" para pedestre
 * e "l" para esquerda e "r" para direita
 * 
 * Exemplo: red_c_l (led vermelho, para carros da esquerda).
 */
const char* red_c_l = A0, yellow_c_l = A1, green_c_l = A2, red_p_l = A3, green_p_l = A4, red_c_r = A5, yellow_c_r = 2, green_c_r = 3, red_p_r = 4, green_p_r = 5;

/**
 * Método responsável por modificar o estado dos leds do semáforo da direita. Recebendo como parâmentro 1 ou 0 para cada led pertencente ao semáforo. Sendo 1 para ligar e 0 para desligar.
 */
void modifyStateLedsRigth(int logicStateRed_c_r,int logicStateYellow_c_r, int logicStateGreen_c_r, int logicStateRed_p_r, int logicStateGreen_p_r){
  digitalWrite(red_c_r,logicStateRed_c_r);
  digitalWrite(yellow_c_r,logicStateYellow_c_r);
  digitalWrite(green_c_r,logicStateGreen_c_r);
  digitalWrite(red_p_r,logicStateRed_p_r);
  digitalWrite(green_p_r,logicStateGreen_p_r);
}

/**
 * Método responsável por modificar o estado dos leds do semáforo da esqueda. Recebendo como parâmentro 1 ou 0 para cada led pertencente ao semáforo. Sendo 1 para ligar e 0 para desligar.
 */
void modifyStateLedsLeft(int logicStateRed_c_l,int logicStateYellow_c_l, int logicStateGreen_c_l, int logicStateRed_p_l, int logicStateGreen_p_l){
  digitalWrite(red_c_l,logicStateRed_c_l);
  digitalWrite(yellow_c_l,logicStateYellow_c_l);
  digitalWrite(green_c_l,logicStateGreen_c_l);
  digitalWrite(red_p_l,logicStateRed_p_l);
  digitalWrite(green_p_l,logicStateGreen_p_l);
}

void switchLedsState(String command){

  if(command.equals("openRigthTrafic")){
      modifyStateLedsLeft(1,0,0,0,1);
      modifyStateLedsRigth(0,0,1,1,0);
  } else if(command.equals("openLeftTrafic")){
      modifyStateLedsLeft(0,0,1,1,0);
      modifyStateLedsRigth(1,0,0,0,1);
  }

}

void setup() {
  pinMode(red_c_l, OUTPUT); pinMode(yellow_c_l, OUTPUT); pinMode(green_c_l, OUTPUT);
  pinMode(red_p_l, OUTPUT); pinMode(green_p_l, OUTPUT); pinMode(red_c_r, OUTPUT);
  pinMode(yellow_c_l, OUTPUT); pinMode(green_c_r, OUTPUT); pinMode(red_p_r, OUTPUT);
  pinMode(green_p_r, OUTPUT);

}

void loop() {
  switchLedsState("openRigthTrafic");
  delay(60000);
  switchLedsState("openLeftTrafic");
  delay(60000);

}
