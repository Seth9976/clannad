// 函数: sub_427aa0
// 地址: 0x427aa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t* result = __security_cookie ^ &__saved_ebp
int32_t* result_1 = result

if (arg3 u<= 0xff)
    int32_t esi_1 = *((arg3 << 2) + &data_ef2af8)
    *((arg3 << 2) + &data_ef2af8) = 0xffffffff
    result = sub_427990(arg3)
    
    if (arg2 != 0)
        char var_218[0x20c]
        void* eax_3
        uint32_t ecx_1
        eax_3, ecx_1 = sub_4cfd70(&var_218, arg2)
        int32_t var_22c_1 = 0
        result = sub_4254a0(eax_3, &var_218, ecx_1, arg4, 0, 1, 0, 0)
        *((arg3 << 2) + &data_ef2af8) = result
        
        if (result s>= 0)
            sub_4cfdf0(result, arg2, arg3 * 0x28 + &data_9265b0, 0x24)
            result = arg4
            *(arg3 * 0x28 + 0x9265d4) = result
    
    if (esi_1 s>= 0 && esi_1 s< 0x200)
        *(esi_1 * 0x74 + &data_13747ac) -= 1
        
        if (*(esi_1 * 0x74 + &data_13747ac) s<= 0)
            sub_4d6c40(esi_1 * 0x74 + 0x13747b0, esi_1 * 0x74 + 0x13747b4)
            result = sub_425320(esi_1)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
