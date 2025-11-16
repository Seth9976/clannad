// 函数: sub_593290
// 地址: 0x593290
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
WPARAM edi = arg3

if (arg2 u> 0x110)
label_593314:
    
    if (arg2 == 6 && edi.w == 0)
        sub_681b70(arg1)
else if (arg2 == 0x110)
    if (sub_593340(arg1) == 0)
        return 0
else if (arg2 == 0x10)
    void* esi_1 = arg1 + 0x14c
    int32_t i_1 = 2
    int32_t i
    
    do
        sub_6c6290(esi_1)
        esi_1 += 0x334
        i = i_1
        i_1 -= 1
    while (i != 1)
    sub_6c26c0(arg1)
    edi = arg3
else
    if (arg2 != 0x4e)
        goto label_593314
    
    if (sub_593cb0(arg1, edi.w, arg4) == 0)
        return 0

return sub_6c4530(arg1, arg2, edi, arg4)
