// 函数: sub_5cc7c0
// 地址: 0x5cc7c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

WPARAM wParam = arg3
int32_t* esi = arg1
uint32_t eax = esi[6]
int32_t var_28 = esi[1]
int32_t ecx_1 = esi[1]
esi[6] = &var_28
int32_t eax_1 = *esi
int32_t var_c = 0x24
int32_t var_8 = 1
uint32_t var_24 = arg2
WPARAM wParam_1 = wParam
LPARAM var_1c = arg4
int32_t var_18 = 0
int32_t var_10 = 0
int32_t var_14 = 0
arg1 = 0

if ((*eax_1)(ecx_1, arg2, wParam, arg4, &arg1, 0) == 0)
    if (arg2 == 0x82)
        int32_t eax_4 = GetWindowLongW(esi[1], 0xfffffffc)
        arg1 = CallWindowProcW(esi[8], esi[1], 0x82, wParam, arg4)
        
        if (esi[8] != DefWindowProcW && GetWindowLongW(esi[1], 0xfffffffc) == eax_4)
            SetWindowLongW(esi[1], 0xfffffffc, esi[8])
        
        esi[7] |= 1
    else
        arg1 = CallWindowProcW(esi[8], esi[1], arg2, wParam, arg4)

int32_t eax_8 = esi[7]

if ((eax_8.b & 1) == 0 || eax != 0)
    LRESULT eax_12 = arg1
    esi[6] = eax
    return eax_12

int32_t edx_1 = esi[1]
esi[7] = eax_8 & 0xfffffffe
int32_t eax_10 = *esi
esi[1] = eax
esi[6] = eax
(*(eax_10 + 0xc))(edx_1)
return arg1
