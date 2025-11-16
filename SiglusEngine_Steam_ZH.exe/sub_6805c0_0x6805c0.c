// 函数: sub_6805c0
// 地址: 0x6805c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
void* ebx = arg2
void* var_8_1 = ebx
void* ecx = arg4
void* esi = (ebx << 1) + 2
bool cond:0 = esi != ecx

while (esi s< ecx)
    int32_t ecx_1 = arg3 + (esi << 2)
    
    if (arg6(ecx_1, ecx_1 - 4) != 0)
        esi -= 1
    
    ecx = arg4
    *(arg3 + (ebx << 2)) = *(arg3 + (esi << 2))
    ebx = esi
    esi = (esi << 1) + 2
    cond:0 = esi != ecx

if (not(cond:0))
    *(arg3 + (ebx << 2)) = *(arg3 + (ecx << 2) - 4)
    ebx = ecx - 1

int32_t eax_5
int32_t edx
edx:eax_5 = sx.q(ebx - 1)
void* esi_2 = (eax_5 - edx) s>> 1

while (var_8_1 s< ebx)
    if (arg6(arg3 + (esi_2 << 2), arg5) == 0)
        break
    
    *(arg3 + (ebx << 2)) = *(arg3 + (esi_2 << 2))
    int32_t eax_11
    int32_t edx_1
    edx_1:eax_11 = sx.q(esi_2 - 1)
    ebx = esi_2
    esi_2 = (eax_11 - edx_1) s>> 1

int32_t result = *arg5
*(arg3 + (ebx << 2)) = result
return result
