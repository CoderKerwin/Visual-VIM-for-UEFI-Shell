/* pathdef.c */ 
#include "vim.h" 
char_u *default_vim_dir = (char_u *)""; 
char_u *default_vimruntime_dir = (char_u *)""; 
char_u *all_cflags = (char_u *)"cl -c /W3 /nologo  -I. -Iproto -DHAVE_PATHDEF -DWIN32  -DFEAT_CSCOPE -DFEAT_TERMINAL  -DFEAT_JOB_CHANNEL      -DWINVER=0x0501 -D_WIN32_WINNT=0x0501 /MP -DHAVE_STDINT_H /Ox /GL -DNDEBUG  /Zl /MT -DDYNAMIC_ICONV -DDYNAMIC_GETTEXT -DFEAT_HUGE /Fd.\\ObjCAMD64/ /Zi"; 
char_u *all_lflags = (char_u *)"link  /nologo /subsystem:console,5.02 /opt:ref /MAP /LTCG:STATUS oldnames.lib kernel32.lib advapi32.lib shell32.lib gdi32.lib  comdlg32.lib ole32.lib netapi32.lib uuid.lib /machine:AMD64   libcmt.lib  user32.lib          WSock32.lib  /PDB:vim.pdb -debug"; 
char_u *compiled_user = (char_u *)"kilia"; 
char_u *compiled_sys = (char_u *)"LIFEBOOKE734"; 
