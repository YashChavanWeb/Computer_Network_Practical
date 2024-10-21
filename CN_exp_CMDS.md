1. **ping**

   - **Usage**: Check connectivity to a host.
   - **Ubuntu Command**: `ping <hostname or IP>`
   - **Windows Command**: `ping <hostname or IP>`
   - **Example**: `ping google.com`

2. **tracert (Windows) / traceroute (Linux)**

   - **Usage**: Trace the route packets take to a network host.
   - **Ubuntu Command**: `traceroute <hostname or IP>`
   - **Windows Command**: `tracert <hostname or IP>`
   - **Example**: `traceroute google.com`

3. **nslookup**

   - **Usage**: Query DNS to obtain domain name or IP address mapping.
   - **Ubuntu Command**: `nslookup <hostname>`
   - **Windows Command**: `nslookup <hostname>`
   - **Example**: `nslookup google.com`

4. **netstat**

   - **Usage**: Display network connections, routing tables, and interface statistics.
   - **Ubuntu Command**: `netstat -a`
   - **Windows Command**: `netstat -a`
   - **Example**: `netstat -n`

5. **arp**

   - **Usage**: View or modify the ARP table.
   - **Ubuntu Command**: `arp -a`
   - **Windows Command**: `arp -a`
   - **Example**: `arp -d <IP>`

6. **RARP (Reverse ARP)**

   - **Usage**: Used to map a MAC address to an IP address (less common now).
   - **Ubuntu Command**: Not typically used directly; handled by protocols.
   - **Windows Command**: Not typically used directly; handled by protocols.
   - **Example**: Generally not available directly in modern systems.

7. **ip**

   - **Usage**: Show/manipulate routing, devices, policy routing, and tunnels.
   - **Ubuntu Command**: `ip a` (to show all interfaces)
   - **Windows Command**: `ipconfig`
   - **Example**: `ip route show`

8. **ifconfig**

   - **Usage**: Configure or display network interface parameters (deprecated in favor of `ip`).
   - **Ubuntu Command**: `ifconfig`
   - **Windows Command**: `ipconfig`
   - **Example**: `ifconfig eth0`

9. **dig**

   - **Usage**: Query DNS servers for information.
   - **Ubuntu Command**: `dig <hostname>`
   - **Windows Command**: Requires installation of BIND tools; can use `nslookup` as an alternative.
   - **Example**: `dig google.com`

10. **route**

    - **Usage**: Display or manipulate the IP routing table.
    - **Ubuntu Command**: `route -n`
    - **Windows Command**: `route print`
    - **Example**: `route add <network> mask <mask> <gateway>`
