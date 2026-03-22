/*
 * Stub BounceStudio header for CI builds.
 * Declares the functions used by the PHP extension so it compiles
 * without the proprietary libBounceStudio64. The real shared library
 * is only needed at runtime.
 */

#ifndef BOUNCESTUDIO_H
#define BOUNCESTUDIO_H

void bsBounceStudio_init(void);
int  bsBounceCheck(const char *message, char **bounce, const char *ignoreAddresses, const char *license);
void bsGetBody(const char *message, char **body);
void bsGetHeader(const char *message, char **header);
void bsGetCustomHeader(const char *message, char **header, const char *name);
void bsGetOrigCustomHeader(const char *message, char **header, const char *name);
void bsGetFromAddress(const char *message, char **address);
void bsGetFromFriendlyName(const char *message, char **name);
void bsGetToAddress(const char *message, char **address);
void bsGetToFriendlyName(const char *message, char **name);
void bsGetReplyToAddress(const char *message, char **address);
void bsGetReplyToFriendlyName(const char *message, char **name);
void bsGetSubject(const char *message, char **subject);

#endif
