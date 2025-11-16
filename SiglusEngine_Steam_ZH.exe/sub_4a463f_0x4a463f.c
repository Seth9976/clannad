// 函数: sub_4a463f
// 地址: 0x4a463f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t result = sub_49f7a8(arg1, arg2)

if (result s>= 0)
    arg1[0x30] = *(arg2 + 0xc0)
    int32_t eax_1 = *(arg2 + 0xc4)
    arg1[0x35] = 0
    arg1[0x36] = 0
    arg1[0x37] = 0
    arg1[0x31] = eax_1
    arg1[0x32] = arg3
    arg1[0x33] = arg4
    arg1[0x1d] = *(arg2 + 0x74)
    arg1[0x1e] = *(arg2 + 0x78)
    arg1[0x1f] = *(arg2 + 0x7c)
    arg1[0x20] = *(arg2 + 0x80)
    arg1[0x21] = *(arg2 + 0x84)
    arg1[0x22] = *(arg2 + 0x88)
    arg1[0x23] = *(arg2 + 0x8c)
    arg1[0x24] = *(arg2 + 0x90)
    arg1[0x25] = *(arg2 + 0x94)
    arg1[0x26] = *(arg2 + 0x98)
    arg1[0x27] = *(arg2 + 0x9c)
    arg1[0x28] = *(arg2 + 0xa0)
    arg1[0x29] = *(arg2 + 0xa4)
    arg1[0x2a] = *(arg2 + 0xa8)
    arg1[0x2b] = *(arg2 + 0xac)
    arg1[0x2c] = *(arg2 + 0xb0)
    arg1[0x2d] = *(arg2 + 0xb4)
    arg1[0x2e] = *(arg2 + 0xb8)
    __builtin_memset(&arg1[0xa], 0, 0x4c)
    result = (*(*arg1 + 0xc))()
    
    if (result s>= 0)
        result = sub_49fdf5(arg1, nullptr)
        
        if (result s>= 0)
            return 0

return result
