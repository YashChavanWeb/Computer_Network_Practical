# Software Development Process Overview

## Module 1: Software Process and Frameworks

### Software Process

A software process encompasses a set of activities and tasks involved in the development and maintenance of software.

### Framework

A framework provides a foundational, predefined structure that guides the software development process.

### Capability Maturity Model (CMM)

The Capability Maturity Model (CMM) is used to analyze the maturity of an organization’s software development practices.

#### Key Process Areas (KPAs)

The model outlines five maturity levels:

1. **Initial**: Unstructured and chaotic processes.
2. **Repeatable**: Basic project management processes are established.
3. **Defined**: Processes are documented and standardized.
4. **Optimizing**: Continuous process improvement is emphasized.

### Trends in Software Development

- **Artificial Intelligence (AI)**
- **Cloud Computing** (e.g., AWS)
- **Data Mining**
- **Internet of Things (IoT)**

### Software Development Models

1. **Waterfall Model**

   - A linear and sequential approach.
   - Steps:
     1. Requirement Analysis
     2. Design and Planning
     3. Implementation/Development
     4. Testing
     5. Deployment
     6. Maintenance

2. **Spiral Model**

   - Focuses on risk assessment and iterative development.
   - Steps:
     1. Requirement Gathering
     2. Identify Risks
     3. Development and Testing
     4. Release
     5. Feedback
     6. Plan Next Iteration

3. **Incremental Model**

   - Software is developed and delivered in increments based on user feedback.

4. **Rapid Application Development (RAD)**

   - Emphasizes rapid prototyping and quick feedback.
   - Steps:
     1. Elicit Requirements
     2. Modularize Requirements
     3. Develop Modules (Analyze, Design, Develop, Test)
     4. Integrate Modules
     5. Test and Deploy

5. **Agile Model**

   - Focuses on iterative development with frequent feedback.
   - Steps:
     1. Requirements
     2. Development
     3. Design
     4. Quality Assessment / Testing
     5. Deployment
     6. Feedback

   #### Agile Frameworks:

   - **Scrum**: Roles include Scrum Master, Scrum Team, and Product Owner.
   - **Extreme Programming (XP)**: Adapts to changing customer demands through constant feedback.
   - **Kanban**: Visualizes tasks and workflow using Kanban boards.

---

## Module 2: Requirement Engineering

### Key Phases

1. **Inception**: Ask key questions to define the project.
2. **Elicitation**: Gather requirements from stakeholders.
3. **Negotiation**: Reach consensus on requirements.
4. **Validation**: Ensure requirements meet needs.
5. **Specification**: Document requirements clearly.

### Tools

- **Class Diagrams**
- **Use Cases**
- **Data Flow Diagrams (DFD)**
- **Activity Diagrams**

---

## Module 3: Process and Project Metrics

### Process Metrics

- **Product Metrics**
- **Process Metrics**
- **People Metrics**
- **Project Metrics**

### Key Steps

- Assess project status
- Identify risks
- Implement process improvements
- Evaluate team performance
- Analyze workflow

### Project Metrics

- **Product Quality**
- **Testing Metrics**

### Software Measurement

- **Lines of Code (LOC)**
- **Speed**
- **Size**
- **Defects**

### Function-Oriented Metrics (Function Points)

- Measures functions delivered by the application based on:
  - Inputs
  - Outputs
  - Inquiries
  - Internal Files
  - External Interfaces

### COCOMO Model (Constructive Cost Model)

- Estimates effort based on:
  - Lines of Code (LOC)
  - Development time
  - Average staff requirements
- Objects categorized by complexity: Simple, Medium, Complex.

---

## Module 4: Design Principles and Concepts

### Design Principles

- Modularization
- Integration
- Separation of Coding and Design
- Gradual Degradation
- Comprehensive Coverage

### Key Concepts

- **Architecture**
- **Abstraction**
- **Components**
- **Modularization**
- **Object-Oriented Programming (OOP)**
- **Functional Independence**

### Cohesion

- Aim for maximum cohesion within modules.
- Types of Cohesion:
  - Coincident
  - Communicative
  - Logical
  - Temporal

### Coupling

- Minimize interdependence between modules.
- Types of Coupling:
  - Data Coupling
  - Stamp Coupling
  - Control Coupling
  - External Coupling

### Architectural Styles

- Data-Centered
- Call and Return
- Data Flow / Pipe and Filter
- Layered Architecture (Core, Utility, Application, User Interface)
- Object-Oriented

### Architectural Patterns

- Model-View-Controller (MVC)
- Process Manager
- Observer Pattern

---

## Module 5: Types of Testing

### Testing Types

- Unit Testing
- Integration Testing
- System Testing
- Sandwich Testing
- Black Box Testing
- Regression Testing
- Smoke Testing

### White Box vs. Black Box Testing

- **White Box Testing**: Internal functions known; requires code knowledge; conducted by developers.
- **Black Box Testing**: External behavior tested without knowledge of internal workings.

### Basis Path Testing

- Focuses on control structures.
- Uses Cyclomatic Complexity to determine independent paths and test cases.

### Equivalence Testing

- Derives test cases from data domains and classes, covering valid and invalid scenarios.
- **Boundary Testing**: Tests values at the edges of data ranges.

---

## Module 6: Risk Management and Quality Assurance

### Types of Risks

- Project Risk
- Business Risk
- Technical Risk
- Predictable Risks
- Unpredictable Risks

### Software Quality Assurance Metrics

- Default Density
- Code Coverage
- Cyclomatic Complexity
- Mean Time to Failure (MTTF)
- Mean Time to Repair (MTTR)

### Software Configuration Management (SCM)

- Software Configuration Items (SCIs)
- Identification
- Version Control
- Auditing
- Maintenance

### Change Control Process

1. Change Request
2. Change Evaluation
3. Change Approval
4. Change Implementation

### RMMM (Risk Mitigation, Monitoring, Management)

### Risk Information Sheet (RIS)

- Risk Table
- Context
- Measures Taken
- Plans/Strategies

This structured overview encapsulates the key aspects of software development processes, ensuring clarity and comprehensive understanding for stakeholders involved.
