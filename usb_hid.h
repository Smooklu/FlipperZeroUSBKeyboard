#pragma once

#include <furi.h>
#include <gui/gui.h>
#include <gui/view.h>
#include <gui/view_dispatcher.h>
#include <notification/notification.h>

#include <gui/modules/submenu.h>
#include <gui/modules/dialog_ex.h>
#include "views/usb_hid_dirpad.h"
#include "views/usb_hid_keyboard.h"
#include "views/usb_hid_media.h"
#include "views/usb_hid_mouse.h"

typedef struct {
    Gui* gui;
    NotificationApp* notifications;
    ViewDispatcher* view_dispatcher;
    Submenu* device_type_submenu;
    DialogEx* dialog;
    UsbHidDirpad* usb_hid_dirpad;
    UsbHidKeyboard* usb_hid_keyboard;
    UsbHidMedia* usb_hid_media;
    UsbHidMouse* usb_hid_mouse;
    uint32_t view_id;
} UsbHid;

typedef enum {
    UsbHidViewSubmenu,
    UsbHidViewDirpad,
    UsbHidViewKeyboard,
    UsbHidViewMedia,
    UsbHidViewMouse,
    UsbHidViewExitConfirm,
} UsbHidView;
