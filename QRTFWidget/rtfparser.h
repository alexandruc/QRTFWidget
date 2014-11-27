#ifndef RTFPARSER_H
#define RTFPARSER_H

#include <string>
#include <librtfcpp.h>

class RTFParser :
        public format::processor,
        public format::utils::attributes_stack,
        public format::utils::fonts_stack
{
public:
    RTFParser();


    virtual void begin();
    virtual void end();
    virtual void title(string title );
    virtual void keywords(string keywords );
    virtual void author(string author );
    virtual void summary( processor::summary_categories cat, int param);

    virtual void print( string str );
    virtual void print_symbol( string str );
    virtual void print_forced_space( );
    virtual int  print_unicode( int c );
    virtual void hyperlink( string str );
    virtual void hyperlink_base ( string str );

    virtual void print_char( special_characters ch );
    virtual void font_smaller_begin();
    virtual void font_smaller_end();
    virtual void table_begin ();
    virtual void table_end ();
    virtual void table_cell_begin ();
    virtual void table_cell_end ();
    virtual void table_row_begin ();
    virtual void table_row_end ();

    virtual format::image_mgr * image_begin(const format::image_descr & image);
    virtual void image_end(format::image_mgr & image);

    virtual void enable_attr( int attr, int param, bool enable );
    virtual void register_color( uchar r, uchar g, uchar b );
};

#endif // RTFPARSER_H
