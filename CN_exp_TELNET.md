  ### Configuring Telnet on a Switch

**Objective:** Set up Telnet access to a switch for remote management.

#### Prerequisites:

- Connect your PC to the switch.
- Assign the IP address to the PC:
  - **IP Address:** 192.168.1.1
  - **Subnet Mask:** 255.255.255.0

---

### Switch Configuration Steps:

1. **Access the Switch CLI:**

   - Connect to the switch and open the command-line interface (CLI).
   - You will start in user mode.

2. **Enter Privileged EXEC Mode:**

   - Type `enable` (or `en`).

3. **Enter Global Configuration Mode:**

   - Type `configure terminal` (or `conf t`).

4. **Configure the Switch:**

   - **Set the Hostname:**
     ```plaintext
     hostname switch1
     ```
   - **Set the Enable Password:**
     ```plaintext
     enable secret 1234
     ```
   - **Configure VLAN Interface:**
     - Enter the interface configuration mode:
       ```plaintext
       interface vlan 1
       ```
     - Assign the IP address and subnet mask:
       ```plaintext
       ip address 192.168.1.2 255.255.255.0
       ```
     - Activate the interface:
       ```plaintext
       no shutdown
       ```
     - Exit the interface configuration mode:
       ```plaintext
       exit
       ```

5. **Enable Telnet Access:**

   - Enter line configuration mode for VTY lines:
     ```plaintext
     line vty 0 4
     ```
   - Set the password for Telnet access:
     ```plaintext
     password 123456
     ```
   - Enable login for Telnet access:
     ```plaintext
     login
     ```
   - Exit line configuration mode:
     ```plaintext
     exit
     ```

6. **Save Configuration:**
   - Save your configuration to avoid loss after a reboot:
     ```plaintext
     write memory
     ```

---

### Testing Telnet Access:

1. **Open Command Prompt on Your PC:**

   - Type the following command:
     ```plaintext
     telnet 192.168.1.2
     ```

2. **Enter the Password:**

   - When prompted, enter the enable password (`1234`).

3. **Enter Privileged EXEC Mode:**
   - Type `enable` (or `en`).
   - Enter the Telnet password (`123456`).

---

**Congratulations!** You have successfully configured Telnet access to the switch.
