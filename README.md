# Controlar lâmpada com controle remoto de TV.

## Projeto
O objeto do projeto é utilizar um arduino para ativar ou desativar um abajur remotamente, sem que seja necessário levantar da cama, com o próprio controle remoto da televisão.

### Materiais utilizados
- Arduino Uno R3
- Módulo Relé 5V de um canal
- Receptor infravermelho K845754
- Jumpers

### Funcionamento
Com o módulo infravermelho conectado a uma porta analógica do Arduino foi feita a leitura de duas teclas do controle remoto (uma que ligará a lâmpada e outra que desligará), utilizando a biblioteca <IRremote.h>.

Se a tecla pressionada for 0x20DF02FD, o relé ligado a uma porta digital do Arduino é ativado, ligando a lâmpada. Caso a tecla pressionada seja 0x20DF827D, então o relé é desativado e a lâmpada desligada.
