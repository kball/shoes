//
// shoes/native/cocoa.h
// Custom Cocoa interfaces for Shoes
//
#import <Cocoa/Cocoa.h>

@interface ShoesEvents : NSObject
{
  int count;
}
@end

@interface ShoesWindow : NSWindow
{
  VALUE app;
}
@end

@interface ShoesView : NSView
{
  VALUE canvas;
}
@end

@interface ShoesButton : NSButton
{
  VALUE object;
}
@end

@interface ShoesTextField : NSTextField
{
  VALUE object;
}
@end

@interface ShoesSecureTextField : NSSecureTextField
{
  VALUE object;
}
@end

@interface ShoesTextView : NSScrollView
{
  VALUE object;
  NSTextView *textView;
}
@end

@interface ShoesPopUpButton : NSPopUpButton
{
  VALUE object;
}
@end

@interface ShoesTimer : NSObject
{
  VALUE object;
  NSTimer *timer;
}
@end

#define VK_TAB   48
#define VK_BS    51
#define VK_PRIOR 116
#define VK_NEXT  121
#define VK_HOME  115
#define VK_END   119
#define VK_LEFT  123
#define VK_UP    126
#define VK_RIGHT 124
#define VK_DOWN  125
#define VK_F1    122
#define VK_F2    120
#define VK_F3     99
#define VK_F4    118
#define VK_F5     96
#define VK_F6     97
#define VK_F7     98
#define VK_F8    100
#define VK_F9    101
#define VK_F10   109
#define VK_F11   103
#define VK_F12   111

#define KEY_SYM(name, sym) \
  if (key == VK_##name) \
    v = ID2SYM(rb_intern("" # sym)); \
  else
