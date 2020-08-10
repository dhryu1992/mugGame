static void do_drawing(cairo_t *cr)
{
  cairo_set_source_rgb(cr, 0.1, 0.1, 0.1); 

  cairo_select_font_face(cr, "Purisa",
      CAIRO_FONT_SLANT_NORMAL,
      CAIRO_FONT_WEIGHT_BOLD);

  cairo_set_font_size(cr, 13);

  cairo_move_to(cr, 20, 30);
  cairo_show_text(cr, "Most relationships seem so transitory");  
  cairo_move_to(cr, 20, 60);
  cairo_show_text(cr, "They're all good but not the permanent one");

  cairo_move_to(cr, 20, 120);
  cairo_show_text(cr, "Who doesn't long for someone to hold");

  cairo_move_to(cr, 20, 150);
  cairo_show_text(cr, "Who knows how to love you without being told");
  cairo_move_to(cr, 20, 180);
  cairo_show_text(cr, "Somebody tell me why I'm on my own");
  cairo_move_to(cr, 20, 210);
  cairo_show_text(cr, "If there's a soulmate for everyone");    
}
