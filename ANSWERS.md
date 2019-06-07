**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

Ans. New (Create) – process is about to be created and is waiting to be admitted to the ready state.
  
 Ready – After creation of a process, the process enters ready state. The process is ready to run and is  
 waiting to get the CPU time for its execution.
  
 Run - The process is now chosen by the CPU for execution and the instruction in the process are executed.
  
 Blocked or wait - When the process needs something like user input or access to a critical section it goes into this state.
  
 Terminated or completed – the process is killed or has completed its execution. The underlying program is no longer executing.
  
 Suspend ready – process that was in ready state are taken out of the main memory and placed into external storage by a scheduler. The process can go back to a ready state when it is brought back to main memory.
  
 Suspend wait or suspend blocked – The process which was performing I/O operation and lack of main memory makes them move to secondary memory. When the work is finished it can go to suspend ready.

**2. What is a zombie process?**

Ans. Zombie process is a process that has completed execution but still has an entry in the process table. If a child function has finished execution and sends an exit status but the parent function has not read the exit status, the child function remains in a zombie state.

**3. How does a zombie process get created? How does one get destroyed?**

Ans. part 1. A Zombie process is created when a parent process does not wait for the child process termination and instead executes its task. Because of this when the child is terminated the exit status is not read. This causes an entry to remain in the process table even after the child has been terminated instead of being deleted. This state of the child process is the Zombie state.
  
 Part 2. A zombie state can be destroyed if a SIGCHILD signal is sent to the parent process. The signal tells the parent to execute the wait() system call and clean up its zombie children. The signal should be sent with the kill command.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

Ans. Compiled languages are converted directly into machine code that the processor can execute. This tends to cause them to be faster and more efficient. You also have more control over hardware aspects like memory management and CPU usage.
