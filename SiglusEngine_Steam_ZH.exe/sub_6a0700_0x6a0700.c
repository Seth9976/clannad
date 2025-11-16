// 函数: sub_6a0700
// 地址: 0x6a0700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = data_bac4a0

if (*(eax + 0xcf) == 0)
    *(eax + 0xcf) = 1

POINT point
__builtin_memset(&point, 0, 8)
GetCursorPos(&point)
BOOL hMenu = *arg1

if (hMenu != 0)
    hMenu = TrackPopupMenu(hMenu, TPM_NONOTIFY | TPM_RETURNCMD, point.x, point.y, 0, 
        *(data_bac454 + 4), nullptr)

*(data_bac4a0 + 0xd0) = 1
return sub_6a0780(hMenu)
