#include <stdio.h>
#include <gtk/gtk.h>


gboolean onPressEvent(GtkButton *btn, GdkEventButton *event, gpointer data){
  if(event->button == 1) return FALSE;

  GtkLabel *set_1 = (GtkLabel*) data;
  gtk_label_set_text(set_1, "O");
  GtkLabel *set_2 = (GtkLabel*) data;
  gtk_label_set_text(set_2, "O");
  GtkLabel *set_3 = (GtkLabel*) data;
  gtk_label_set_text(set_3, "O");
  GtkLabel *set_4 = (GtkLabel*) data;
  gtk_label_set_text(set_4, "O");
  GtkLabel *set_5 = (GtkLabel*) data;
  gtk_label_set_text(set_5, "O");
  GtkLabel *set_6 = (GtkLabel*) data;
  gtk_label_set_text(set_6, "O");
  GtkLabel *set_7 = (GtkLabel*) data;
  gtk_label_set_text(set_7, "O");
  GtkLabel *set_8 = (GtkLabel*) data;
  gtk_label_set_text(set_8, "O");
  GtkLabel *set_9 = (GtkLabel*) data;
  gtk_label_set_text(set_9, "O");

}
int on_clicked_1(GtkWidget *widget, gpointer data){
  GtkWidget *window2 = (GtkWidget*) data;
  gtk_widget_show(window2);
}
void restart_1(GtkWidget *widget, gpointer data){
  GtkLabel *set_1 = (GtkLabel*) data;
  gtk_label_set_text(set_1, " ");
  GtkLabel *set_2 = (GtkLabel*) data;
  gtk_label_set_text(set_2, " ");
  GtkLabel *set_3 = (GtkLabel*) data;
  gtk_label_set_text(set_3, " ");
  GtkLabel *set_4 = (GtkLabel*) data;
  gtk_label_set_text(set_4, " ");
  GtkLabel *set_5 = (GtkLabel*) data;
  gtk_label_set_text(set_5, " ");
  GtkLabel *set_6 = (GtkLabel*) data;
  gtk_label_set_text(set_6, " ");
  GtkLabel *set_7 = (GtkLabel*) data;
  gtk_label_set_text(set_7, " ");
  GtkLabel *set_8 = (GtkLabel*) data;
  gtk_label_set_text(set_8, " ");
  GtkLabel *set_9 = (GtkLabel*) data;
  gtk_label_set_text(set_9, " ");

}
void on_gato_1(GtkWidget *widget, gpointer data){
  GtkLabel *set_1 = (GtkLabel*) data;
  gtk_label_set_text(set_1, "X");
  GtkLabel *set_2 = (GtkLabel*) data;
  gtk_label_set_text(set_2, "X");
  GtkLabel *set_3 = (GtkLabel*) data;
  gtk_label_set_text(set_3, "X");
  GtkLabel *set_4 = (GtkLabel*) data;
  gtk_label_set_text(set_4, "X");
  GtkLabel *set_5 = (GtkLabel*) data;
  gtk_label_set_text(set_5, "X");
  GtkLabel *set_6 = (GtkLabel*) data;
  gtk_label_set_text(set_6, "X");
  GtkLabel *set_7 = (GtkLabel*) data;
  gtk_label_set_text(set_7, "X");
  GtkLabel *set_8 = (GtkLabel*) data;
  gtk_label_set_text(set_8, "X");
  GtkLabel *set_9 = (GtkLabel*) data;
  gtk_label_set_text(set_9, "X");
}
int set_gato_1(GtkWidget *widget, gpointer matriz[]){

}
void comprobar_victoria(GtkWidget *widget, gpointer data){
  GtkLabel *set_1 = (GtkLabel*) data;
  gtk_label_get_text(set_1);

}



int main(int argc, char* argv[])  {

  GtkBuilder *builder;
  GtkWidget *window;
  GtkWidget *window2;
  GtkWidget *button_1;
  GtkWidget *button_2;
  GtkWidget *gato_1;
  GtkWidget *gato_2;
  GtkWidget *gato_3;
  GtkWidget *gato_4;
  GtkWidget *gato_5;
  GtkWidget *gato_6;
  GtkWidget *gato_7;
  GtkWidget *gato_8;
  GtkWidget *gato_9;
  GtkWidget *restart;
  GtkWidget *comprobar_1;
  GtkWidget *label;
  GtkWidget *label_2;
  GtkWidget *set_1;
  GtkWidget *set_2;
  GtkWidget *set_3;
  GtkWidget *set_4;
  GtkWidget *set_5;
  GtkWidget *set_6;
  GtkWidget *set_7;
  GtkWidget *set_8;
  GtkWidget *set_9;
  int matriz[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};


  gtk_init(&argc, &argv);

  builder = gtk_builder_new_from_file("/home/adcg/Proyecto C/template.glade");

  window = GTK_WIDGET(
    gtk_builder_get_object(builder, "main_window")
  );
  window2 = GTK_WIDGET(
    gtk_builder_get_object(builder, "window2")
  );
  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
  g_signal_connect(window2, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  button_1 = GTK_WIDGET(
    gtk_builder_get_object(builder, "button_1")
  );
  button_2 = GTK_WIDGET(
    gtk_builder_get_object(builder, "button_2")
  );
  restart = GTK_WIDGET(
    gtk_builder_get_object(builder, "restart")
  );
  comprobar_1 = GTK_WIDGET(
    gtk_builder_get_object(builder, "comprobar_1")
  );
  gato_1 = GTK_WIDGET(
    gtk_builder_get_object(builder, "gato_1")
  );
  gato_2 = GTK_WIDGET(
    gtk_builder_get_object(builder, "gato_2")
  );
  gato_3 = GTK_WIDGET(
    gtk_builder_get_object(builder, "gato_3")
  );
  gato_4 = GTK_WIDGET(
    gtk_builder_get_object(builder, "gato_4")
  );
  gato_5 = GTK_WIDGET(
    gtk_builder_get_object(builder, "gato_5")
  );
  gato_6 = GTK_WIDGET(
    gtk_builder_get_object(builder, "gato_6")
  );
  gato_7 = GTK_WIDGET(
    gtk_builder_get_object(builder, "gato_7")
  );
  gato_8 = GTK_WIDGET(
    gtk_builder_get_object(builder, "gato_8")
  );
  gato_9 = GTK_WIDGET(
    gtk_builder_get_object(builder, "gato_9")
  );
  label = GTK_WIDGET(
    gtk_builder_get_object(builder, "label_1")
  );
  label_2 = GTK_WIDGET(
    gtk_builder_get_object(builder, "label_2")
  );
  set_1 = GTK_WIDGET(
    gtk_builder_get_object(builder, "set_1")
  );
  set_2 = GTK_WIDGET(
    gtk_builder_get_object(builder, "set_2")
  );
  set_3 = GTK_WIDGET(
    gtk_builder_get_object(builder, "set_3")
  );
  set_4 = GTK_WIDGET(
    gtk_builder_get_object(builder, "set_4")
  );
  set_5 = GTK_WIDGET(
    gtk_builder_get_object(builder, "set_5")
  );
  set_6 = GTK_WIDGET(
    gtk_builder_get_object(builder, "set_6")
  );
  set_7 = GTK_WIDGET(
    gtk_builder_get_object(builder, "set_7")
  );
  set_8 = GTK_WIDGET(
    gtk_builder_get_object(builder, "set_8")
  );
  set_9 = GTK_WIDGET(
    gtk_builder_get_object(builder, "set_9")
  );

  g_signal_connect(button_1, "clicked", G_CALLBACK(on_clicked_1), window2);
  g_signal_connect(button_2, "clicked", G_CALLBACK(gtk_main_quit), NULL);
  g_signal_connect(restart, "clicked", G_CALLBACK(restart_1), set_1);
  g_signal_connect(restart, "clicked", G_CALLBACK(restart_1), set_2);
  g_signal_connect(restart, "clicked", G_CALLBACK(restart_1), set_3);
  g_signal_connect(restart, "clicked", G_CALLBACK(restart_1), set_4);
  g_signal_connect(restart, "clicked", G_CALLBACK(restart_1), set_5);
  g_signal_connect(restart, "clicked", G_CALLBACK(restart_1), set_6);
  g_signal_connect(restart, "clicked", G_CALLBACK(restart_1), set_7);
  g_signal_connect(restart, "clicked", G_CALLBACK(restart_1), set_8);
  g_signal_connect(restart, "clicked", G_CALLBACK(restart_1), set_9);
  g_signal_connect(comprobar_1, "clicked", G_CALLBACK(comprobar_victoria), set_1);
  g_signal_connect(gato_1, "clicked", G_CALLBACK(on_gato_1), set_1);
  g_signal_connect(gato_1, "button-press-event", G_CALLBACK(onPressEvent), set_1);
  g_signal_connect(gato_1, "clicked", G_CALLBACK(set_gato_1), matriz);
  g_signal_connect(gato_2, "clicked", G_CALLBACK(on_gato_1), set_2);
  g_signal_connect(gato_2, "button-press-event", G_CALLBACK(onPressEvent), set_2);
  g_signal_connect(gato_2, "clicked", G_CALLBACK(set_gato_1), matriz);
  g_signal_connect(gato_3, "clicked", G_CALLBACK(on_gato_1), set_3);
  g_signal_connect(gato_3, "button-press-event", G_CALLBACK(onPressEvent), set_3);
  g_signal_connect(gato_3, "clicked", G_CALLBACK(set_gato_1), matriz);
  g_signal_connect(gato_4, "clicked", G_CALLBACK(on_gato_1), set_4);
  g_signal_connect(gato_4, "button-press-event", G_CALLBACK(onPressEvent), set_4);
  g_signal_connect(gato_4, "clicked", G_CALLBACK(set_gato_1), matriz);
  g_signal_connect(gato_5, "clicked", G_CALLBACK(on_gato_1), set_5);
  g_signal_connect(gato_5, "button-press-event", G_CALLBACK(onPressEvent), set_5);
  g_signal_connect(gato_5, "clicked", G_CALLBACK(set_gato_1), matriz);
  g_signal_connect(gato_6, "clicked", G_CALLBACK(on_gato_1), set_6);
  g_signal_connect(gato_6, "button-press-event", G_CALLBACK(onPressEvent), set_6);
  g_signal_connect(gato_6, "clicked", G_CALLBACK(set_gato_1), matriz);
  g_signal_connect(gato_7, "clicked", G_CALLBACK(on_gato_1), set_7);
  g_signal_connect(gato_7, "button-press-event", G_CALLBACK(onPressEvent), set_7);
  g_signal_connect(gato_7, "clicked", G_CALLBACK(set_gato_1), matriz);
  g_signal_connect(gato_8, "clicked", G_CALLBACK(on_gato_1), set_8);
  g_signal_connect(gato_8, "button-press-event", G_CALLBACK(onPressEvent), set_8);
  g_signal_connect(gato_8, "clicked", G_CALLBACK(set_gato_1), matriz);
  g_signal_connect(gato_9, "clicked", G_CALLBACK(on_gato_1), set_9);
  g_signal_connect(gato_9, "button-press-event", G_CALLBACK(onPressEvent), set_9);
  g_signal_connect(gato_9, "clicked", G_CALLBACK(set_gato_1), matriz);



  gtk_widget_show_all(window);

  gtk_main();
  return 0;
}




//gcc `pkg-config --cflags gtk+-3.0` ejemploGui.c -o exe `pkg-config --libs gtk+-3.0`
