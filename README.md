# OOP - Group 4 project

An emerging company is embarking on the development of its information system, focusing its core business on online sales of electronic components. Our mission is to design and implement a solution aimed at digitizing some of its operational processes.

<br><br>

### Requirements

For the smooth execution of our solution, it is essential to set up and configure the following components in your development environment :
- Visual Studio Comunity 2010 with CLI : [Download](https://visualstudio.microsoft.com/fr/vs/older-downloads/)
- SQL server 2019 : [Download](https://www.microsoft.com/fr-fr/sql-server/sql-server-2019)
- SQL server management studio 19 : [Download](https://learn.microsoft.com/fr-fr/sql/ssms/download-sql-server-management-studio-ssms?view=sql-server-ver16)

<br><br>

## Architecture 
> **HCI** (Human-Computing Interaction)  
> &nbsp;&nbsp;&nbsp; MyForm/Main

> **Services**  
> &nbsp;&nbsp;&nbsp; CLstock
> &nbsp;&nbsp;&nbsp; CLemployee
> &nbsp;&nbsp;&nbsp; CLcustomers
> &nbsp;&nbsp;&nbsp; CLorders
> &nbsp;&nbsp;&nbsp; CLstats

> **Components**
> >**mother classes** <br>
> >&nbsp;&nbsp;&nbsp; CLmap
> >&nbsp;&nbsp;&nbsp; CLAdress
> 
> >**of mapping**  
> >&nbsp;&nbsp;&nbsp; CLmapStock
> >&nbsp;&nbsp;&nbsp; CLmapEmployee
> >&nbsp;&nbsp;&nbsp; CLmapCustomers
> >&nbsp;&nbsp;&nbsp; CLmapOrder
> >&nbsp;&nbsp;&nbsp; CLmapStats
>
> >**of connexion**  
> >&nbsp;&nbsp;&nbsp; CLcad

<br><br>

## Diagrams
###  1. Use case diagram

A use case diagram is crucial for understanding our project, simplifying system complexities through visual representation. As a communication tool, it fosters clarity among stakeholders and guides development by defining requirements. Emphasizing concrete scenarios, it anticipates user needs and adapts to changes in the development cycle.

![Capture d'écran 2023-12-03 211233](https://github.com/peio933/POO23_G4/assets/116553253/e8ddf7ae-7bff-4c4f-bc8f-9f7be90eaae9 "Use Case")
<!-- ![Capture d'écran 2023-12-03 211321](https://github.com/peio933/POO23_G4/assets/116553253/de46be1a-5e7a-427f-8fee-246f419f3c1f) -->
<!-- ![Capture d'écran 2023-12-03 211258](https://github.com/peio933/POO23_G4/assets/116553253/059e2a7e-da64-4051-a3fc-58de729b1fc1) -->

### 2. Class diagram
Class diagrams are essential for understanding the static structure of our project, visually representing classes, relationships, attributes, and methods. Serving as a communication tool, they foster team collaboration and maintain consistency between design and implementation. These diagrams provide a robust foundation for development, aiding code reference, promoting reuse, and facilitating static analysis, contributing to efficient system maintenance and reducing errors.

![MicrosoftTeams-image](https://github.com/peio933/POO23_G4/assets/116553253/d8984da1-131e-4bd3-82ca-997881b6f2fa "Class diagram")

<!--
### 3. Sequence diagrams

Using sequence diagrams is crucial to ensure a clear understanding of our project and system. They provide a dynamic visual representation of interactions between objects in a system over time. Detailing the sequence of events between objects, illustrating how they collaborate to accomplish specific functionalities, these diagrams offer a clear abstraction by highlighting message exchanges between objects, simplifying the understanding of the system's operational logic.

As a communication tool, they facilitate the understanding of execution flows between objects for development team members. Serving as a robust foundation for development, these diagrams provide a visual representation of dynamic interactions, guiding implementation and ensuring consistency with the design.

Focused on the chronology of events, they assist in anticipating and comprehending the system's behavior in various usage scenarios. Ultimately, sequence diagrams are adaptable to changes, allowing for updates to the representation based on the evolving needs of the system throughout the development cycle.

- Create an employee
  ![image]() *in progress*
- 'Read' an employee
  ![image]() *in progress*
- Update an employee
  ![image]() *in progress*
- Delete an employee
  ![image]() *in progress*
- Statistique Management
  ![image](https://github.com/peio933/POO23_G4/assets/116553253/81b11c4a-e95e-4913-9392-b584f2491286)

### 4. Activities diagrams

The activity diagram, integrated into the Unified Modeling Language (UML), provides a graphical representation of the processes and workflows within a system. By highlighting actions, decisions, transitions, and activities through graphical symbols, this diagram allows for a clear visual understanding of the sequential steps in a process. It proves particularly valuable for modeling dynamic aspects and detailing complex behaviors within a software system. As an analysis and design tool, the activity diagram facilitates communication among development team members, offering a precise view of interactions between different entities within the system. It is essential for planning, documentation, and optimization of operational processes within a project, contributing to robust and efficient software design.

![Diagramme_activité_person](https://github.com/peio933/POO23_G4/assets/116553253/51a70993-5291-4bea-9182-b99f5002f30f)
![Diagramme_activité_customer](https://github.com/peio933/POO23_G4/assets/116553253/697d34ff-e004-443e-9e05-3e07b02129ac)
![Diagramme_activité_stock](https://github.com/peio933/POO23_G4/assets/116553253/b9f7dcd2-40f7-49c3-80c9-a6a8875dc7a7)
![Diagramme_activité_Statistique](https://github.com/peio933/POO23_G4/assets/116553253/a470163f-9df4-474b-a3de-6d2ad45b9222)

-->

<br><br>

## DataBase
The creation and population of the database are fundamental steps in ensuring the functionality of our project. We have added fictitious data, however for your use we leave it to you to enter the values ​​linked to your activity. The following outlines the process using the codes you've developed and shared on our GitHub project:

  **1. Database Creation Script**
The initial step involves executing the database creation script available in the GitHub repository.

<p align="center">
    <a href="https://github.com/peio933/POO23_G4/blob/892086add2378a222e1e28eb6f38bd80809b6e2b/Requ%C3%AAte%20SQL/DatabaseCreation.sql">
      <img alt="Database creation code" src="https://github.com/RobinNoiret/RobinNoiret/blob/07d45aae2b0c3af0553d027a52d1c73c33934839/Btn_creation.svg" />
    </a>
</p>
<br>

  **2. Data Population Script**
Once the database structure is in place, the data population script is executed. This script inserts sample data or necessary initial records into the tables, allowing for testing and functionality validation.

<p align="center">
    <a href="https://github.com/peio933/POO23_G4/blob/11c99df1bbb004325f3a12bc2a1cff1997a53b53/Requ%C3%AAte%20SQL/DataBase%20Population.sql">
      <img alt="Database population code" src="https://github.com/RobinNoiret/RobinNoiret/blob/07d45aae2b0c3af0553d027a52d1c73c33934839/Btn_population.svg" />
    </a>
</p>
<br>

  **3. Database Population Test**
After running the data population script, it's crucial to perform a thorough test to ensure that the database is correctly populated. This involves executing predefined queries to retrieve and verify the inserted data. You have the different requests separated by categories

<p align="center">
    <a href="https://github.com/peio933/POO23_G4/tree/12156c977966878de624288e6343156f1bf44262/Requ%C3%AAte%20SQL">
      <img alt="Tests Passing" src="https://github.com/RobinNoiret/RobinNoiret/blob/07d45aae2b0c3af0553d027a52d1c73c33934839/Btn_test.svg" />
    </a>
</p>
<br>

## Authors
* **Robin NOIRET** - [Robin GitHub](https://github.com/RobinNoiret)
* **Peïo PICABEA** - [Peïo GitHub](lien)
* **Abdelmalik MEBARKI** - [Abdelmalik GitHub](https://github.com/mebmal)
* **Axel RUFFIN** - [Axel GitHub](https://github.com/AxelR69)
