# AquaPet - Monitoramento Inteligente de Hidratação Animal

## 📌 Sobre o Projeto

O **AquaPet** é uma solução IoT voltada para o monitoramento inteligente da hidratação de pets, com foco em prevenção e acompanhamento contínuo da saúde animal.

O sistema utiliza um ESP32 com sensor ultrassônico para monitorar o nível de água do recipiente do pet em tempo real. Os dados são enviados via protocolo MQTT para um dashboard desenvolvido no Node-RED, permitindo acompanhamento remoto e geração de alertas automáticos.

O projeto foi desenvolvido como parte do Challenge FIAP 2026, com foco em tecnologias de:
- IoT
- MQTT
- Dashboards
- Monitoramento preventivo veterinário

---

# 🎯 Problema Resolvido

Muitos pets passam longos períodos sozinhos durante o dia, e os tutores frequentemente não conseguem acompanhar adequadamente o consumo de água dos animais.

A baixa ingestão de água pode contribuir para:
- desidratação;
- problemas renais;
- doenças urinárias;
- agravamento de condições clínicas.

O AquaPet busca oferecer uma solução preventiva através do monitoramento contínuo da hidratação do pet.

---

# 🚀 Funcionalidades Atuais

 Monitoramento do nível de água em tempo real  
 Simulação utilizando ESP32 no Wokwi  
 Comunicação MQTT  
 Dashboard em tempo real no Node-RED  
 Histórico de hidratação  
 Alertas automáticos de nível crítico  
 Indicador visual de status da hidratação  

---

# 🛠️ Tecnologias Utilizadas

## IoT e Simulação
- ESP32
- Sensor Ultrassônico HC-SR04
- Wokwi Simulator

## Comunicação
- MQTT
- Broker HiveMQ Público

## Dashboard e Automação
- Node-RED
- Node-RED Dashboard

## Linguagens
- C++
- JavaScript

---

# 📡 Arquitetura da Solução

```
ESP32 + HC-SR04
        ↓
     MQTT Broker
        ↓
     Node-RED
        ↓
Dashboard de Monitoramento
```

---

# 📂 Estrutura do Projeto

```
AquaPet/
├── doc/
│   └── arquitetura.png
├── node-red/
│   └── flows.json
├── codigo_esp32.ino
└── README.md
```

---

# ⚙️ Como Executar o Projeto

## 1. Executar a Simulação no Wokwi

Acesse:

https://wokwi.com

### Componentes utilizados:
- ESP32
- HC-SR04

### Ligações do Sensor

| HC-SR04 | ESP32 |
|---|---|
| VCC | 5V |
| GND | GND |
| TRIG | GPIO 5 |
| ECHO | GPIO 18 |

---

# 2. Configurar o MQTT

Broker utilizado:

```
f64abd18f054459c90566f33281430b0.s1.eu.hivemq.cloud
```

Porta:

```
8883
```

Tópico MQTT:

```
#
```



---

# 3. Executar o Node-RED

## Instalar o Node-RED

Necessário possuir:
- Node.js instalado

Executar no cmd:

```bash
node-red
```

Abrir no navegador:

```text
http://localhost:1880
```

---

# 4. Instalar o projeto


```text
Adicionar o arquivo JSON na aba IMPORT
```

---

# 📊 Dashboard

O dashboard apresenta:
- nível de água;
- gráfico histórico;
- indicador visual;
- alertas automáticos.

---

# 📈 Resultados Parciais

Até o momento, o projeto já possui:

 Comunicação entre ESP32 e MQTT funcionando  
 Leitura do sensor ultrassônico funcionando  
 Dashboard integrado ao Node-RED  
 Atualização em tempo real dos dados  
 Geração de alertas automáticos  
 Simulação funcional no Wokwi  

O sistema já é capaz de:
- detectar redução do nível de água;
- atualizar o dashboard automaticamente;
- emitir alertas visuais quando o nível crítico é atingido.

---

# 👨‍💻 Equipe

- Leonardo Zerbinatti de Sales RM: 562992 Turma: 2TDSPJ
- Luis Guilherme Borges Silva RM: 566548 Turma: 2TDSPJ
- Vinícius Luis Exposito Morassi Garcia RM: 563340 Turma: 2TDSPJ

---

# 📹 Demonstração

Adicionar link do vídeo no YouTube aqui.

---

# 🔗 Repositório

Adicionar link do GitHub aqui.