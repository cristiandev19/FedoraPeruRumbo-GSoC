#!/usr/bin/gjs

const Gtk = imports.gi.Gtk;
const Lang = imports.lang;

Gtk.init(null);
//aqui puede ir codigo
const MyWindow = Lang.Class({
    Name: 'MyWindow',
    Extends: Gtk.Window,

    _init: function() {
        this.parent({title: "Choose a languaje"});
        this.border_with = 100;
    //    this.button = new Gtk.Button({label: "Click here"});
    //    this.button.connect("clicked", this.onButtonClicked);
        let grid = new Gtk.Grid();
        this.add(grid);

    let label = new Gtk.Label();
    label.label = "Languajes";
    label.angle = 25;
    label.halign = Gtk.Align.END;
    let checkButton1 = new Gtk.CheckButton({label:"Java"});
    let checkButton1 = new Gtk.CheckButton({label:"Java"});
    let checkButton2 = new Gtk.CheckButton({label:"C++"});
    let checkButton3 = new Gtk.CheckButton({label:"CSharp"});
    let checkButton4 = new Gtk.CheckButton({label:"Javascript"});
    let checkButton5 = new Gtk.CheckButton({label:"Python"});
    let checkButton6 = new Gtk.CheckButton({label:"C"});
    let button1 = new Gtk.Button({label: "Quit"});
    let button2 = new Gtk.Button({label: "Learn"});

    
    grid.attach(label,1,0,1,1);
    grid.attach(checkButton1,1,1,1,1);   
    grid.attach(checkButton2,1,2,1,1);
    grid.attach(checkButton3,2,1,1,1);
    grid.attach(checkButton4,2,2,1,1);
    grid.attach(checkButton5,2,3,1,1);
    grid.attach(checkButton6,1,3,1,1);
    grid.attach(button1,1,4,1,1);
    grid.attach(button2,2,4,1,1);

    button1.connect("clicked",this.onButtonClicked1);
    button2.connect("clicked",this.onButtonClicked2);
    checkButton1.connect("clicked",this.onCheckButtonClicked1)
    checkButton2.connect("clicked",this.onCheckButtonClicked2);
    checkButton3.connect("clicked",this.onCheckButtonClicked3);
    checkButton4.connect("clicked",this.onCheckButtonClicked4);
    checkButton5.connect("clicked",this.onCheckButtonClicked5);
    },

    onButtonClicked1: function(widget) {
        print("This is a goodbye, cy@ soon ");
        
    },

    onButtonClicked2: function(widget) {
        print("Start to learn");
    },

    onCheckButtonClicked1: function(widget) {
        print("You already picked java");
    },
    onCheckButtonClicked2: function(widget) {
        print("You already picked C++");
    },
    onCheckButtonClicked3: function(widget) {
        print("You already picked CSharp");
    },
    onCheckButtonClicked4: function(widget) {
        print("You already picked Javascript");
    },
    onCheckButtonClicked5: function(widget) {
        print("You already picked Python");
    }


});

//
let win = new MyWindow();
win.connect("delete-event", Gtk.main_quit);
win.show_all();
Gtk.main();

