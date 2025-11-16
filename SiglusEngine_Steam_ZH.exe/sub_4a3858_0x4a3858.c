// 函数: sub_4a3858
// 地址: 0x4a3858
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg2
int32_t edi
int32_t var_c = edi
void* result

while (true)
    int32_t edx_1 = *(arg1 + 0x14)
    result = *(edx_1 + (eax << 2))
    int32_t edi_1 = *(result + 0x38)
    
    if (edi_1 != 0xffffffff)
        result = *(edx_1 + (edi_1 << 2))
    
    void* edx_3 = *(*(arg1 + 0x10) + (*(result + 4) << 2))
    
    if (*(result + 0x54) u> arg3)
        *(result + 0x54) = arg3
    
    if (*(result + 0x58) u< arg3)
        *(result + 0x58) = arg3
    
    *(result + 0x5c) += 1
    
    if (*(result + 8) == 0xffffffff)
        break
    
    if (*(edx_3 + 0x28) u> arg3)
        *(edx_3 + 0x28) = arg3
    
    if (*(edx_3 + 0x2c) u< arg3)
        *(edx_3 + 0x2c) = arg3
    
    *(edx_3 + 0x30) += 1
    eax = *(result + 8)

return result
