# Examen Parcial 3 (Modificaciones Clase)

[Link del repositorio](https://github.com/pinchiguillo/Examen-Parcial-3)

## Modificaciones (No implementadas)

Durante las clase se comento los fallos que tenia el codigo y se propusieron soluciones, a continuacion se detallan las modificaciones que se propusieron:

- Se implemento un sistema completamente nuevo para crear tareas y actores.
- Se introdujo el concepto de [CRUD](crud/crud.h) (mirar google si no sabes que es)
- Conceptos basicaos de **POO** (Programacion Orientada a Objetos) que no se habian seguido en el ejercicio
  - Encapsulamiento
  - Getters y Setters
  - Constructores
- Abstraccion de clases y metodos
- Buenas practicas de programacion
  - No usar namespace std
  - Minimizar el main
  - Crear carpetas para contener los elementos de clases

***Nota: He compartido esta rama con los cambios propuestos en clase, la rama principal sigue siendo mi proyecto y ESTA MAL RESUELTA, tampoco voy a modificar los contenidos de esta, lo he creado con la unica finalidad de compartir el codigo de clase y el codigo no esta terminado y no compila :)***

## Enunciado del Problema

Ustedes son Project Managers en una empresa internacional. Reciben una llamada urgente de un alto ejecutivo, informándoles que el CEO de la compañía ha aterrizado en Barcelona desde Estados Unidos y tiene una reunión crucial para las 19:30 en la ciudad. Sin embargo, el ejecutivo cuenta con solo 100 minutos antes de que cierre la facturación para su vuelo desde Madrid a Barcelona.

**Objetivo**: Debido a la urgencia de la situación, necesitan optimizar las tareas para cumplir con el objetivo de que el ejecutivo llegue a la reunión a tiempo. A continuación se detalla la lista de tareas necesarias, sus descripciones y las duraciones de cada una. Su misión es identificar las dependencias entre las tareas, calcular el tiempo total para completar las tareas en el orden adecuado, y determinar si es posible cumplir con el plazo de 100 minutos.

### Tareas, Descripciones y Duraciones:

- A: Reserva de vuelo (20 min)
- B: Informar a casa para empacar (5 min)
- C: Empacar maletas (40 min)
- D: Preparación del billete por la agencia (10 min)
- E: Recoger el billete de la agencia (5 min)
- F: Llevar el billete a la oficina (10 min)
- G: Recoger las maletas de casa (20 min)
- H: Llevar maletas a la oficina (25 min)
- I: Conversación sobre documentos requeridos (35 min)
- J: Dictar instrucciones para ausencia (25 min)
- K: Reunir documentos (15 min)
- L: Organizar documentos (5 min)
- M: Viajar al aeropuerto y facturar (25 min)
### Dependencias entre tareas:

Algunas tareas deben ser realizadas antes que otras, por ejemplo, no se puede viajar al aeropuerto antes de haber recogido las maletas.
Además, la reserva del vuelo debe completarse antes de recoger el billete, y la preparación del billete debe ocurrir antes de llevar el billete a la oficina.
### Objetivos del Reto:

- Definir el Objetivo del Proyecto: Identificar el propósito principal del proyecto (optimizar la gestión del tiempo para cumplir con el plazo de 100 minutos) y no solo las tareas.

- Diagrama de Flujo del Cronograma: Crear un diagrama de flujo para visualizar el cronograma del proyecto, teniendo en cuenta solo las dependencias entre tareas y no restricciones de recursos.

- Desarrollo de Algoritmo en C++:

- Crear un programa en C++ que:
  - Permita calcular el orden de ejecución de las tareas en función de sus dependencias.
  - Determine el tiempo total necesario para completar todas las tareas.
  - Evalúe si es posible completar las tareas en 100 minutos o menos.
  - Imprima el orden óptimo de ejecución de las tareas y su tiempo total.

### Restricciones:

- El tiempo máximo permitido para completar las tareas es de 100 minutos.
- El algoritmo debe gestionar de forma eficiente las dependencias entre las tareas, de tal manera que optimice el tiempo de ejecución.
### Entrega:

- Código fuente en C++ que implemente la solución al problema.
- Diagrama de flujo que represente el cronograma de ejecución de las tareas.

***¡Buena suerte y que la optimización esté de su lado!***
