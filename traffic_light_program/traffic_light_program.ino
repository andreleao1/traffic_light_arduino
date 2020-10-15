/*
 * Definindo alias para os leds, seguindo o seguinte padrão:
 * <cor_pedestre ou carro_lado>
 * onde "c" é para carro e "p" para pedestre
 * e "l" para esquerda e "r" para direita
 * 
 * Exemplo: red_c_l (led vermelho, para carros da esquerda).
 */
const red_c_l = A0, yellow_c_l = A1, green_c_l = A2, red_p_l = A3, green_p_l = A4, red_c_r = A5, yellow_c_r = 2, green_c_r = 3, red_p_r = 4, green_p_r = 5;

void setup() {
  pinMode(red_c_l, OUTPUT); pinMode(yellow_c_l, OUTPUT); pinMode(green_c_l, OUTPUT);
  pinMode(red_p_l, OUTPUT); pinMode(green_p_l, OUTPUT); pinMode(red_c_r, OUTPUT);
  pinMode(yellow_c_rc_l, OUTPUT); pinMode(green_c_r, OUTPUT); pinMode(red_p_r, OUTPUT);
  pinMode(green_p_r, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}
