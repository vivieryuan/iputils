#ifndef IPUTILS_COMMON_H
#define IPUTILS_COMMON_H

#if defined(USE_IDN) || defined(ENABLE_NLS)
# include <locale.h>
#endif

#ifdef ENABLE_NLS
# include <libintl.h>
# define _(Text) gettext (Text)
#else
# undef bindtextdomain
# define bindtextdomain(Domain, Directory) /* empty */
# undef textdomain
# define textdomain(Domain) /* empty */
# define _(Text) Text
#endif

#endif /* IPUTILS_COMMON_H */
