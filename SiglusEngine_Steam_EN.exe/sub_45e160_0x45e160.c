// 函数: sub_45e160
// 地址: 0x45e160
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = arg3
int32_t var_c = arg2
void* result_1 = result
int32_t esi = *(result + 0x10)

if (esi s> 0)
    result = *(result + 0xc)
    
    if (result != 0)
        int32_t i = 0
        
        if (esi s> 0)
            do
                int32_t ecx = *(result + 0x14)
                int32_t edi_1 = 0
                
                if (ecx s>= 0 && arg6 != ecx)
                    edi_1 = *(result + 0x18)
                
                int32_t edx = arg2 + *(result + 0xc)
                i += 1
                ecx.b = arg5
                int32_t esi_2 = arg4 + *(result + 0x10)
                *(result + 0x30) = ecx.b
                int32_t ecx_1 = *(result + 4)
                *(result + 0x24) = edx
                *(result + 0x34) = edx
                *(result + 0x28) = esi_2
                arg2 = var_c
                *(result + 0x3c) = ecx_1 + edx - 1
                int32_t ecx_4 = *(result + 8) - 1
                *(result + 0x2c) = edi_1
                *(result + 0x38) = esi_2
                *(result + 0x40) = ecx_4 + esi_2
                result += *result
            while (i s< *(result_1 + 0x10))

return result
