// 函数: sub_4db820
// 地址: 0x4db820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
sub_4db140(ebx - 0x24)
HWND hWnd = *(ebx - 0x20)
arg1:3.b = 0

if (hWnd != 0 && hWnd != arg3)
    RedrawWindow(hWnd, nullptr, nullptr, 
        RDW_INVALIDATE | RDW_INTERNALPAINT | RDW_ERASE | RDW_UPDATENOW | RDW_FRAME)
    sub_4ddba0(ebx - 0x24)

if (IsWindow(arg3) == 0)
    return 1

if (*(ebx - 0x20) != arg3)
    int32_t eax_4 = (sub_4dfbe0(ebx - 0x24, arg3) << 4 ^ *(ebx + 0xa4)) & 0x10
    arg1:3.b = 1
    *(ebx + 0xa4) ^= eax_4

int32_t var_14_2 = 0
int32_t var_18 = 1
int32_t* result = sub_4dd6b0(ebx - 0x24, arg2)

if (result s< 0)
    sub_4db140(ebx - 0x24)
    HWND hWnd_1 = *(ebx - 0x20)
    
    if (hWnd_1 != 0)
        RedrawWindow(hWnd_1, nullptr, nullptr, 
            RDW_INVALIDATE | RDW_INTERNALPAINT | RDW_ERASE | RDW_UPDATENOW | RDW_FRAME)
        
        if (arg1:3.b != 0)
            sub_4ddba0(ebx - 0x24)

return result
