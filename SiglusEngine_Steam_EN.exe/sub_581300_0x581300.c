// 函数: sub_581300
// 地址: 0x581300
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int16_t* eax = arg5
int32_t esi = 0
uint32_t i_1 = zx.d(eax[1])
uint32_t result_2 = zx.d(*eax)
void* edi = &eax[2]
uint32_t i_2 = i_1
void* ecx = edi + ((i_1 * result_2) << 2)
void* ecx_1 = ecx + 4
arg5 = ecx_1
void* edx = ecx_1 + (*ecx << 2)
uint32_t eax_4 = zx.d(*(edx + 1))
uint32_t result = zx.d(*(edx + 3))
int32_t edx_1 = 0
uint32_t result_1 = result
int32_t var_c = 0

if (i_1 s> 0)
    result = result_2
    uint32_t i
    
    do
        if (result s> 0)
            uint32_t ebx = result
            uint32_t j
            
            do
                void* eax_7 = *(ecx_1 + (*edi << 2)) + edx
                ecx_1.b = *eax_7
                
                if (ecx_1.b == 0 || ecx_1.b == 1)
                    int32_t var_34_1 = 0
                    int32_t var_38_1 = 0xff
                    int32_t var_3c_1 = 0
                    int32_t var_40_1 = 0
                    int32_t var_44_1 = 0
                    sub_584980(eax_7 + 5, arg2, arg3, arg4, eax_7 + 5, zx.d(*(eax_7 + 1)), 
                        zx.d(*(eax_7 + 3)), arg6, arg7, 0, esi, edx_1, 0xffffffff, 0xff, 
                        0xffffffff, 0xffffffff, ecx_1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                        nullptr)
                    edx_1 = var_c
                
                esi += eax_4
                edi += 4
                ecx_1 = arg5
                j = ebx
                ebx -= 1
            while (j != 1)
            i_1 = i_2
            result = result_2
        
        edx_1 += result_1
        esi = 0
        i = i_1
        i_1 -= 1
        var_c = edx_1
        i_2 = i_1
    while (i != 1)

return result
