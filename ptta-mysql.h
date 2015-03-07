#include <mysql/mysql.h>


struct django_auth_user{
   char *username;
   char *password;
};


void *ptta_mysql_init();
void ptta_mysql_destroy(void *conf);

struct django_auth_user *get_django_user_by_username(void *handle, const char *username);
struct django_auth_user *get_django_user_by_token(void *handle, const char *token);
