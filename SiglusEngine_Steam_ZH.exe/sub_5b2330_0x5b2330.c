// 函数: sub_5b2330
// 地址: 0x5b2330
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg4

if (arg3 != arg2)
    void* edx = &result[0xa6]
    int32_t* result_1 = result
    arg4 = edx
    void** ebx_1 = arg3 + 0x298
    
    do
        __builtin_memcpy(result, &ebx_1[-0xa6], 0x80)
        *(edx - 0x218) = ebx_1[-0x86]
        
        if (edx - 0x214 != &ebx_1[-0x85])
            sub_52e3c0(edx - 0x214, &ebx_1[-0x85], 0, 0xffffffff)
            edx = arg4
        
        *(edx - 0x1fc) = ebx_1[-0x7f]
        __builtin_memcpy(edx - 0x1f8, &ebx_1[-0x7e], 0x80)
        *(edx - 0x178) = ebx_1[-0x5e]
        *(edx - 0x174) = ebx_1[-0x5d]
        *(edx - 0x170) = ebx_1[-0x5c]
        
        if (edx - 0x16c != &ebx_1[-0x5b])
            sub_52e3c0(edx - 0x16c, &ebx_1[-0x5b], 0, 0xffffffff)
            edx = arg4
        
        if (edx - 0x154 != &ebx_1[-0x55])
            sub_52e3c0(edx - 0x154, &ebx_1[-0x55], 0, 0xffffffff)
            edx = arg4
        
        void* eax_13
        
        if (ebx_1 == 0x13c)
            eax_13 = nullptr
        else
            eax_13 = &ebx_1[-0x4e]
        
        sub_5b1750(edx - 0x138, eax_13)
        int32_t* edx_1 = arg4
        __builtin_memcpy(&edx_1[-0x21], &ebx_1[-0x21], 0x80)
        edx_1[-1] = ebx_1[-1]
        
        if (edx_1 != ebx_1)
            sub_52e3c0(edx_1, ebx_1, 0, 0xffffffff)
            edx_1 = arg4
        
        edx_1[6] = ebx_1[6]
        *(edx_1 + 0x1c) = *(ebx_1 + 0x1c)
        edx_1[0xb] = ebx_1[0xb]
        char ecx_7 = ebx_1[0xc].b
        ebx_1 = &ebx_1[0xb3]
        edx_1[0xc].b = ecx_7
        result = &result_1[0xb3]
        edx = &edx_1[0xb3]
        result_1 = result
        arg4 = edx
    while (&ebx_1[-0xa6] != arg2)

return result
