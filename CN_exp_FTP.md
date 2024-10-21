### Experiment Outline: File Transfer Between PCs and Server (using router)

**Objective**: To transfer files from a PC to a server and download files from the server to a PC.

#### Equipment and Setup

1. **Network Devices**:

   - Generic Server
   - 1841 Router
   - Switch
   - 2 PCs

2. **Network Configuration**:
   - Connect the router to the server and switch.
   - Assign IP addresses as follows:
     - **Router**:
       - Port to Server: `10.10.10.1`
       - Port to Switch: `192.168.0.1`
     - **PCs**:
       - PC1: `192.168.0.2`, Gateway: `192.168.0.1`
       - PC2: `192.168.0.3`, Gateway: `192.168.0.1`
     - **Server**: Assign an IP address in the same subnet as the router for FTP access.

#### FTP Server Configuration

1. **Set Up FTP Server**:
   - Navigate to **Services** on the server.
   - Enable **FTP** service.
   - Create a new user account with a username and password.
   - Ensure all functions are ticked (read/write permissions, etc.).

#### File Upload Procedure

1. **Upload File from PC1 to Server**:
   - Open a text editor on PC1 and create a file named `hello.txt`.
   - Save the file.
   - Open Command Prompt on PC1.
   - Ping the server to ensure connectivity:
     ```bash
     ping 10.10.10.2
     ```
   - If the first ping fails, try again.
   - Connect to the FTP server:
     ```bash
     ftp 10.10.10.2
     ```
   - Enter the username and password created earlier.
   - Upload the file:
     ```bash
     put hello.txt
     ```
   - Verify the upload:
     ```bash
     dir
     ```

#### File Download Procedure

1. **Download File from Server to PC2**:
   - On PC2, open Command Prompt.
   - Connect to the FTP server:
     ```bash
     ftp 10.10.10.2
     ```
   - Login with the same credentials.
   - Download the file:
     ```bash
     get hello.txt
     ```
   - The file will now be saved to PC2.

#### Conclusion

This experiment demonstrates how to set up a basic network, configure an FTP server, and perform file transfers between PCs and a server. Ensure all steps are followed accurately for successful file operations.

### Experiment Outline: File Transfer Between PCs and Server (using Switch)

**Objective**: To transfer files from a PC to a server and enable another PC to access those files over a network using a switch.

#### Equipment and Setup

1. **Network Devices**:

   - Generic Server
   - Switch
   - 2 PCs

2. **Network Configuration**:
   - Connect the server and both PCs to the switch using Ethernet cables.
   - Assign IP addresses as follows:
     - **Server**: `10.10.10.1`
     - **PC1**: `10.10.10.2`, Gateway: `10.10.10.1`
     - **PC2**: `10.10.10.3`, Gateway: `10.10.10.1`

#### FTP Server Configuration

1. **Set Up FTP Server**:
   - On the server, navigate to the **Services** section.
   - Enable the **FTP** service.
   - Create a new user account with a username and password.
   - Ensure that read/write permissions are enabled for the account.

#### File Upload Procedure

1. **Upload File from PC1 to Server**:
   - On PC1, open a text editor and create a file named `hello.txt`.
   - Save the file.
   - Open Command Prompt on PC1.
   - Test connectivity to the server:
     ```bash
     ping 10.10.10.1
     ```
   - If the ping fails, check the network connections and settings.
   - Connect to the FTP server:
     ```bash
     ftp 10.10.10.1
     ```
   - Log in using the credentials created earlier.
   - Upload the file to the server:
     ```bash
     put hello.txt
     ```
   - Verify the upload by listing the files on the server:
     ```bash
     dir
     ```

#### File Download Procedure

1. **Access File from PC2**:
   - On PC2, open Command Prompt.
   - Connect to the FTP server:
     ```bash
     ftp 10.10.10.1
     ```
   - Log in with the same credentials.
   - Download the file from the server:
     ```bash
     get hello.txt
     ```
   - The file will be saved to PC2.

#### Conclusion

This experiment demonstrates how to configure a local network using a switch, set up an FTP server, and perform file transfers between PCs and a server. Follow all steps carefully to ensure successful file operations.
