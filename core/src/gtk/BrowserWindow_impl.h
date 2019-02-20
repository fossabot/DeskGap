#ifndef gtk_browserwindow_impl_h
#define gtk_browserwindow_impl_h

#include <gtk/gtk.h>
#include <memory>

#include "../window/browser_window.h"

namespace DeskGap {
    struct BrowserWindow::Impl {
    	GtkWindow* gtkWindow;
    	BrowserWindow::EventCallbacks callbacks;
    	gulong deleteEventConnection;
    	static bool handleDeleteEvent(GtkWidget*, GdkEvent*, BrowserWindow*);
    };
}

#endif