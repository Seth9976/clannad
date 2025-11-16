// 函数: sub_4e4c60
// 地址: 0x4e4c60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = data_1332b60
int32_t edi = data_1332b64

switch (data_187c520 - 2)
    case 0
        int32_t eax_2
        int32_t edx
        edx:eax_2 = sx.q(ebx)
        int32_t eax_5
        int32_t edx_1
        edx_1:eax_5 = sx.q(edi)
        *arg1 = (eax_2 - edx) s>> 1
        *arg2 = (eax_5 - edx_1) s>> 1
        return arg2
    case 1
        int32_t eax_11
        int32_t edx_2
        edx_2:eax_11 = sx.q(ebx)
        int32_t eax_13
        int32_t edx_4
        edx_4:eax_13 = sx.q(ebx)
        int32_t eax_17
        int32_t edx_5
        edx_5:eax_17 = sx.q(edi)
        int32_t eax_19
        int32_t edx_7
        edx_7:eax_19 = sx.q(edi)
        *arg2 = ((eax_19 - edx_7) s>> 1) + (((edx_5 & 3) + eax_17) s>> 2)
        *arg1 = ((eax_13 - edx_4) s>> 1) + (((edx_2 & 3) + eax_11) s>> 2)
        return arg2
    case 2
        int32_t eax_24
        int32_t edx_8
        edx_8:eax_24 = sx.q(ebx)
        ebx += (eax_24 - edx_8) s>> 1
        int32_t eax_28
        int32_t edx_9
        edx_9:eax_28 = sx.q(edi)
        edi += (eax_28 - edx_9) s>> 1
    case 3
        *arg1 = ebx * 2
        *arg2 = edi * 2
        return arg2
    case 5
        *arg1 = ebx
        *arg2 = 0
        return arg2

*arg1 = ebx
*arg2 = edi
return arg2
