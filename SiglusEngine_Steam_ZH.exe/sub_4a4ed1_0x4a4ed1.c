// 函数: sub_4a4ed1
// 地址: 0x4a4ed1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg3
int32_t edi
int32_t var_8 = edi

if (i != 0)
    int32_t ecx = arg2
    
    do
        if (ecx != 0xffffffff)
            int32_t edx_3 = *(*(*(arg1 + 0x14) + (ecx << 2)) + 0x38)
            
            if (edx_3 != 0xffffffff)
                ecx = edx_3
        
        void* esi_1 = *(*(arg1 + 0x14) + (ecx << 2))
        
        if (*(esi_1 + 0x54) u< i)
            *(esi_1 + 0x54) = i
        
        i = *(esi_1 + 8)
        
        if (i != 0xffffffff)
            i = sub_4a4ed1(i, *(esi_1 + 0x54))
        
        ecx = *(esi_1 + 0x14)
        
        if (ecx == 0xffffffff)
            break
        
        i = *(esi_1 + 0x54)
    while (i != 0)

return i
