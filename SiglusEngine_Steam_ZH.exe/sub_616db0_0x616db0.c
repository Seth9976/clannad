// 函数: sub_616db0
// 地址: 0x616db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3

switch (jump_table_616e78[arg4])
    case 0x616dc8
        int32_t eax_2
        int32_t edx
        edx:eax_2 = sx.q(*arg2)
        *arg3 = (eax_2 - edx) s>> 1
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = sx.q(arg2[1])
        arg3[1] = (eax_6 - edx_1) s>> 1
        return arg3
    case 0x616de5
        int32_t ecx = *arg2
        int32_t esi_1 = arg2[1]
        int32_t eax_11
        int32_t edx_2
        edx_2:eax_11 = sx.q(ecx)
        int32_t eax_13
        int32_t edx_4
        edx_4:eax_13 = sx.q(esi_1)
        int32_t eax_15
        int32_t edx_6
        edx_6:eax_15 = sx.q(ecx)
        int32_t eax_18
        int32_t edx_7
        edx_7:eax_18 = sx.q(esi_1)
        arg3[1] = ((eax_18 - edx_7) s>> 1) + (((edx_4 & 3) + eax_13) s>> 2)
        *arg3 = ((eax_15 - edx_6) s>> 1) + (((edx_2 & 3) + eax_11) s>> 2)
        return arg3
    case 0x616e27
        int32_t ecx_4 = arg2[1]
        int32_t eax_25
        int32_t edx_9
        edx_9:eax_25 = sx.q(*arg2 * 3)
        *arg3 = (eax_25 - edx_9) s>> 1
        int32_t eax_29
        int32_t edx_10
        edx_10:eax_29 = sx.q(ecx_4 * 3)
        arg3[1] = (eax_29 - edx_10) s>> 1
        return arg3
    case 0x616e4c
        *arg3 = *arg2 * 2
        arg3[1] = arg2[1] * 2
        return arg3
    case 0x616e63
        *arg3 = *arg2
        arg3[1] = arg2[1]
        return arg3
