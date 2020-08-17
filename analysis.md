### Class Scheduling Assignment

#### Section: 02

### PREPARED BY:

### Md Borhan Uddin 1822665

### Md Ferdous Ahmed Khan 1825869

### MD. Abu sayed Chowdhury 1711237

## Introduction

An algorithm is a finite list of instructions, most often used in solving problems or performing tasks. It is the term used in some fancy context about a genius using an algorithm to do something highly complex, usually in programming. Moreover, the term used to explain most things related to computer processes. Therefore, the aim of this assignment to analyses about schedule algorithm to choose best class scheduling algorithm. However, based on condition of assignment, we have chosen to analysis about three algorithm which are FCFS (First Come First Serve) which is an OS scheduling algorithm that automatically executes queued requests and processes in order of their arrival. It is the easiest and simplest CPU scheduling algorithm. SJF (Shortest Job First) which is an algorithm in which the process having the smallest execution time is chosen for the next execution., and Priority Scheduling, where if a new process arrives with a higher priority than the current running process, the incoming process is put at the head of the ready queue. These three are non-preemptive algorithm.

## Consideration

A process or algorithm is used to considered to choose by its outcome or performance as well as where more outcomes is received within a short period of time. We have had a consideration such as in FCFS, incoming processes are short and there is no need for the processes to execute in a specific order. As well as, another two algorithms give the minimum waiting time for a given set of processes and thus reduces the average waiting time. Also, in the last one, here is all processes get executed one after the other which does not lead to starvation of processes or waiting by process for quite long time to get executed. Hence, we considered the method in which the more tasks may undertake within the shortest period of time

## Analysis

### Comparison analysis:
### FCFS
Perception: Non-Pre-emptive

Complexity: Simplest

Allocation: It allocates the CPU in the order in which the process arrives. The average waiting time is large.

### SJF
Perception: Pre-emptive and Non-Pre-emptive

Complexity: Difficult to Understand

Allocation: The CPU is allocated to the process with least CPU burst time. The Average waiting time is small compared to FCFS.

### Priority
Perception: Pre-emptive and Non-Pre-emptive

Complexity: Complex for recognize.

Allocation: It is based on priority and the higher priority job can run fast.The average waiting time is small as compared to FCFS scheduling algorithm.



#### FCFS:

First Come First Served (FCFS) is the simplest and non preemptive scheduling algorithm. In First Come First Served, the process is allocated to the CPU in the order of their arrival. A queue data structure is used to implement the FCFS scheduling algorithm. The process which is at the head of the ready queue is allocated to the CPU, when CPU is free. Then the process which is running is removed from the queue. When a new process enters into the ready queue, it is placed onto the tail of the ready queue. In comparison, FCFS works best when compared to SJF and priority scheduling because the processes are short which means that no process will wait for a longer time. FCFS algorithm doesn't include any complex logic, it just puts the process requests in a queue and executes it one by one. Hence, FCFS is pretty simple and easy to implement. Eventually, every process will get a chance to run, so starvation doesn't occur. On the other hand, in SJF, the time taken by a process must be known by the CPU beforehand, which is not possible. Longer processes will have more waiting time, eventually they'll suffer starvation. On the contrary, in priority scheduling, a second scheduling algorithm is required to schedule the processes which have same priority. In preemptive priority scheduling, a higher priority process can execute ahead of an already executing lower priority process. If lower priority process keeps waiting for higher priority processes, starvation occurs.

#### Priority scheduling:

Priority scheduling is a non-preemptive algorithm and one of the most common algorithms in batch scheduling systems. It assigns a priority to each process. First and so forth, the process with the highest priority must be executed. Processes of the same priority are carried out on a first-come-first-served basis. Priority can be determined on the basis of memory requirements, time requirements, or any other requirement of resources. This algorithm makes scheduling methods easy to use. Processes are executed on the basis of priority, so there is no need to wait a long time which saves time. Compared to FCFS this algorithm is almost similar. Whereas, FCFS implement with the priority of class first come basis but, Priority scheduling implement with total priority of a class which was given. It is better than SJF because sometime some class have more priority so that will be implement first. The waiting time for this scheduling is 2.33333 and Average turnaround time is 4.33333.

#### SJF Scheduling:

First Shortest Job Scheduling works on the process first with the shortest burst time or duration. This is the most appropriate approach to minimize waiting time. This is applied to Batch Systems. To implement it successfully, the processor should be aware of the burst time/duration time of the processes in advance, which is virtually not feasible all the time. This scheduling algorithm is optimal if all of the jobs/processes are simultaneously available. It doesn't mind the time of arrival. It is demonstrably optimal in that it gives a given set of processes the minimum average waiting time. But Class scheduling is schedule time basis and it will not process as shortest class priority. So, compare to FCFS and Priority scheduling it will give us the shortest waiting time but for class scheduling it will give the priority to pre-defined class schedule. The waiting time for this scheduling is 1.33333 and Average turnaround time is 3.33333.

