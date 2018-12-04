# Visual-VIM-for-UEFI-Shell
## Goal
This is the reference project for the "torito C Library",
the translation of the VIM/VI source code to get an UEFI shell
.EFI executable.

# Revision history
### 20181204\1
* VIM porting stopped due to usage of too many non-Standard C functions
  that are not available in the Torito C Library, like:
    - stricmp
    - close
    - dup
    - read
    - setmode
    - write
    - \_get_osfhandle
    - \_commit
    - \_ctime64
    - \_\_p\_\_environ
    - isatty
    - \_wchdir
    - \_chdrive
    - \chdir
    - \_wfullpath
    - \_fullpath
    - \_resetstkoflw
    - \_stat64
    - \_wstat64
    - \_\_C\_specific\_handler
    - \_stricoll
    - \_wfopen
    - \_fseeki64
    - \_lseeki64
    - \_ftelli64

### 20181203\1
* Update WindowsTargetPlatformVersion: 10.0.17134.0
* Update PlatformToolset: v141
### 20181202
* initial checkin
* https://github.com/vim/vim taken and modified for Visual Studio 2017 Build environment
* x64 Windows Build is successfully created (Release/Debug)



1>------ Build started: Project: Visual-VIM-for-UEFI-Shell, Configuration: Debug.torito x64 ------
1>LINK : warning LNK4075: ignoring '/INCREMENTAL' due to '/LTCG' specification
1>option.obj : error LNK2001: unresolved external symbol getenv
1>os_win32.obj : error LNK2001: unresolved external symbol getenv
1>term.obj : error LNK2001: unresolved external symbol getenv
1>main.obj : error LNK2001: unresolved external symbol getenv
1>mbyte.obj : error LNK2001: unresolved external symbol getenv
1>message.obj : error LNK2001: unresolved external symbol getenv
1>misc1.obj : error LNK2001: unresolved external symbol getenv
1>diff.obj : error LNK2001: unresolved external symbol getenv
1>evalfunc.obj : error LNK2001: unresolved external symbol getenv
1>ex_cmds.obj : error LNK2001: unresolved external symbol getenv
1>ex_cmds2.obj : error LNK2001: unresolved external symbol getenv
1>eval.obj : error LNK2001: unresolved external symbol strtod
1>evalfunc.obj : error LNK2001: unresolved external symbol strtod
1>ex_cmds.obj : error LNK2001: unresolved external symbol strtod
1>term.obj : error LNK2001: unresolved external symbol stricmp
1>menu.obj : error LNK2001: unresolved external symbol stricmp
1>spell.obj : error LNK2001: unresolved external symbol stricmp
1>syntax.obj : error LNK2001: unresolved external symbol stricmp
1>tag.obj : error LNK2001: unresolved external symbol stricmp
1>ex_docmd.obj : error LNK2001: unresolved external symbol stricmp
1>fileio.obj : error LNK2001: unresolved external symbol stricmp
1>getchar.obj : error LNK2001: unresolved external symbol stricmp
1>main.obj : error LNK2001: unresolved external symbol stricmp
1>eval.obj : error LNK2001: unresolved external symbol stricmp
1>evalfunc.obj : error LNK2001: unresolved external symbol stricmp
1>ex_cmds.obj : error LNK2001: unresolved external symbol stricmp
1>ex_cmds2.obj : error LNK2001: unresolved external symbol stricmp
1>memline.obj : error LNK2001: unresolved external symbol close
1>undo.obj : error LNK2001: unresolved external symbol close
1>evalfunc.obj : error LNK2001: unresolved external symbol close
1>fileio.obj : error LNK2001: unresolved external symbol close
1>main.obj : error LNK2001: unresolved external symbol close
1>memfile.obj : error LNK2001: unresolved external symbol close
1>ex_cmds.obj : error LNK2001: unresolved external symbol fdopen
1>undo.obj : error LNK2001: unresolved external symbol fdopen
1>ex_cmds2.obj : error LNK2001: unresolved external symbol setlocale
1>main.obj : error LNK2001: unresolved external symbol setlocale
1>farsi.obj : error LNK2001: unresolved external symbol strrchr
1>fileio.obj : error LNK2001: unresolved external symbol _lseeki64
1>memfile.obj : error LNK2001: unresolved external symbol _lseeki64
1>memline.obj : error LNK2001: unresolved external symbol _lseeki64
1>tag.obj : error LNK2001: unresolved external symbol _lseeki64
1>fileio.obj : error LNK2001: unresolved external symbol dup
1>main.obj : error LNK2001: unresolved external symbol dup
1>fileio.obj : error LNK2001: unresolved external symbol read
1>fileio.obj : error LNK2001: unresolved external symbol setmode
1>fileio.obj : error LNK2001: unresolved external symbol write
1>os_win32.obj : error LNK2001: unresolved external symbol write
1>getchar.obj : error LNK2001: unresolved external symbol getc
1>misc2.obj : error LNK2001: unresolved external symbol getc
1>spellfile.obj : error LNK2001: unresolved external symbol getc
1>undo.obj : error LNK2001: unresolved external symbol getc
1>iscygpty.obj : error LNK2001: unresolved external symbol _get_osfhandle
1>memfile.obj : error LNK2001: unresolved external symbol _commit
1>memline.obj : error LNK2001: unresolved external symbol _ctime64
1>message.obj : error LNK2001: unresolved external symbol memchr
1>xutils.obj : error LNK2001: unresolved external symbol memchr
1>misc1.obj : error LNK2001: unresolved external symbol __p__environ
1>os_mswin.obj : error LNK2001: unresolved external symbol isatty
1>os_win32.obj : error LNK2001: unresolved external symbol isatty
1>os_mswin.obj : error LNK2001: unresolved external symbol _wchdir
1>os_mswin.obj : error LNK2001: unresolved external symbol _chdrive
1>os_mswin.obj : error LNK2001: unresolved external symbol chdir
1>os_mswin.obj : error LNK2001: unresolved external symbol _wfullpath
1>os_mswin.obj : error LNK2001: unresolved external symbol _fullpath
1>os_mswin.obj : error LNK2001: unresolved external symbol _resetstkoflw
1>os_mswin.obj : error LNK2001: unresolved external symbol _stat64
1>os_mswin.obj : error LNK2001: unresolved external symbol _wstat64
1>os_mswin.obj : error LNK2001: unresolved external symbol __C_specific_handler
1>toritoC64R.lib(file013.obj) : error LNK2001: unresolved external symbol __C_specific_handler
1>os_win32.obj : error LNK2001: unresolved external symbol _wchmod
1>os_win32.obj : error LNK2001: unresolved external symbol _wopen
1>os_win32.obj : error LNK2001: unresolved external symbol _chmod
1>os_win32.obj : error LNK2001: unresolved external symbol rename
1>os_win32.obj : error LNK2001: unresolved external symbol open
1>os_win32.obj : error LNK2001: unresolved external symbol _wmkdir
1>os_win32.obj : error LNK2001: unresolved external symbol _wrmdir
1>os_win32.obj : error LNK2001: unresolved external symbol _mkdir
1>os_win32.obj : error LNK2001: unresolved external symbol _rmdir
1>os_win32.obj : error LNK2001: unresolved external symbol _wgetenv
1>os_win32.obj : error LNK2001: unresolved external symbol _wputenv
1>os_win32.obj : error LNK2001: unresolved external symbol _wsystem
1>os_win32.obj : error LNK2001: unresolved external symbol __p__fmode
1>os_win32.obj : error LNK2001: unresolved external symbol _putenv
1>os_win32.obj : error LNK2001: unresolved external symbol iswctype
1>os_win32.obj : error LNK2001: unresolved external symbol wcscoll
1>os_win32.obj : error LNK2001: unresolved external symbol _wcsicoll
1>os_win32.obj : error LNK2001: unresolved external symbol wcsicmp
1>os_win32.obj : error LNK2001: unresolved external symbol strcoll
1>os_win32.obj : error LNK2001: unresolved external symbol _stricoll
1>os_win32.obj : error LNK2001: unresolved external symbol _wfopen
1>tag.obj : error LNK2001: unresolved external symbol _fseeki64
1>tag.obj : error LNK2001: unresolved external symbol _ftelli64
1>tag.obj : error LNK2001: unresolved external symbol fileno
1>window.obj : error LNK2001: unresolved external symbol _wassert
1>toritoC64R.lib(file007.obj) : error LNK2001: unresolved external symbol _dtest
1>toritoC64R.lib(file007.obj) : error LNK2001: unresolved external symbol _Nan_C
1>toritoC64R.lib(file001.obj) : error LNK2001: unresolved external symbol _handle_nan
1>toritoC64R.lib(file020.obj) : error LNK2001: unresolved external symbol _handle_nan
1>toritoC64R.lib(file015.obj) : error LNK2001: unresolved external symbol _handle_nan
1>toritoC64R.lib(file018.obj) : error LNK2001: unresolved external symbol _handle_nan
1>toritoC64R.lib(file014.obj) : error LNK2001: unresolved external symbol _handle_nan
1>toritoC64R.lib(file004.obj) : error LNK2001: unresolved external symbol _handle_nan
1>toritoC64R.lib(file003.obj) : error LNK2001: unresolved external symbol _handle_nan
1>toritoC64R.lib(file024.obj) : error LNK2001: unresolved external symbol _handle_nan
1>toritoC64R.lib(file023.obj) : error LNK2001: unresolved external symbol _handle_nan
1>toritoC64R.lib(file022.obj) : error LNK2001: unresolved external symbol _handle_nan
1>toritoC64R.lib(file021.obj) : error LNK2001: unresolved external symbol _handle_nan
1>toritoC64R.lib(file019.obj) : error LNK2001: unresolved external symbol __Lcosarray
1>toritoC64R.lib(file005.obj) : error LNK2001: unresolved external symbol __Lcosarray
1>toritoC64R.lib(file019.obj) : error LNK2001: unresolved external symbol __Lsinarray
1>toritoC64R.lib(file005.obj) : error LNK2001: unresolved external symbol __Lsinarray
1>toritoC64R.lib(file019.obj) : error LNK2001: unresolved external symbol __remainder_piby2_forAsm
1>toritoC64R.lib(file005.obj) : error LNK2001: unresolved external symbol __remainder_piby2_forAsm
1>toritoC64R.lib(file002.obj) : error LNK2001: unresolved external symbol __remainder_piby2_forAsm
1>toritoC64R.lib(file019.obj) : error LNK2001: unresolved external symbol __remainder_piby2_fma3
1>toritoC64R.lib(file005.obj) : error LNK2001: unresolved external symbol __remainder_piby2_fma3
1>toritoC64R.lib(file002.obj) : error LNK2001: unresolved external symbol __remainder_piby2_fma3
1>toritoC64R.lib(file019.obj) : error LNK2001: unresolved external symbol __remainder_piby2_fma3_bdl
1>toritoC64R.lib(file005.obj) : error LNK2001: unresolved external symbol __remainder_piby2_fma3_bdl
1>toritoC64R.lib(file002.obj) : error LNK2001: unresolved external symbol __remainder_piby2_fma3_bdl
1>toritoC64R.lib(file019.obj) : error LNK2001: unresolved external symbol _cos_special
1>toritoC64R.lib(file017.obj) : error LNK2001: unresolved external symbol __two_to_jby64_table
1>toritoC64R.lib(file017.obj) : error LNK2001: unresolved external symbol __two_to_jby64_head_table
1>toritoC64R.lib(file006.obj) : error LNK2001: unresolved external symbol __two_to_jby64_head_table
1>toritoC64R.lib(file017.obj) : error LNK2001: unresolved external symbol __two_to_jby64_tail_table
1>toritoC64R.lib(file006.obj) : error LNK2001: unresolved external symbol __two_to_jby64_tail_table
1>toritoC64R.lib(file017.obj) : error LNK2001: unresolved external symbol _exp_special
1>toritoC64R.lib(file010.obj) : error LNK2001: unresolved external symbol __log_256_lead
1>toritoC64R.lib(file006.obj) : error LNK2001: unresolved external symbol __log_256_lead
1>toritoC64R.lib(file010.obj) : error LNK2001: unresolved external symbol __log_256_tail
1>toritoC64R.lib(file006.obj) : error LNK2001: unresolved external symbol __log_256_tail
1>toritoC64R.lib(file010.obj) : error LNK2001: unresolved external symbol __log_F_inv_qword
1>toritoC64R.lib(file009.obj) : error LNK2001: unresolved external symbol __log_F_inv_qword
1>toritoC64R.lib(file010.obj) : error LNK2001: unresolved external symbol _log_special
1>toritoC64R.lib(file009.obj) : error LNK2001: unresolved external symbol __log10_256_lead
1>toritoC64R.lib(file009.obj) : error LNK2001: unresolved external symbol __log10_256_tail
1>toritoC64R.lib(file009.obj) : error LNK2001: unresolved external symbol _log10_special
1>toritoC64R.lib(file006.obj) : error LNK2001: unresolved external symbol _pow_special
1>toritoC64R.lib(file005.obj) : error LNK2001: unresolved external symbol _sin_special
1>toritoC64R.lib(file002.obj) : error LNK2001: unresolved external symbol _tan_special
1>toritoC64R.lib(file013.obj) : error LNK2001: unresolved external symbol _get_fpsr
1>toritoC64R.lib(file013.obj) : error LNK2001: unresolved external symbol _set_fpsr
1>toritoC64R.lib(file013.obj) : error LNK2001: unresolved external symbol _fclrf
1>A:\Visual-VIM-for-UEFI-Shell\x64\Debug.torito\Visual-VIM-for-UEFI-Shell.exe : fatal error LNK1120: 79 unresolved externals
1>Done building project "Visual-VIM-for-UEFI-Shell.vcxproj" -- FAILED.
========== Build: 0 succeeded, 1 failed, 0 up-to-date, 0 skipped ==========
