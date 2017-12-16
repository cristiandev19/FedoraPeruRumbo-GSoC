#include<gtk/gtk.h>

int main(int argc, char const *argv[])
{
	GtkWidget *win;
	GtkWidget *list;

	gtk_init (&argc , &argv);
	win = gtk_window_new (GTK_WINDOW_TOPLEVEL);

	// title and size
	gtk_window_set_title (GTK_WINDOW(win), "Languaje selector" );
	gtk_window_set_default_size (GTK_WINDOW(win), 200 , 100);


	list = gtk_list_box_new (void);

	gtk_signal_connect (GTK_OBJECT (listbox), "selection_changed", GTK_SIGNAL_FUNC (listbox_changed), "selection_changed");


	// gtk_list_set_selection_mode (GTK_LIST (listbox), GTK_SELECTION_BROWSE);

	gtk_list_box_set_selection_mode (GTK_LIST(listbox), GTK_SELECTION_BROWSE);


	g_signal_connect (button2, "clicked", G_CALLBACK (gtk_main_quit), NULL);
    g_signal_connect (win, "destroy", G_CALLBACK (gtk_main_quit), NULL);

    // gtk_signal_connect (GTK_OBJECT (window), "delete_event",
    // GTK_SIGNAL_FUNC (CloseAppWindow), NULL);

	gtk_widget_show_all (GTK_WIDGET (win));

	gtk_main ();

	return 0;
}