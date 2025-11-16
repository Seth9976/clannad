// 函数: sub_6eb390
// 地址: 0x6eb390
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg4
char ecx

if (eax == 0 || (*(arg3 + 0x30) & 1) != 0)
    ecx = 0
else
    ecx = 1

int32_t ebx = 0x10 s>> ecx

if (eax != 0)
    arg4 = 1

if (eax == 0 || (*(arg3 + 0x30) & 2) != 0)
    arg4 = nullptr

void* edx_2 = ((arg2 * 3 + eax) << 4) + arg3
void* edi = *(edx_2 + 0x134)
void* esi_2 = *(edx_2 + 0x138) - ebx
void* var_10 = edi
void* eax_3 = *(edx_2 + 0x12c) + (ebx << 1)
void* var_c = (*(edx_2 + 0x130) - 1) * edi - ebx + *(edx_2 + 0x138)
int32_t* result = esi_2 - (0x10 s>> arg4.b) * edi
arg4 = result

if (esi_2 != result)
    void* ebx_2 = esi_2 - edi
    
    do
        sub_748840(ebx_2, esi_2, eax_3)
        int32_t* eax_5 = var_c
        void* edi_1 = edi + eax_5
        result = sub_748840(edi_1, eax_5, eax_3)
        esi_2 -= var_10
        ebx_2 -= var_10
        var_c = edi_1
        edi = var_10
    while (esi_2 != arg4)

return result
