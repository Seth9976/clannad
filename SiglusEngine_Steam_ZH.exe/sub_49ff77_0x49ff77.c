// 函数: sub_49ff77
// 地址: 0x49ff77
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg2

if (i != 0xffffffff)
    int32_t edx_1 = *(arg1 + 0x14)
    
    do
        char* eax = *(edx_1 + (i << 2))
        
        if ((*eax & 0x20) != 0)
            return 1
        
        int32_t ecx = *(eax + 0x38)
        
        if (ecx != 0xffffffff && (**(edx_1 + (ecx << 2)) & 0x20) != 0)
            return 1
        
        i = *(eax + 8)
    while (i != 0xffffffff)

return 0
