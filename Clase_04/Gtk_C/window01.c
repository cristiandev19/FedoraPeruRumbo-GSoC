#include <gtk/gtk.h>
#include<webkit/webkit.h>
#include<stdio.h>

static void
go_to_the_page (GtkWidget *widget, gpointer   data)
{
  g_print ("Start to Learn\n");
}

void
gtk_widget_destroy (GtkWidget *widget);


// static void output_state (GtkToggleButton *source, gpointer user_data) {
// 	//printf ("Active: %d\n", gtk_toggle_button_get_active (source));
// 	gboolean val = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(source));
// 	if(val){
// 		printf("por qué no sale system :c\n");
// 	}

// 	// if (gtk_toggle_button_get_active (source) == 1){
// 	// 	printf ("verdadero");
// 	// }
// 	// else{
//  //  		printf ("falso");
// 	// }
// }

// //void activeToggle(val){
// //	if (val = TRUE){
// //		g_print("true");
// //	}
// //}



int main(int argc, char *argv[])
{
	GtkWidget *win;
	GtkWidget *grid;
	GtkWidget *button2;
	GtkWidget *button1;
	GtkWidget *checkbutton1;
	GtkWidget *checkbutton2;
	GtkWidget *checkbutton3;
	GtkWidget *checkbutton4;
	GtkWidget *link;

	gboolean val;

	gtk_init (&argc , &argv);
	win = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	// title and size
	gtk_window_set_title (GTK_WINDOW(win), "Languaje selector" );
	gtk_window_set_default_size (GTK_WINDOW(win), 200 , 100);
	// color
//	gtk_color_chooser_get_rgba(GtkColorChooser *chooser , )

	/// CONTAINER 
	gtk_container_set_border_width (GTK_CONTAINER (win), 10);
	// 
	grid = gtk_grid_new();
	gtk_container_add (GTK_CONTAINER (win), grid );

	//button
	button1 = gtk_button_new_with_label ("Learn");
	// g_signal_connect (button1, "clicked", G_CALLBACK (go_to_the_page), checkbutton1);

// 	// label
	button2 = gtk_button_new_with_label ("Quit");
//	g_signal_connect_swapped (button2, "clicked", G_CALLBACK (gtk_widget_destroy),win);	

// link 
	//link = gtk_link_button_new()


	checkbutton1 = gtk_check_button_new_with_label ("Java");
	checkbutton2 = gtk_check_button_new_with_label ("C");
	checkbutton3 = gtk_check_button_new_with_label ("Javascript");
	checkbutton4 = gtk_check_button_new_with_label ("Python");
	

//	gtk_toggle_button_set_mode (GTK_TOGGLE_BUTTON (checkbutton1), TRUE);
//	val = gtk_toggle_button_get_mode(GTK_TOGGLE_BUTTON (togglebutton1), FALSE);
	// ya no se agrega a win sinoa grid
	gtk_grid_attach (GTK_GRID (grid), checkbutton1, 0 , 1 , 1, 1);
	gtk_grid_attach (GTK_GRID (grid), checkbutton2, 0 , 2 , 1, 1);
	gtk_grid_attach (GTK_GRID (grid), checkbutton3, 1 , 1 , 1, 1);
	gtk_grid_attach (GTK_GRID (grid), checkbutton4, 1 , 2 , 1, 1);

	// Ad bttn
	gtk_grid_attach (GTK_GRID (grid), button1, 0, 3, 1, 1);
	gtk_grid_attach (GTK_GRID (grid), button2, 1, 3, 1, 1);


//	gtk_container_add (GTK_CONTAINER (grid), GTK_WIDGET (label2), 0 , 1 , 1, 1);
//	gtk_container_add (GTK_CONTAINER (grid), GTK_WIDGET (label3), 0 , 2 , 1, 1);
//	gtk_container_add (GTK_CONTAINER (grid), GTK_WIDGET (label4), 0 , 3 , 1, 1);
	//gtk_grid_attach (GTK_GRID (grid), button, 0, 2, 1, 1);
	// container

	gtk_widget_show_all (GTK_WIDGET (win));

	gtk_main ();

	return 0;
}
