// 函数: sub_625980
// 地址: 0x625980
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t* eax = arg6
int32_t esi = arg5
int32_t* edi = arg4

if (esi * 2 s<= eax)
    int32_t* ebx_1 = arg6
    int32_t eax_1 = esi << 3
    int32_t eax_3
    
    do
        void* edx_1 = eax_1 + arg3
        void* esi_1 = eax_1 + edx_1
        int32_t* eax_2 = sub_625a80(eax_1, edx_1, arg3, edx_1, esi_1, edi, arg7)
        arg3 = esi_1
        edi = eax_2
        esi = arg5
        eax_3 = esi * 2
        ebx_1 -= eax_3
        eax_1 = esi << 3
    while (ebx_1 s>= eax_3)
    eax = ebx_1

if (eax s> esi)
    int32_t* edx_2 = &arg3[esi * 2]
    return sub_625a80(eax, edx_2, arg3, edx_2, arg2, edi, arg7)

if (arg3 == arg2)
    return eax

int32_t* edi_1 = edi - arg3
int32_t eax_5

do
    *(edi_1 + arg3) = *arg3
    eax_5 = arg3[1]
    *(edi_1 + arg3 + 4) = eax_5
    arg3 = &arg3[2]
while (arg3 != arg2)

return eax_5
