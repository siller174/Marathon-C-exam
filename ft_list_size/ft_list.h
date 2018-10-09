#define FT_LIST
# ifndef FT_LIST

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif