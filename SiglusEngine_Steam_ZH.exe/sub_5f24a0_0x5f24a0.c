// 函数: sub_5f24a0
// 地址: 0x5f24a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg2
int32_t edi = arg4
int32_t* result_1 = result
int32_t* var_c = arg3

if (edi s>= 0x20)
    uint32_t i_1 = edi u>> 5
    uint32_t i
    
    do
        if (arg3 != &arg3[0x20])
            result = sub_5f27f0(result, &arg3[0x20], arg3, arg6)
        
        arg3 = &arg3[0x20]
        i = i_1
        i_1 -= 1
    while (i != 1)
    edi = arg4
    result = result_1

if (arg3 != result)
    result = sub_5f27f0(result, result, arg3, arg6)

int32_t esi_2 = 0x20

if (edi s> 0x20)
    do
        int32_t var_1c_3 = arg6
        int32_t var_20_1 = edi
        int32_t var_24_1 = esi_2
        int32_t* ecx = *(arg5 + 0x10)
        ecx[1] = *ecx
        int32_t eax_1 = *(arg5 + 0x10)
        int32_t eax_2 =
            GSI1::QueryMiniPDBForTiDefnUDT2(eax_1, result_1, var_c, 0, 0, 0, nullptr, eax_1)
        int32_t esi_3 = esi_2 * 2
        int32_t** ecx_3 = *(arg5 + 0x10)
        result = sub_5f2a10(eax_2, ecx_3[1], *ecx_3, var_c, esi_3, edi, arg6)
        esi_2 = esi_3 * 2
    while (esi_2 s< edi)

return result
