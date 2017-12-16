#include<gtk/gtk.h>
//#include<webkit/webkit.h>

void openUrl(GtkWidget *widget, gpointer *source){
	gboolean val =  gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(source));
	if (val){
		GtkWidget *webbrowser = gtk_windows_new(GTK_WINDOWS_TOPLEVEL);
		GtkWidget *scrollerwiew = gtk_scroled_window_new(NULL,NULL);
		GtkWidget *webview  = webkit_web_view_new();
		gtk_container_add(GTK_container(scrollerwiew), webview); 
		gtk_container_add(GTK_container(webbrowser),scrollerwiew)
		const gchar *resource = gtk_button_get_label(GTK_BUTTON(source));
		if(g_strcmp0(resource,"Java") == 0){
			webkit_web_view_load_uri(WEBKIT_WEB_VIEW(webview),"http:www.google.com");
		}

		gtk_window_set_default_size(GTK_WINDOW(webbrowser),400,300);
		gtk_widget_show_all(webbrowser);
	}
}

int main(int argc, char *argv[])
{
	/* code */
	return 0;
}




