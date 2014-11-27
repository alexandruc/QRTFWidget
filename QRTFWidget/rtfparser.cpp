#include "rtfparser.h"
#include <QDebug>
#include <librtfcpp.h>

RTFParser::RTFParser()
{

}

void RTFParser::begin()
{
    qDebug() << __FUNCTION__;
}

void RTFParser::end()
{
    qDebug() << __FUNCTION__;
}

void RTFParser::title(string title )
{
    qDebug() << __FUNCTION__ << ": " << title.c_str() ;
}

void  RTFParser::keywords(string keywords )
{
    qDebug() << __FUNCTION__ << ": " << keywords.c_str() ;
}

void RTFParser::author(string author )
{
    qDebug() << __FUNCTION__ << ": " << author.c_str() ;
}

void RTFParser::summary( processor::summary_categories cat, int param)
{
    qDebug() << __FUNCTION__ << ": " << cat << " : " << param ;
}

void RTFParser::print( string str )
{
    qDebug() << __FUNCTION__ << ": " << str.c_str() ;
}

void RTFParser::print_symbol( string str )
{
    qDebug() << __FUNCTION__ << ": " << str.c_str() ;
}

void RTFParser::print_forced_space( )
{
    qDebug() << __FUNCTION__ ;
}

int  RTFParser::print_unicode( int c)
{
    qDebug() << __FUNCTION__ << ": " << c ;
    return 0;
}

void RTFParser::hyperlink( string str )
{
    qDebug() << __FUNCTION__ << ": " << str.c_str() ;
}

void RTFParser::hyperlink_base ( string str )
{
    qDebug() << __FUNCTION__ << ": " << str.c_str() ;
}

void RTFParser::print_char( special_characters ch )
{
    qDebug() << __FUNCTION__ << ": " << ch ;
}

void RTFParser::font_smaller_begin()
{
    qDebug() << __FUNCTION__  ;
}

void RTFParser::font_smaller_end()
{
    qDebug() << __FUNCTION__ ;
}

void RTFParser::table_begin ()
{
    qDebug() << __FUNCTION__ ;
}

void RTFParser::table_end ()
{
    qDebug() << __FUNCTION__ ;
}

void RTFParser::table_cell_begin ()
{
    qDebug() << __FUNCTION__ ;
}

void RTFParser::table_cell_end ()
{
    qDebug() << __FUNCTION__ ;
}

void RTFParser::table_row_begin ()
{
    qDebug() << __FUNCTION__ ;
}

void RTFParser::table_row_end ()
{
    qDebug() << __FUNCTION__ ;
}

format::image_mgr * RTFParser::image_begin(const format::image_descr & image)
{
    qDebug() << __FUNCTION__ << ": " << image.type ;
    return new format::utils::file_image_mgr( "/tmp/zzzzzzz.bmp" );

}

void RTFParser::image_end(format::image_mgr &image)
{
    qDebug() << __FUNCTION__ ;
    delete &image;
}

void RTFParser::enable_attr( int attr, int param, bool enable )
{
    qDebug() << __FUNCTION__ << ": " << attr << " : " << param << " : " << enable ;
}

void RTFParser::register_color( uchar r, uchar g, uchar b )
{
    qDebug() << __FUNCTION__ << ": " << r << " : " << g << " : " << b ;
}
