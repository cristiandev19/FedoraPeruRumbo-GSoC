#! usr/bin/env python3

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk


class GtkListBoxObj(Gtk.Window):
	def __init__(self):
#		webview = WebKit.WebView()
		Gtk.Window.__init__(self, title ="GTK LIST BOX")
		self.set_border_width(10)

		box_outer = Gtk.Box(orientation=Gtk.Orientation.VERTICAL ,spacing=20)
		self.add(box_outer)

		listbox = Gtk.ListBox()
		listbox.set_selection_mode(Gtk.SelectionMode.NONE)
		labelEXT = Gtk.Label("hola")
		box_outer.pack_start(labelEXT,False,False,0)
		box_outer.pack_start(listbox, False, False, 0)


		# row = Gtk.ListBoxRow()

		link1 = Gtk.LinkButton("https://www.java.com/es/download/","JAVA")
		link2 = Gtk.LinkButton("https://www.cprogramming.com/","C")
		link3 = Gtk.LinkButton("https://www.python.org","PYTHON")
		link4 = Gtk.LinkButton("http://devdocs.io/javascript/","JAVASCRIPT")
		row = Gtk.ListBoxRow()
		
		hbox = Gtk.Box(orientation=Gtk.Orientation.HORIZONTAL, spacing=100)
		row.add(hbox)
		# vbox = Gtk.Box(orientation=Gtk.Orientation.VERTICAL)
		# hbox.pack_start(vbox, True, True, 0)




		label1 = Gtk.Label("Nombre", xalign=0)
		label2 = Gtk.Label("Apellido", xalign=0)	
		label3 = Gtk.Label("Universidad", xalign=0)
		label4 = Gtk.Label("Universidad", xalign=0)
		hbox.pack_start(label1, True, True, 0)
		hbox.pack_start(link1,True,True,0)

		listbox.add(row)

######################################################

		row = Gtk.ListBoxRow()
		hbox = Gtk.Box(orientation=Gtk.Orientation.HORIZONTAL, spacing=100)
		row.add(hbox)
		# vbox = Gtk.Box(orientation=Gtk.Orientation.VERTICAL)
		# hbox.pack_start(vbox, True, True, 0)

		
		hbox.pack_start(label2, True, True, 0)
		hbox.pack_start(link2,True,True,0)
		
		listbox.add(row)


######################################################

		row = Gtk.ListBoxRow()
		hbox = Gtk.Box(orientation=Gtk.Orientation.HORIZONTAL, spacing=100)
		row.add(hbox)
		# vbox = Gtk.Box(orientation=Gtk.Orientation.VERTICAL)
		# hbox.pack_start(vbox, True, True, 0)


		hbox.pack_start(label3, True, True, 0)
		hbox.pack_start(link3,True,True,0)
		
		listbox.add(row)




if __name__ == '__main__':
	win2 = GtkListBoxObj()
	win2.show_all ()
#	win2.add(webview) 
	win2.connect ("destroy",Gtk.main_quit)
	Gtk.main ()
		
