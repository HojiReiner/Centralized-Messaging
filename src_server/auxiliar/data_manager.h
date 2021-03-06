#ifndef DATA_MANAGER_H
#define DATA_MANAGER_H

#include <stdbool.h>
#include <dirent.h>

void init_server_data();

//*Groups Management
int group_create(const char* uid, const char* gname);
int group_add(const char* uid, const char* gid, const char* gname);
int group_remove(const char* uid, const char* gid);
int groups_get(char** glist, const char* uid);
int group_users(char** ulist, const char* gid);
int group_msg_add(const char* uid, const char* gid, const char *text, char* mid);
int group_msg_remove(const char* gid, const char* mid);
int group_msg_file(const char* gid, const char* mid, const char* filename, char* pathname);
int group_msgs_get(const char* uid, const char* gid, const char* mid, char* pathname, struct dirent *** mids, int* nmsg);

//* User Management
int user_create(const char* uid, const char* pass);
int user_delete(const char* uid, const char* pass);
int user_entry(const char* uid, const char* pass, bool login);
int user_logged(const char* uid);

#endif