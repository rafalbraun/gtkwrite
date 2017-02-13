#ifndef _gtk_settings_h_
#define _gtk_settings_h_  1

#include <gtk/gtk.h>

#include "gtk_appdata.h"

/* settings functions */
GtkWidget *create_settings_dlg (context *app);
void settings_btncancel (GtkWidget *widget, context *app);
void settings_btnok (GtkWidget *widget, context *app);
void settings_fontbtn (GtkWidget *widget, context *app);
void chkdynwrap_toggled    (GtkWidget *widget, context *app);
void chkshowdwrap_toggled    (GtkWidget *widget, context *app);
void chksmarthe_toggled    (GtkWidget *widget, context *app);
void chkwraptxtcsr_toggled    (GtkWidget *widget, context *app);
void chkpgudmvscsr_toggled    (GtkWidget *widget, context *app);

#endif
