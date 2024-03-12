## EcoDucha

### SUMÁRIO

##### 1 PROPOSTA E PROPÓSITOS DO PROJETO

##### 2 JUSTIFICATIVA

##### 3 MÉTODOS

##### 4 RESULTADO
----------------------------------------------------------------------

<h3><a href="https://github.com/IvanSultano/EcoDucha/blob/main/EcoDucha.c"> Codigo do projeto </a></h3>

*1 PROPOSTA E PROPÓSITOS DO PROJETO*

<h5> A proposta do projeto traz como princípio a redução de consumo de 
água em duchas de academias.
  
Banho de ducha por 15 minutos, com o registro meio aberto, consome 
135 litros de água. Se você fechar o registro ao se ensaboar, e reduzir o tempo 
do banho para 5 minutos, seu consumo cai para 45 litros. A redução é de 90 
litros de água, o equivalente a 360 copos de água com 250 ml.

O dispositivo foi desenvolvido na plataforma TinkerCard, usando um 
Arduino para controlar o sistema, uma válvula solenoide, um sensor de fluxo de 
água, uma tela LCD para informar quantos litros está sendo consumido no 
banho, um botão de Start e Stop e um teclado numérico para o usuário colocar 
sua senha.

O projeto e foi escolhido, segundo os Objetivos de Desenvolvimento 
Sustentável (ODS) da Organização das Nações Unidas (ONU) 11,12 e 13.
A relevância do projeto visa a economia de recursos, associado ao 
consumo responsável e água e preservação do meio ambiente. </h5><br>

*2 JUSTIFICATIVA*

<h5>A água potável são recursos que juntos constituem a bases fundamentais 
para a sobrevivência, a escassez de água resulta em uma crise que afeta 
diversos setores da sociedade (DI GIULIO, 2014).
  
Mesmo sendo responsabilidade do Estado prover recursos hídricos para 
a população, contudo, a sociedade é corresponsável e deve procurar meios de 
consumir de maneira eficiente a água. A educação ambiental e senso 
sustentável devem fazer parte do desenvolvimento consciente (RUFFINO et al., 
2012).

Em muitos momentos, a população não se preocupa com a quantidade 
de água que utiliza ao realizar suas atividades rotineiras como escovar os 
dentes, tomar banho, lavar louça etc. Estima-se que 42%, em média, do 
consumo de água de uma residência concentram-se no chuveiro (MAKKI et al., 
2013), causando desperdício desse recurso tão precioso, impactando 
diretamente no meio ambiente. 

Para garantir a sustentabilidade de gerações futuras a sociedade deve 
assumir uma atitude de uso da água consciente, o nosso projeto tem como 
objetivo auxiliar na conscientização do uso da água e economia desse recurso 
em academias onde há um grande fluxo de pessoas e uso displicente desse 
recurso.</h5><br>

*3 MÉTODOS*

<h5> Esse projeto tem por sua finalidade ser um dispositivo de baixo custo, 
fácil instalação, funcional e que de um retorno significativo em economia de 
água e redução de custos mensais em contas fixas na academia ou clube.
  
Tendo em mente que a única parte estrutural seria a instalação do leitor de 
vazão e da válvula solenoide, já na parte software seria somente necessário 
integrar com a base de dados da academia ou clube, único dado necessário 
seria o ID do aluno.

Neste projeto usamos o ThinkCard para simular o sistema. Começamos 
com o arduino UNO (Fig. 1), onde podemos conectar todos os componentes e 
programar na linguagem C.

![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/Arduino.png)

Após a implementação do Arduino, utilizamos um protoboard. 
(Fig. 2) sendo ele que iremos conectar todos os nossos componentes 
eletrônicos tanto analógico e digital.

![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/Protoboard.png)

Utilizamos também uma tela LCD para mostrar algumas informações 
para o usuário, as primeiras telas são de carregamento do sistema (Fig. 3), 
(Fig. 4), (Fig. 5). na sequencia irá solicitar a senha (Fig. 6) do aluno da 
academia ou clube, após colocar a senha corretamente irá iniciar a contagem 
dos litros (Fig. 7), assim que pressionado o botão de stop informara que o 
banho foi pausado (Fig. 8) e por ultimo caso o sensor não identifique presença 
ou atinja a 45 litros o sistema encerra (Fig. 9).

![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/Iniciando.png) ![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/Carregando.png) ![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/EcoDucha.png) ![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/Senha.png) ![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/Consumo.png) ![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/Pausado.png) ![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/Encerrado.png)

Utilizamos também um teclado numérico (Fig. 10) para que o usuário 
coloque o sua Senha.

![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/Teclado.png)

O potenciômetro (Fig.11) utilizaremos para regular a luminosidade do 
LCD.

![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/Potenciômetro.png)

O sensor de presença (Fig. 12) identificará se o usuário está dentro do 
box utilizando a ducha, caso o sensor não identifique movimentação no período 
de 10 segundos o Eco Ducha irá encerrar.

![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/Sensor.png)

O Botão (Fig. 13) terá a utilidade para pausar o banho a qualquer 
momento, possibilitando que o usuário economize a quantia de água utiliza na 
hora de se ensaboar.

![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/Botão.png)

O Micro servo (Fig. 14) utilizaremos para liberar e fechar a corrente de 
água.</h5>

![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/MicroServo.png)
<br><br>

*4 RESULTADO*

![This is an image](https://github.com/IvanSultano/EcoDucha/blob/main/Resultado.png)






