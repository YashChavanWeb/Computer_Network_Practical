### Network Fundamentals Overview

#### **Network Components:**

- **Network**: A set of connected nodes that allows data to be transmitted between them.

  - **Example:**
    - Internet → Router → Bridge → Hub → Server → Repeater → PC

- **NIC (Network Interface Card)**: A hardware component that enables a computer to connect to a network. It has a unique **MAC address** that identifies the device at the data link layer.

- **Hub**: A network device that broadcasts data to all connected devices within the network (basic, inefficient).

- **Switch**: Unlike a hub, a switch sends data from the source device to the correct destination device based on MAC addresses.

- **Router**: A device that connects two or more networks (e.g., LAN to LAN or LAN to the internet) and routes packets between them based on IP addresses.

#### **Network Topologies**:

- **Star**: Centralized network where all nodes connect to a central device (e.g., switch or hub).
- **Bus**: Single communication line where all nodes are connected.
- **Ring**: Devices connected in a circular fashion, where data travels in one direction.
- **Mesh**: Each device is connected to every other device in the network.

#### **Network Protocols**:

A protocol is a set of rules that governs communication between devices in a network.

- **Data Transfer Modes**:

  - **Simplex**: Data flows in one direction only.
  - **Half-Duplex**: Data flows in both directions but not simultaneously.
  - **Full Duplex**: Data flows in both directions simultaneously.

- **Connection-Oriented vs. Connectionless Communication**:
  - **Connection-Oriented**: Requires establishing a connection before data transfer (e.g., TCP).
  - **Connectionless**: Data is sent without establishing a connection (e.g., UDP).

#### **Communication Primitives**:

- **LISTEN**: Waiting for incoming connections.
- **CONNECT**: Establishing a connection.
- **SEND**: Sending data.
- **RECEIVE**: Receiving data.
- **CLOSE**: Closing the connection.

---

### OSI Model: **Open Systems Interconnection**

The OSI model divides network communication into seven distinct layers, each performing specific functions:

1. **Physical Layer**: Deals with the transmission of raw bits over physical media (wires, fiber optics, etc.).

   - **Media Types**:
     - Twisted Pair
     - Coaxial Cable
     - Fiber Optic

2. **Data Link Layer**: Responsible for error detection and framing of data.

   - **Key Functions**:
     - **Framing**: Organizing data into frames.
     - **Error Detection**: Parity, checksums, cyclic redundancy check (CRC).
     - **Error Correction**: Techniques like Hamming Code.

3. **Network Layer**: Determines how data should be routed across the network.

   - **Packet Switching**: Stores and forwards packets (data units called datagrams).
   - **Routing**: Includes algorithms like Dijkstra’s and Distance Vector routing.
   - **Protocols**: IP, ICMP, ARP, RARP.

4. **Transport Layer**: Provides end-to-end communication services for applications.

   - **Connection-Oriented Protocol**: TCP (Transmission Control Protocol).
   - **Connectionless Protocol**: UDP (User Datagram Protocol).

5. **Session Layer**: Manages and controls the dialogues between computers (e.g., opening, closing sessions).

6. **Presentation Layer**: Ensures data is in a format that the application layer can understand (translation, compression, encryption).

7. **Application Layer**: Interfaces with end-user applications.
   - **Protocols**: DNS, HTTP, FTP, SMTP, POP3, DHCP, etc.

---

### TCP/IP Model

The TCP/IP model is a simplified, four-layer network model that is used in real-world internet communications:

1. **Network Access Layer**: Equivalent to the OSI model’s physical and data link layers.
2. **Internet Layer**: Equivalent to the OSI model’s network layer.
3. **Transport Layer**: Equivalent to the OSI transport layer.
4. **Application Layer**: Corresponds to the OSI model’s application, presentation, and session layers.

---

### **Physical Layer** (Guided Media):

- **Twisted Pair**: Common in phone lines and local area networks (LANs).
- **Coaxial Cable**: Used in TV networks and older Ethernet.
- **Fiber Optic Cable**: Uses light signals and is highly reliable and fast.

---

### **Data Link Layer**:

- **Framing**: Organizes data into manageable frames.
- **Error Detection Techniques**:

  - **Parity Check**: Single bit to check if data is valid (even or odd).
  - **Checksum**: Adding up data, inverting it, and checking if the result is zero.
  - **Cyclic Redundancy Check (CRC)**: Division method used to detect changes in data.

- **Error Correction**: Techniques like **Hamming Code** help correct errors at the receiver end.

- **Random Access Protocols**:
  - **ALOHA**: Sends data without checking the channel (can cause collisions).
  - **CSMA**: Checks if the channel is clear before sending to reduce collisions.

---

### **Network Layer**:

- **Packet Switching**: Divides data into packets and forwards them through the network.
- **Datagram**: Basic unit of data at the network layer.
- **Routing Algorithms**:

  - **Dijkstra’s Algorithm**: Selects the shortest path from one node to another.
  - **Distance Vector Routing**: Routers exchange distance vectors to determine the shortest path.
  - **Link-State Routing**: Routers broadcast link-state packets to inform others about network topology changes.

- **Addressing**:

  - **IPv4** (32-bit): Divided into classes (A, B, C, D, E).
    - **Class A**: Large corporations/ISPs.
    - **Class B**: Universities.
    - **Class C**: Small networks.
    - **Class D**: Multicast.
    - **Class E**: Experimental addresses.
  - **Subnetting**: Dividing IP address space into subnets.
  - **Supernetting**: Aggregating IP address blocks.

- **Protocols**:
  - **ARP (Address Resolution Protocol)**: Maps IP addresses to MAC addresses.
  - **RARP (Reverse ARP)**: Maps MAC addresses to IP addresses.
  - **ICMP (Internet Control Message Protocol)**: Used for sending error messages (e.g., Ping).
  - **IGMP (Internet Group Management Protocol)**: Used for managing multicast group memberships.

---

### **Transport Layer**:

- **Connection-Oriented Protocol**: TCP (TCP provides reliable, ordered delivery of data).
- **Connectionless Protocol**: UDP (UDP sends data without ensuring reliability).
- **Protocols**:
  - **TCP**: Establishes a connection (3-way handshake: SYN, SEQ, ACK), provides reliability, flow control, and congestion management.
  - **UDP**: No connection setup, faster, used in real-time applications.
- **Flow Control**: Managed using **Sliding Window Protocol**.
- **Congestion Control**: **TCP Slow Start** prevents network overload.

---

### **Application Layer**:

- **DNS (Domain Name System)**: Resolves domain names to IP addresses.
- **HTTP (Hypertext Transfer Protocol)**: Web page request/response over port 80.
- **SMTP (Simple Mail Transfer Protocol)**: Used for email transmission over port 25.
- **FTP (File Transfer Protocol)**: Transfers files over ports 20/21.
- **DHCP (Dynamic Host Configuration Protocol)**: Assigns dynamic IP addresses to devices on a network.

---
