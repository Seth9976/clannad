// 函数: sub_6153c0
// 地址: 0x6153c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx
ebx.b = arg2
void* ecx = data_bac454
HWND hWnd = *(ecx + 4)

if (hWnd != 0)
    SetMenu(hWnd, *(ecx + 0x1af0))
    ecx = data_bac454

HWND hWnd_1 = *(ecx + 4)

if (hWnd_1 != 0)
    SetWindowLongW(hWnd_1, 0xfffffff0, 0x12ce0000)
    ecx = data_bac454

HWND hWnd_2 = *(ecx + 4)

if (hWnd_2 != 0)
    SetWindowPos(hWnd_2, 0xfffffffe, 0, 0, 0, 0, 0x13)
    ecx = data_bac454

void* eax_2 = data_bac4e4
sub_6c1150(ecx, *(eax_2 + 0x10), *(eax_2 + 0x14))

if (ebx.b == 0)
    if (arg1 == 0)
        sub_6c1770(data_bac454)
    else
        HWND hWnd_3 = *(data_bac454 + 4)
        
        if (hWnd_3 != 0)
            SetWindowPos(hWnd_3, nullptr, *arg1, arg1[1], 0, 0, 0x15)

void* edx = data_bac4a0
void* ecx_2 = data_bac4e4
RECT rect_1
__builtin_memset(&rect_1, 0, 0x10)
*(edx + 0x40) = 2
*(edx + 0x44) = *(ecx_2 + 4)
*(edx + 0x48) = *(ecx_2 + 8)
*(edx + 0x4c) = *(ecx_2 + 0xc)
*(edx + 0x50) = *(ecx_2 + 0x10)
*(edx + 0x54) = *(ecx_2 + 0x14)
GetClientRect(*(data_bac454 + 4), &rect_1)
void* eax_10 = data_bac4a0
int32_t ecx_4 = rect_1.bottom - rect_1.top
*(eax_10 + 0x30) = rect_1.right - rect_1.left
*(eax_10 + 0x34) = ecx_4
void* eax_11 = data_bac454
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetWindowRect(*(eax_11 + 4), &rect)
void* result = data_bac4a0
int32_t edx_4 = rect.right - rect.left
*(result + 0x3c) = rect.bottom - rect.top
*(result + 0x38) = edx_4
result.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
