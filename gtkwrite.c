#include "gtk_windef.h"
#include <glib.h>           /* g_fprintf */
#include <glib/gprintf.h>
#ifndef GLIB236
 #include <glib-object.h>
#endif

int main (int argc, char **argv) {

#ifndef GLIB236
    g_type_init();
#endif
    kwinst *app = NULL;             /* replaced GtkWidget *window */
    app = g_slice_new (kwinst);     /* allocate mem for struct    */
    context_init (app, argv);       /* initialize struct values   */

    // gtk_init (&argc, &argv);        /* terminates if can't initialize */
    if (!gtk_init_check (&argc, &argv)) {   /* same but doesn't exit */
        g_fprintf (stderr, "error: gtk_init failed.\n");
        return 1;
    }

    if (!create_window (app)) {     /* create the main window   */
        g_fprintf (stderr, "error: create_window failed.\n");
        return 1;
    }

    if (argc > 1) {  /* TODO: implement getopt */
        app->filename = g_strdup (argv[1]);
        split_fname (app);
        buffer_insert_file (app, NULL);
        ibar_eol_chk_default (app);
        // buffer_eol_chk_default (app);
    }

    gtk_main ();

    context_destroy (app);          /* free allocated members   */
    g_slice_free (kwinst, app);    /* free struct memory       */

    return 0;
}
