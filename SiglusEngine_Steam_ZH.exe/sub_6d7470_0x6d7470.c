// 函数: sub_6d7470
// 地址: 0x6d7470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = *(arg3 + 0x128)
char* ebx_1 = *(arg3 + 0x124) + 1
void* result = nullptr
int32_t i_1 = arg2
char* var_8 = ebx_1
*esi = 1
void* eax = &esi[1]
int32_t esi_1

if (arg2 == 0)
    esi_1 = 0
else
    esi_1 = arg2
    int32_t i
    
    do
        arg3.b = *ebx_1
        uint32_t edx = zx.d(arg3.b)
        *eax = arg3.b
        
        if (edx s>= 0x80)
            edx = 0x100 - edx
        
        result += edx
        ebx_1 = &ebx_1[1]
        eax += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

if (esi_1 u< arg4)
    char* ebx_2 = ebx_1 - eax
    char* edx_2 = var_8 - eax
    char* var_8_1 = edx_2
    
    do
        arg3.b = *(ebx_2 + eax)
        arg3.b -= *(edx_2 + eax)
        void* edx_3 = zx.d(arg3.b)
        *eax = arg3.b
        
        if (edx_3 s>= 0x80)
            edx_3 = 0x100 - edx_3
        
        result += edx_3
        
        if (result u> arg5)
            break
        
        edx_2 = var_8_1
        esi_1 += 1
        eax += 1
    while (esi_1 u< arg4)

return result
