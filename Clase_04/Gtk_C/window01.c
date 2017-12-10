#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
	GtkWidget *win;
	GtkWidget *grid;
	GtkWidget *button1;
	GtkWidget *button2;
	GtkWidget *checkbutton1;
	GtkWidget *checkbutton2;
	GtkWidget *checkbutton3;
	GtkWidget *checkbutton4;
//	GtkWidget *label1;
//	GtkWidget *label2;
//	GtkWidget *label3;
//	GtkWidget *label4;

	gtk_init (&argc , &argv);
	win = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	// title and size
	gtk_window_set_title (GTK_WINDOW(win), "Languaje selector" );
	gtk_window_set_default_size (GTK_WINDOW(win), 300 , 300);

	/// CONTAINER 
	gtk_container_set_border_width (GTK_CONTAINER (win), 50);
	// 
	grid = gtk_grid_new();
	gtk_container_add (GTK_CONTAINER (win), grid );

	//button
	button1 = gtk_button_new_with_label ("Learn");
	g_signal_connect (button1, "clicked", G_CALLBACK ("Okey"), NULL);

	button2 = gtk_button_new_with_label ("Quit");
	g_signal_connect (button2, "clicked", G_CALLBACK ("Bye"), NULL);


	// Ad bttn
	gtk_grid_attach (GTK_GRID (grid), button1, 0, 0, 1, 1);
	gtk_grid_attach (GTK_GRID (grid), button2, 2, 0, 1, 1);

	// label
	checkbutton1 = gtk_check_button_new_with_label ("Java");
	checkbutton2 = gtk_check_button_new_with_label ("C");
	checkbutton3 = gtk_check_button_new_with_label ("Javascript");
	checkbutton4 = gtk_check_button_new_with_label ("Python");
	// ya no se agrega a win sinoa grid
	gtk_container_add (GTK_CONTAINER (grid), GTK_WIDGET (checkbutton1));
	gtk_container_add (GTK_CONTAINER (grid), GTK_WIDGET (checkbutton2));
	gtk_container_add (GTK_CONTAINER (grid), GTK_WIDGET (checkbutton3));
	gtk_container_add (GTK_CONTAINER (grid), GTK_WIDGET (checkbutton4));
//	gtk_container_add (GTK_CONTAINER (grid), GTK_WIDGET (label2), 0 , 1 , 1, 1);
//	gtk_container_add (GTK_CONTAINER (grid), GTK_WIDGET (label3), 0 , 2 , 1, 1);
//	gtk_container_add (GTK_CONTAINER (grid), GTK_WIDGET (label4), 0 , 3 , 1, 1);
	//gtk_grid_attach (GTK_GRID (grid), button, 0, 2, 1, 1);


	// container

	gtk_widget_show_all (GTK_WIDGET (win));

	gtk_main ();

	return 0;
}