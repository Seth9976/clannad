// 函数: sub_430440
// 地址: 0x430440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1
int32_t ecx = data_702ffc
void* ecx_1 = data_702ff8
int32_t ecx_2 = data_702ff4
int32_t edx = *(result + 0x54)
void* ecx_3 = data_702ff0
void* ecx_4 = data_702fec
int32_t ecx_5 = data_702fe8
void* ebx = data_703000
int32_t edi = edx - 1
void* esi_2 = *(result + 0x50) - 0x178 + edx * 0x178

if (edi s>= 0)
    int32_t temp0_1
    
    do
        if (*(esi_2 + 0x20) == 0 && *(esi_2 + 0x24) != 0)
            int32_t ecx_7 = *(esi_2 + 0x170)
            
            if (ecx_7 != 0)
                result = *(esi_2 + 0xc)
                
                if (result s>= 0 && result s< *(esi_2 + 0x174))
                    result = result * 0x30 + ecx_7
                    int32_t ecx_8 = *(esi_2 + 0x14)
                    
                    if (ecx_8 s>= 0 && ecx_8 s< *(result + 0x2c) && *(esi_2 + 0x148) != 0)
                        result = sub_430240(result, ecx_8 * 0xb8 + *(result + 0x28), esi_2, ecx_5, 
                            ecx_4, ecx_3, ecx_2, ecx_1, ecx, ebx)
        
        esi_2 -= 0x178
        temp0_1 = edi
        edi -= 1
    while (temp0_1 - 1 s>= 0)

return result
