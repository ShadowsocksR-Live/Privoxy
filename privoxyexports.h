#ifndef __PRIVOXY_EXPORTS_H__
#define __PRIVOXY_EXPORTS_H__ 1

typedef void (*privoxy_cb)(int fd, void *data);
extern int privoxy_main_entry(const char *conf_path, privoxy_cb cb, void *data);
extern void privoxy_shutdown(void);

#endif /* __PRIVOXY_EXPORTS_H__ */
