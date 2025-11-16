// 函数: sub_6c2a80
// 地址: 0x6c2a80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = &arg3[1]
int32_t esi = 0
uint32_t edi_3 = (arg2 - eax + 3) u>> 2

if (eax u> arg2)
    edi_3 = 0

if (edi_3 != 0)
    do
        int32_t edx = *eax
        
        if (edx != *arg4)
            *arg3 = edx
            arg3 = &arg3[1]
        
        esi += 1
        eax = &eax[1]
    while (esi != edi_3)

return arg3
