// 函数: sub_575bd0
// 地址: 0x575bd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[1] != 0)
    sub_575cf0(arg1)
    sub_577880(arg1)

int32_t edi = 0
int32_t result = arg1[0xda6] - arg1[0xda5]

if ((result & 0xfffffff8) s> 0)
    do
        int32_t eax_1 = arg1[0xda5]
        int128_t var_24
        __builtin_memset(&var_24, 0, 0x19)
        void* ecx_1 = *(eax_1 + (edi << 3))
        int32_t var_2c = 0
        int32_t var_28 = 1
        int32_t* ecx_3 =
            sub_54b210(&var_24, ecx_1 + ((*(ecx_1 + 0x490) + 0x105) << 2), ecx_1 + 0x414, &var_24)
        void* edx_5 = *(arg1[0xda5] + (edi << 3))
        void* var_10
        
        if (*(edx_5 + 0x4b8) == 0)
            sub_585c30(edx_5 + 0xe0, *(edx_5 + 0x494), var_10, *(edx_5 + 0x4b0), ecx_3, 
                edx_5 + 0xe0, &var_2c, &var_28)
        else
            sub_585ea0(edx_5 + 0xe0, *(edx_5 + 0x494), var_10, *(edx_5 + 0x4b0), *(edx_5 + 0x4b4), 
                edx_5 + 0xe0, &var_2c)
        edi += 1
        result = (arg1[0xda6] - arg1[0xda5]) s>> 3
    while (edi s< result)

return result
