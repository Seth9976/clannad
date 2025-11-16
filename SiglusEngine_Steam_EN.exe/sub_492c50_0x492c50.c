// 函数: sub_492c50
// 地址: 0x492c50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
int32_t result

for (void* i = &data_924920; i s< 0x925240; )
    if (esi u> 3)
        result = 0
    else
        int32_t ecx_1
        
        if (*(i - 0x18) == 0 || (*(i - 4) s<= 0 && *i s<= 0))
            ecx_1 = 0
        else
            ecx_1 = 1
        
        int32_t edx_1
        
        if (*(i + 0x30) == 0 || (*(i + 0x44) s<= 0 && *(i + 0x48) s<= 0))
            edx_1 = 0
        else
            edx_1 = 1
        
        int32_t edx_2
        
        if (*(i + 0x78) == 0 || (*(i + 0x8c) s<= 0 && *(i + 0x90) s<= 0))
            edx_2 = 0
        else
            edx_2 = 1
        
        int32_t edx_3
        
        if (*(i + 0xc0) == 0 || (*(i + 0xd4) s<= 0 && *(i + 0xd8) s<= 0))
            edx_3 = 0
        else
            edx_3 = 1
        
        result = edx_3 | ecx_1 | edx_1 | edx_2
        
        if (result != 0)
            break
    
    i += 0x248
    esi += 1

return result
