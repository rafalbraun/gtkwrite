#ifndef _gtk_sourceviewmisc_h_
#define _gtk_sourceviewmisc_h_  1

#include <glib.h>
#include <gtk/gtk.h>

#include "gtk_appdata.h"

GtkWidget *highlight_build_menu (gpointer data);
GtkWidget *sourceview_syntax_styles_menu (GtkWidget *menu, gpointer data);

#endif
