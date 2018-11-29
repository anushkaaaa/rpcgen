# rpcgen
To develop a simple distributed computing environment consisting of multiple Clients and a Server. The system is to be implemented in C or C++ and using the rpcgen utility discussed in the class. This assignment is intended to emphasize the RPC principles.

By: Anushka H Patil

Aim:
To develop a simple distributed computing environment consisting of multiple Clients and a Server. The system is to be implemented in C or C++ and using the rpcgen utility discussed in the class. This assignment is intended to emphasize the RPC principles.

--------------------------------

Content: <br />
A3.x<br />
A3.h<br />
Client files: A3_clnt.c, A3_client.c<br />
Server files: A3_svc.c, A3_server.c<br />
A3_xdr.c<br />
Makefile.A3<br />
Report<br />
readme<br />

--------------------------------

The program runs on any machine from the following list: <br />
in-csci-rrpc01.cs.iupui.edu 10.234.136.55 <br />
in-csci-rrpc02.cs.iupui.edu 10.234.136.56 <br />
in-csci-rrpc03.cs.iupui.edu 10.234.136.57 <br />
in-csci-rrpc04.cs.iupui.edu 10.234.136.58 <br />
in-csci-rrpc05.cs.iupui.edu 10.234.136.59 <br />
in-csci-rrpc06.cs.iupui.edu 10.234.136.60 <br />

--------------------------------

1. I did the rpcgen protocol compilation to generate the following files using the A3.x : he header file (A3.h), client files (A3_clnt.c, A3_client.c), server files (A3_svc.c, A3_server.c), XDR file (A3_xdr.c), and makefile (Makefile.A3). 

2. After the rpcgen protocol compilation, I modified the server and client side code for each of the procedures as per the requirements.

-----------------You can start from this step---------------

3. Compile the files using command: "make -f Makefile.A3"

4. Open an instance of putty on any of the machines listed above:
For instance, if you open machine 10.234.136.55
run the server using command: ./A3_server
Now, your server is running on machine 10.234.136.55

5. Open another instance of putty on any of the machines listed above:
run the client using command: ./A3_client 10.234.136.55 
Since, our server is running on machine 10.234.136.55, I used the 10.234.136.55 as the remote hostaddress on my command line. If you run server on different machine i.e. other than 10.234.136.55 use that address as the hostaddress on the command line.

6. You can run multiple clients on multiple machines simultaneously using step (5) The server is capable enough to serve multiple clients simultaneously.

7. On running the client, it will prompt client for following options:
	1. Hostname: Returns the hostname on which the server is running.
	2. mergeSort: Accepts two integer lists and returns their merged list that is sorted.
	3. encryptedEcho: Returns an encrypted version of whatever a Client sends as an input. 
	4. listFiles: Returns a list of all files in the current directory.
	5. addComplex: Accepts two complex numbers and returns their sum.
	6. Exit

The client can select any task amongst the above. 
Note: This prompt is running in a while loop, it breaks either when the client selects the option 6. Exit or any error is caused at client side. 

