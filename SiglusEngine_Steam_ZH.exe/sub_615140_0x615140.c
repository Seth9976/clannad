// 函数: sub_615140
// 地址: 0x615140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2 = data_bac454
HWND hWnd_2 = *(eax_2 + 4)

if (hWnd_2 != 0)
    SetMenu(hWnd_2, *(eax_2 + 0x1af0))
    eax_2 = data_bac454

HWND hWnd_3 = *(eax_2 + 4)

if (hWnd_3 != 0)
    SetWindowLongW(hWnd_3, 0xfffffff0, 0x12ce0000)
    eax_2 = data_bac454

HWND hWnd = *(eax_2 + 4)

if (hWnd != 0)
    SetWindowPos(hWnd, 0xfffffffe, 0, 0, 0, 0, 0x13)

sub_616b90(data_bac4e4 + 8)
void* edi = data_bac4a0
void* esi = data_bac4e4
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x51eb851f, *(edi + 8) * *(esi + 8))
int32_t edx_1 = edx s>> 5
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = muls.dp.d(0x51eb851f, *(edi + 0xc) * *(esi + 0xc))
int32_t edx_3 = edx_2 s>> 5
sub_6c1150(data_bac454, (edx_1 u>> 0x1f) + edx_1, (edx_3 u>> 0x1f) + edx_3)

if (arg2 == 0)
    if (arg1 == 0)
        sub_6c1770(data_bac454)
    else
        HWND hWnd_1 = *(data_bac454 + 4)
        
        if (hWnd_1 != 0)
            SetWindowPos(hWnd_1, nullptr, *arg1, arg1[1], 0, 0, 0x15)

void* edx_5 = data_bac4a0
void* ecx_9 = data_bac4e4
RECT rect_1
__builtin_memset(&rect_1, 0, 0x10)
*(edx_5 + 0x40) = 0
*(edx_5 + 0x44) = *(ecx_9 + 4)
*(edx_5 + 0x48) = *(ecx_9 + 8)
*(edx_5 + 0x4c) = *(ecx_9 + 0xc)
*(edx_5 + 0x50) = *(ecx_9 + 0x10)
*(edx_5 + 0x54) = *(ecx_9 + 0x14)
GetClientRect(*(data_bac454 + 4), &rect_1)
void* eax_16 = data_bac4a0
int32_t ecx_11 = rect_1.bottom - rect_1.top
*(eax_16 + 0x30) = rect_1.right - rect_1.left
*(eax_16 + 0x34) = ecx_11
void* eax_17 = data_bac454
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetWindowRect(*(eax_17 + 4), &rect)
void* result = data_bac4a0
int32_t edx_9 = rect.right - rect.left
*(result + 0x3c) = rect.bottom - rect.top
*(result + 0x38) = edx_9
result.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
