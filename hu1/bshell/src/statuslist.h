#ifndef STATUSLIST_H

#define STATUSLIST_H


#endif /* end of include guard: STATUSLIST_H */

 typedef struct subprocess{
    pid_t pid;
    pid_t pgid;
    int status;
    int signal;
    char prog[256];
    struct subprocess *sub_prev;
    struct subprocess *sub_next;
} subprocess_t;

subprocess_t *add_subprocess(pid_t pid, pid_t pgid, const char* command);
void complete_subprocess(subprocess_t* dummy_ptr, pid_t pid, pid_t pgid);
void clean_processlist(void);
void remove_subprocess(pid_t pid);
void update_subprocess(pid_t pid, int status);
void print_subprocess();
void set_exit(pid_t pid, int exit);
void set_signal(pid_t pid, int sig);
void sigchld_handler(int signum);
void sig_act(void);
