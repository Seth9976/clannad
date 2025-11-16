// 函数: sub_613e80
// 地址: 0x613e80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg5
int32_t* ebx = arg4
int32_t* esi = arg3
int32_t ecx = arg6
int32_t edx = eax * 2

if (edx s<= ecx)
    int32_t eax_1 = eax << 4
    int32_t var_c_1 = eax_1
    int32_t eax_4
    
    do
        int32_t* edx_1 = eax_1 + esi
        void* edi_1 = eax_1 + edx_1
        ebx = sub_614070(eax_1, edx_1, esi, edx_1, edi_1, ebx, arg7)
        esi = edi_1
        eax_4 = arg6 - edx
        arg6 = eax_4
        eax_1 = var_c_1
    while (eax_4 s>= edx)
    eax = arg5
    ecx = arg6

if (ecx s> eax)
    void* eax_9 = &esi[eax * 4]
    return sub_614070(eax_9, eax_9, esi, eax_9, arg2, ebx, arg7)

if (esi == arg2)
    return eax

void* ebx_1 = ebx - esi
int32_t* eax_7

do
    *(ebx_1 + esi) = *esi
    eax_7 = sub_6143d0(ebx_1 + &esi[1], &esi[1])
    esi = &esi[4]
while (esi != arg2)

return eax_7
