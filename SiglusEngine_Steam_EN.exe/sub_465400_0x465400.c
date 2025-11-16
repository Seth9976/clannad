// 函数: sub_465400
// 地址: 0x465400
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg4 s< 0)
    return 

arg1 = data_7031bc

if (arg4 s>= arg1 || arg3 s< 0 || arg3 s>= arg1)
    return 

int32_t ecx_1 = arg5 + (arg4 << 1)
int32_t eax_1 = arg2 + (arg3 << 1)

if (arg6 == 0)
    int32_t eax_4 = *(ecx_1 * 0x650 + &data_72d6bc)
    
    if (eax_4 u<= 9)
        uint32_t eax_5 = zx.d(lookup_table_4655e0[eax_4])
        
        switch (eax_5)
            case 0
                sub_463970(eax_5, arg2, arg3, 0)
            case 1
                void* var_1c_1 = ecx_1 * 0x7a0 + &data_98bf04
                sub_464a10(ecx_1 * 0x650 + 0x72d6c0, arg2, arg3, *(ecx_1 * 0x650 + 0x72d6b8), 
                    ecx_1 * 0x650 + 0x72d6c0, *(ecx_1 * 0x650 + 0x72d72c), 
                    ecx_1 * 0x650 + 0x72d6e4, ecx_1 * 0x650 + 0x72d708, 0)
            case 2
                void* var_1c_2 = ecx_1 * 0x7a0 + &data_98bf04
                sub_464dd0(eax_5, arg2, arg3, *(ecx_1 * 0x650 + 0x72d6b8), 0)
            case 3
                void* var_1c_3 = ecx_1 * 0x7a0 + &data_98bf04
                sub_464d10(eax_5, arg2, arg3, *(ecx_1 * 0x650 + 0x72d6b8), 
                    *(ecx_1 * 0x650 + 0x72d730), 0)

*(eax_1 * 0x650 + &data_72d6b0) = *(ecx_1 * 0x650 + &data_72d6b0)
*(eax_1 * 0x650 + 0x72d6b4) = *(ecx_1 * 0x650 + 0x72d6b4)
sub_4d1c30(eax_1 * 0x650 + &data_72d6b0, ecx_1 * 0x650 + 0x72d734, eax_1 * 0x650 + 0x72d734, 0xc8)
sub_4d1c30(eax_1 * 0x650 + &data_72d6b0, ecx_1 * 0x650 + &data_72d7fc, 
    eax_1 * 0x650 + &data_72d7fc, 0xfc)
sub_4d1c30(eax_1 * 0x650 + &data_72d6b0, ecx_1 * 0x650 + &data_72d8f8, 
    eax_1 * 0x650 + &data_72d8f8, 0x78)
sub_4d1c30(eax_1 * 0x650 + &data_72d6b0, ecx_1 * 0x650 + 0x72d970, eax_1 * 0x650 + 0x72d970, 0x378)
sub_4d1c30(eax_1 * 0x650 + &data_72d6b0, ecx_1 * 0x650 + 0x72dce8, eax_1 * 0x650 + 0x72dce8, 0x18)
sub_4d6c40(eax_1 * 0x7a0 + 0x98bf38, eax_1 * 0x7a0 + 0x98bf3c)
arg1 = ecx_1 * 0x7a0 + &data_98bf04
char* ecx_15 = *(arg1 + 0x38)

if (ecx_15 != 0)
    sub_4cfe90(arg1, eax_1 * 0x7a0 + 0x98bf3c, eax_1 * 0x7a0 + 0x98bf38, ecx_15, "objmoji00")
    arg1 = ecx_1 * 0x7a0 + &data_98bf04

if (*(eax_1 * 0x650 + &data_72d6bc) == 8)
    sub_477bb0(eax_1 * 0x7a0 + &data_98c178, arg2, arg3, eax_1 * 0x7a0 + &data_98c178, arg1 + 0x274)
