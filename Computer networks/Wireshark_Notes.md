# Wireshark Analysis Lab

Instructions for using Wireshark for network traffic capture and analysis.

### 📝 Key Operations

1.  **Packet Capture**: Select the active network interface and click the shark fin icon to start capturing.
2.  **Filtering Traffic**: Use display filters like `http`, `tcp`, `ip.addr == 192.168.1.1` to narrow down results.
3.  **Viewing Traffic**: Click on individual packets to see their encapsulated layers (Frame, Ethernet, IP, TCP/UDP).
4.  **Analysis & Statistics**: 
    - Use `Statistics > Protocol Hierarchy` to see protocols distribution.
    - Use `Statistics > Conversation` to see endpoints communication.
