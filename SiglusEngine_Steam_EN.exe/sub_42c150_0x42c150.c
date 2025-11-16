// 函数: sub_42c150
// 地址: 0x42c150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (arg3 s< 2)
    char var_629_1
    int32_t eax_4
    int32_t eax_3
    
    if (arg3 != 1)
        char var_629
        eax_3.b = var_629
        var_629_1 = eax_3.b
        eax_4 = arg3
    else
        eax_3.b = *(arg3 * 0x88 + 0x8c4d28)
        var_629_1 = eax_3.b
        eax_4 = (&data_8c4d20)[arg3 * 0x22]
    sub_42bc60(&(&data_8c4ca4)[arg3 * 0x22], &(&data_ef08e8)[arg3 * 0x60])
    sub_42bd40(&(&data_ef08e8)[arg3 * 0x60])
    int32_t edi_1 = 0xffffffff
    int32_t var_630
    void var_628
    void var_420
    
    if (arg2 == 0)
        *(arg3 * 0x180 + 0xef093c) = data_70300c
        *(arg3 * 0x180 + 0xef0940) = data_7030dc
    else
        char var_218[0x20c]
        int32_t ecx_3 = sub_4cfd70(&var_218, arg2)
        var_630 = 0xffffffff
        
        if (arg5 == 0 || *arg5 == 0)
            int32_t var_654_2 = ecx_3
            edi_1 = sub_41fa10(&var_218, 1)
            
            if (edi_1 != 0xffffffff)
                if (sub_41fbc0(edi_1, &var_630) == 0)
                    edi_1 = 0xffffffff
                else if (sub_41fc60(edi_1, &var_420) == 0)
                    edi_1 = 0xffffffff
                else
                    sub_4cfd70(&var_628, &var_218)
                    sub_4cfd70(&var_218, &var_420)
        else
            int32_t var_654_1 = ecx_3
            edi_1 = sub_41fa10(arg5, 1)
            
            if (edi_1 != 0xffffffff)
                if (sub_41fbc0(edi_1, &var_630) == 0)
                    edi_1 = 0xffffffff
                else if (sub_41fc60(edi_1, &var_420) == 0)
                    edi_1 = 0xffffffff
                else
                    sub_4cfd70(&var_628, arg5)
                    sub_4cfd70(&var_218, &var_420)
        
        sub_42bf10(&var_218, &(&data_ef08e8)[arg3 * 0x60], &(&data_8c4ca4)[arg3 * 0x22], &var_218, 
            arg4, arg6)
    
    (&data_8c4cf4)[arg3 * 0x22] = arg7
    (&data_8c4cf8)[arg3 * 0x22] = arg8
    (&data_8c4cfc)[arg3 * 0x22] = arg9
    (&data_8c4d00)[arg3 * 0x22] = arg10
    int32_t eax_20 = sub_42cd60(&(&data_8c4ca4)[arg3 * 0x22], &(&data_ef08e8)[arg3 * 0x60])
    (&data_8c4ca4)[arg3 * 0x22] = 1
    
    if (edi_1 == 0xffffffff)
        sub_4cfdf0(eax_20, arg2, &(&data_8c4ca8)[arg3 * 0x88], 0x24)
    else
        sub_4cfdf0(sub_4cfdf0(eax_20, &var_420, &(&data_8c4ca8)[arg3 * 0x88], 0x24), &var_628, 
            arg3 * 0x88 + 0x8c4ccc, 0x24)
        int32_t eax_22 = var_630
        *(arg3 * 0x180 + 0xef08f0) = edi_1
        *(arg3 * 0x180 + 0xef08f4) = eax_22
    
    result = arg4
    (&data_8c4cf0)[arg3 * 0x22] = result
    
    if (arg3 == 1)
        result.b = var_629_1
        
        if (result.b != 0)
            *(arg3 * 0x88 + 0x8c4d28) = 0
            (&data_8c4d20)[arg3 * 0x22] = eax_4
            
            if (result.b != 2)
                result = data_131310c
                (&data_8c4d24)[arg3 * 0x22] = 0
                (&data_8c4d1c)[arg3 * 0x22] = result
    
    *(arg3 * 0x180 + 0xef09c4) += 1

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
