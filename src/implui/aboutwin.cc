/*  Misfit Model 3D
 * 
 *  Copyright (c) 2004-2007 Kevin Worcester
 * 
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, 
 *  USA.
 *
 *  See the COPYING file for full license text.
 */


#include "aboutwin.h"

#include "version.h"

#include <QtWidgets/QTextBrowser>

#define ABOUT_TEXT "<html><head><title>Misfit Model 3D - About</title></head> " \
   "<body><center><br>" \
   "<h1>Misfit Model 3D</h1>" \
   "<h2>" VERSION_STRING "</h2><br>" \
   "Copyright &copy; 2004-2008, Kevin Worcester<br>" \
   "clover.moe fork &copy; 2009-2018 Zack Middleton<br><br>" \
   "https://clover.moe/mm3d<br>" \
   "</center></body></html>"

AboutWin::AboutWin( QWidget * parent )
   : QDialog( parent )
{
   setAttribute( Qt::WA_DeleteOnClose );
   setupUi( this );

   setModal( false );
   setWindowTitle( tr( "Misfit Model 3D - About") );

   resize( 350, 300 );
   m_text->setHtml( QString( ABOUT_TEXT ) );
}

AboutWin::~AboutWin()
{
}

