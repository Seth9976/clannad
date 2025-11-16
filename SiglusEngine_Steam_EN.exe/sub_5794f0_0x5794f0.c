// 函数: sub_5794f0
// 地址: 0x5794f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
void* result = &data_f8c808
int32_t* ebx = &data_1090ae4
int32_t i_1 = 0
void* result_1 = &data_f8c808

do
    int32_t ecx_1 = *ebx
    
    if (ecx_1 == 1)
        __builtin_memcpy(result - 0x2c24, result - 0x2cb0, 0x8c)
        *(result - 0x2c4c) = 0xffffffff
        *(result - 0x2c48) = 0xffffffff
        *(result - 0x2c44) = 0xffffffff
        *(result - 0x2c40) = 0xffffffff
        __builtin_memcpy(result - 0x2b0c, result - 0x2b98, 0x8c)
        *(result - 0x2b34) = 0xffffffff
        *(result - 0x2b30) = 0xffffffff
        *(result - 0x2b2c) = 0xffffffff
        *(result - 0x2b28) = 0xffffffff
        sub_45e2d0(result - 0x2cec)
        sub_45e2d0(result_1 - 0x2cc4)
        __builtin_memcpy(result_1 + 0x24, result_1 - 0x68, 0x8c)
        *(result_1 - 4) = 0xffffffff
        *result_1 = 0xffffffff
        *(result_1 + 4) = 0xffffffff
        *(result_1 + 8) = 0xffffffff
        __builtin_memcpy(result_1 + 0x14c, result_1 + 0xc0, 0x8c)
        *(result_1 + 0x124) = 0xffffffff
        *(result_1 + 0x128) = 0xffffffff
        *(result_1 + 0x12c) = 0xffffffff
        *(result_1 + 0x130) = 0xffffffff
        __builtin_memcpy(result_1 + 0x274, result_1 + 0x1e8, 0x8c)
        *(result_1 + 0x24c) = 0xffffffff
        *(result_1 + 0x250) = 0xffffffff
        *(result_1 + 0x254) = 0xffffffff
        *(result_1 + 0x258) = 0xffffffff
        __builtin_memcpy(result_1 + 0x39c, result_1 + 0x310, 0x8c)
        *(result_1 + 0x374) = 0xffffffff
        *(result_1 + 0x378) = 0xffffffff
        *(result_1 + 0x37c) = 0xffffffff
        *(result_1 + 0x380) = 0xffffffff
        __builtin_memcpy(result_1 + 0x4c4, result_1 + 0x438, 0x8c)
        *(result_1 + 0x49c) = 0xffffffff
        *(result_1 + 0x4a0) = 0xffffffff
        *(result_1 + 0x4a4) = 0xffffffff
        *(result_1 + 0x4a8) = 0xffffffff
        __builtin_memcpy(result_1 + 0x5ec, result_1 + 0x560, 0x8c)
        *(result_1 + 0x5c4) = 0xffffffff
        *(result_1 + 0x5c8) = 0xffffffff
        *(result_1 + 0x5cc) = 0xffffffff
        *(result_1 + 0x5d0) = 0xffffffff
        __builtin_memcpy(result_1 + 0x714, result_1 + 0x688, 0x8c)
        *(result_1 + 0x6ec) = 0xffffffff
        *(result_1 + 0x6f0) = 0xffffffff
        *(result_1 + 0x6f4) = 0xffffffff
        *(result_1 + 0x6f8) = 0xffffffff
        __builtin_memcpy(result_1 + 0x83c, result_1 + 0x7b0, 0x8c)
        *(result_1 + 0x814) = 0xffffffff
        int32_t j = 0
        *(result_1 + 0x818) = 0xffffffff
        *(result_1 + 0x81c) = 0xffffffff
        *(result_1 + 0x820) = 0xffffffff
        void* eax_1 = result_1 - 0x2638
        
        do
            if (*(j + ebx + 0xcc) != 0)
                __builtin_memcpy(eax_1 + 0x24, eax_1 - 0x68, 0x8c)
                *(eax_1 - 4) = 0xffffffff
                *eax_1 = 0xffffffff
                *(eax_1 + 4) = 0xffffffff
                *(eax_1 + 8) = 0xffffffff
            
            j += 1
            eax_1 += 0x128
        while (j s< 0x10)
        
        i = i_1
        
        if (data_107ee54 == i)
            __builtin_memcpy(0x107eee4, &data_107ee58, 0x8c)
            data_107eebc = 0xffffffff
            data_107eec0 = 0xffffffff
            data_107eec4 = 0xffffffff
            data_107eec8 = 0xffffffff
        
        result = result_1
        
        if (data_13130c0:0xc == i)
            __builtin_memcpy(0x107f034, &data_107efa8, 0x8c)
            data_107f00c = 0xffffffff
            data_107f010 = 0xffffffff
            data_107f014 = 0xffffffff
            data_107f018 = 0xffffffff
    else if (ecx_1 == 0)
        *ebx = 2
    
    i += 1
    result += 0x3920
    ebx = &ebx[0x75]
    result_1 = result
    i_1 = i
while (i s< 0x40)

return result
