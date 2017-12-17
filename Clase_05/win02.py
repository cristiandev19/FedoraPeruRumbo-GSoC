#! usr/bin/env python3

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk


class GtkListBoxObj(Gtk.Window):
	def __init__(self):
		Gtk.Window.__init__(self, title ="GTK LIST BOX")
		self.set_border_width(20)

		box_outer = Gtk.Box(orientation=Gtk.Orientation.VERTICAL, spacing=10)
		self.add(box_outer)

		listbox = Gtk.ListBox()
		listbox.set_selection_mode(Gtk.SelectionMode.NONE)
		box_outer.pack_start(listbox, True, False, 0)

		row = Gtk.ListBoxRow()

		link1 = Gtk.LinkButton("https://www.google.com","Google")

		hbox = Gtk.Box(orientation=Gtk.Orientation.HORIZONTAL, spacing=50)
		vbox = Gtk.Box(orientation=Gtk.Orientation.VERTICAL)
		row.add(hbox)
		vbox = Gtk.Box(orientation=Gtk.Orientation.VERTICAL)
		vbox = Gtk.Box(orientation=Gtk.Orientation.VERTICAL)
		vbox = Gtk.Box(orientation=Gtk.Orientation.VERTICAL)
		hbox.pack_start(vbox, True, True, 0)

		label1 = Gtk.Label("Nombre", xalign=0)
		label2 = Gtk.Label("Apellido", xalign=0)
		
		label3 = Gtk.Label("Universidad", xalign=0)
		label4 = Gtk.Label("Universidad", xalign=0)
		combo = Gtk.ComboBoxText()
		combo.insert(0, "Java", "Java")
		combo.insert(1, "Python", "Python")
		combo.insert(2, "C", "C")
		combo.insert(3, "JavaScript", "JavaScript")
		# hbox.pack_start(label3,True,True,0)

		# label4 = Gtk.Label("Nas", xalign=0)
		# label5 = Gtk.Label("Nd3q", xalign=0)


		vbox.pack_start(label1, False, True, 0)
		vbox.pack_start(label2, False, True, 0)
		vbox.pack_start(label3, False, True, 0)
		vbox.pack_start(label3, False, True, 0)
		# vbox.pack_start(label4, True, True, 0)
		# vbox.pack_start(label5, True, True, 0)
		
		vbox.pack_start(combo,True,True,0)
		vbox.pack_start(link1,True,True,0)

		listbox.add(row)

		
# def main():
# 	win = Gtk.Window ()
# 	win.set_title("GTK LIST BOX")
# 	gtk1 = Gtk.ListBox ()

# 	win.add (gtk1)



if __name__ == '__main__':
	win2 = GtkListBoxObj()
	win2.show_all () 
	win2.connect ("destroy",Gtk.main_quit)
	Gtk.main ()
		
	
	# main()
