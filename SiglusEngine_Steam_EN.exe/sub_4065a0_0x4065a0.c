// 函数: sub_4065a0
// 地址: 0x4065a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg3
int32_t* result = sub_4038a0(arg1, *(arg4 + 0x484) << 2)
int32_t var_10 = 0
int32_t edx_2 = *(arg2 + *arg3[1] * 0x3c + 0xa0)

if (*(arg4 + 0x484) s<= 0)
    return result

void* ebp_1 = arg4 + 0x888
int32_t* result_1 = result
void* var_c_1 = ebp_1
bool cond:1_1

do
    int32_t* edi_1 = *(arg5 + (*(ebp_1 - 0x400) << 2))
    int32_t eax_2 = *(arg5 + (*ebp_1 << 2))
    arg3 = edi_1
    *result_1 = sub_4038a0(arg1, eax << 2)
    int32_t esi_1 = 0
    
    if (edx_2 s> 0)
        int32_t* eax_7 = eax_2 - edi_1
        int32_t* var_8_1 = eax_7
        
        while (true)
            int80_t st0_1 = sub_4066f0(*edi_1, *(eax_7 + edi_1))
            edi_1 = &edi_1[1]
            *(*result_1 + (esi_1 << 2)) = fconvert.s(st0_1)
            esi_1 += 1
            
            if (esi_1 s>= edx_2)
                break
            
            eax_7 = var_8_1
        
        edi_1 = arg3
    
    if (esi_1 s< eax)
        void* edi_2 = &edi_1[esi_1]
        
        do
            int80_t st0_2 = sub_4067c0(*edi_2, *(edi_2 + eax_2 - arg3))
            edi_2 += 4
            *(*result_1 + (esi_1 << 2)) = fconvert.s(st0_2)
            esi_1 += 1
        while (esi_1 s< eax)
        
        ebp_1 = var_c_1
    
    ebp_1 += 4
    result_1 = &result_1[1]
    cond:1_1 = var_10 + 1 s< *(arg4 + 0x484)
    var_10 += 1
    var_c_1 = ebp_1
while (cond:1_1)
return result
