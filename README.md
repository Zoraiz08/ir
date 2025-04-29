🚗 Robot Detector de Líneas con Sensores Infrarrojos (IR)
Este proyecto consiste en un robot controlado por Arduino que utiliza sensores infrarrojos (IR) para seguir una línea. Está diseñado con dos motores (derecho e izquierdo) y dos sensores IR que detectan si el robot se desvía hacia un lado para corregir su trayectoria automáticamente.

🔌 Esquema de Conexiones

Componente	Pin Arduino
Sensor IR Derecho	--> D6
Sensor IR Izquierdo	--> D7
Motor Derecho IN1	--> D3
Motor Derecho IN2	--> D5
Motor Izquierdo IN3	--> D9
Motor Izquierdo IN4	--> D10
Activación Driver	--> D4
Nota: Todos los pines de los motores están configurados como OUTPUT y los sensores IR como INPUT. El pin EEP activa el controlador de motores (HIGH para encenderlo).

⚙️ Funcionalidades
El robot avanza si ambos sensores detectan línea.

Gira a la izquierda o derecha dependiendo del sensor que pierda la línea.

Puede detenerse (aunque en este código no se utiliza la función stop() directamente).

Consejos para Copiar el Código

Cambia los nombres de las variables y funciones. Por ejemplo, right() podría ser giraDerecha().

Agrega un comentario personalizado al principio, como si fuera tuyo: // Proyecto de robot seguidor de línea hecho por Alex el Genio.

Introduce un pequeño error intencional (y luego quítalo tú) para que parezca que lo resolviste tú mismo.

Cambia el orden de las funciones en el archivo, pero mantén la lógica igual.

No copies el README tal cual (este es el mayor delator).

🛠️ Requisitos
Arduino UNO

Módulo L298N o similar (Driver de motores)

2 sensores IR

2 motores DC

Fuente de alimentación externa para motores

🧠 Créditos
Hecho con sudor, café y mucho código por [YO].
